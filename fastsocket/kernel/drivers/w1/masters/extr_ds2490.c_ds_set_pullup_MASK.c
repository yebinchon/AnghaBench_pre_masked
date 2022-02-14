
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds_device {int spu_sleep; int spu_bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ds_device*,int,int) ;

__attribute__((used)) static int FUNC_1(struct ds_device *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 u8 VAR_6 = 1 + (u8)(VAR_4 >> 4);

 int VAR_7 = VAR_6<<4;


 VAR_3->spu_bit = VAR_4 ? VAR_2 : 0;





 if (VAR_4 == 0 || VAR_7 == VAR_3->spu_sleep)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_1 | VAR_0, VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_3->spu_sleep = VAR_7;

 return VAR_5;
}
