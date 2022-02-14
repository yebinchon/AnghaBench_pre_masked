
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u8 ;
struct mtd_info {scalar_t__ writesize; struct alauda* priv; } ;
struct alauda {size_t bytemask; } ;
typedef size_t loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtd_info*,size_t,void*,int *,int*,int*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,void*,size_t) ;
 size_t FUNC_4 (size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_4, loff_t VAR_5, size_t VAR_6,
  size_t *VAR_7, u_char *VAR_8)
{
 struct alauda *VAR_9 = VAR_4->priv;
 void *VAR_10;
 int VAR_11, VAR_12=0, VAR_13=0;

 VAR_10 = FUNC_2(VAR_4->writesize, VAR_3);
 if (!VAR_10)
  return -VAR_1;

 *VAR_7 = VAR_6;
 while (VAR_6) {
  u8 VAR_14[16];
  size_t VAR_15 = VAR_5 & VAR_9->bytemask;
  size_t VAR_16 = FUNC_4(VAR_6, VAR_4->writesize - VAR_15);

  VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_10, VAR_14,
    &VAR_12, &VAR_13);
  if (VAR_11)
   goto out;

  FUNC_3(VAR_8, VAR_10 + VAR_15, VAR_16);
  VAR_8 += VAR_16;
  VAR_5 += VAR_16;
  VAR_6 -= VAR_16;
 }
 VAR_11 = 0;
 if (VAR_12)
  VAR_11 = -VAR_2;
 if (VAR_13)
  VAR_11 = -VAR_0;
out:
 FUNC_1(VAR_10);
 return VAR_11;
}
