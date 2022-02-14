
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i2o_device {int dummy; } ;
typedef int s16 ;
typedef int opblk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2o_device*,int ,int *,int,int *,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (void*,int *,int) ;

int FUNC_5(struct i2o_device *VAR_4, int VAR_5, int VAR_6,
         void *VAR_7, int VAR_8)
{
 u32 VAR_9[] = { FUNC_0(0x00000001),
  FUNC_0((u16) VAR_5 << 16 | VAR_3),
  FUNC_0((s16) VAR_6 << 16 | 0x00000001)
 };
 u8 *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_8 + 8, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_4, VAR_2, VAR_9,
       sizeof(VAR_9), VAR_10, VAR_8 + 8);

 FUNC_4(VAR_7, VAR_10 + 8, VAR_8);

 FUNC_2(VAR_10);

 return VAR_11;
}
