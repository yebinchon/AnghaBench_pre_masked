
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int * sensor_priv; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int __s32 ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_1,
      __s32 *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;
 s32 *VAR_4 = VAR_3->sensor_priv;

 *VAR_2 = VAR_4[VAR_0];
 return 0;
}
