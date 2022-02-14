
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct c2port_ops {size_t block_size; size_t blocks_num; } ;
struct c2port_device {struct c2port_ops* ops; } ;
typedef int ssize_t ;
typedef size_t loff_t ;


 char VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct c2port_device*) ;
 int FUNC_1 (struct c2port_device*) ;
 int FUNC_2 (struct c2port_device*,size_t*) ;
 int FUNC_3 (struct c2port_device*,int ) ;
 int FUNC_4 (struct c2port_device*,char) ;

__attribute__((used)) static ssize_t FUNC_5(struct c2port_device *VAR_5,
    char *VAR_6, loff_t VAR_7, size_t VAR_8)
{
 struct c2port_ops *VAR_9 = VAR_5->ops;
 u8 VAR_10, VAR_11 = 128;
 int VAR_12, VAR_13;

 if (VAR_11 > VAR_8)
  VAR_11 = VAR_8;
 if (VAR_9->block_size * VAR_9->blocks_num - VAR_7 < VAR_11)
  VAR_11 = VAR_9->block_size * VAR_9->blocks_num - VAR_7;


 if (VAR_7 >= VAR_9->block_size * VAR_9->blocks_num)
  return -VAR_4;



 FUNC_3(VAR_5, VAR_2);


 FUNC_4(VAR_5, VAR_0);


 VAR_13 = FUNC_0(VAR_5);
 if (VAR_13 < 0)
  return VAR_13;




 VAR_13 = FUNC_1(VAR_5);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_13 = FUNC_2(VAR_5, &VAR_10);
 if (VAR_13 < 0)
  return VAR_13;
 if (VAR_10 != VAR_1)
  return -VAR_3;


 FUNC_4(VAR_5, VAR_7 >> 8);
 VAR_13 = FUNC_0(VAR_5);
 if (VAR_13 < 0)
  return VAR_13;


 FUNC_4(VAR_5, VAR_7 & 0x00ff);
 VAR_13 = FUNC_0(VAR_5);
 if (VAR_13 < 0)
  return VAR_13;


 FUNC_4(VAR_5, VAR_11);
 VAR_13 = FUNC_0(VAR_5);
 if (VAR_13 < 0)
  return VAR_13;




 VAR_13 = FUNC_1(VAR_5);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_13 = FUNC_2(VAR_5, &VAR_10);
 if (VAR_13 < 0)
  return VAR_13;
 if (VAR_10 != VAR_1)
  return -VAR_3;


 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_13 = FUNC_4(VAR_5, *(VAR_6+VAR_12));
  if (VAR_13 < 0)
   return VAR_13;

  VAR_13 = FUNC_0(VAR_5);
  if (VAR_13 < 0)
   return VAR_13;

 }


 VAR_13 = FUNC_1(VAR_5);
 if (VAR_13 < 0)
  return VAR_13;

 return VAR_11;
}
