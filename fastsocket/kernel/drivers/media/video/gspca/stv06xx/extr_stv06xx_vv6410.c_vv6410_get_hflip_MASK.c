
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int * sensor_priv; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int __s32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_2, __s32 *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;
 s32 *VAR_5 = VAR_4->sensor_priv;

 *VAR_3 = VAR_5[VAR_1];
 FUNC_0(VAR_0, "Read horizontal flip %d", *VAR_3);

 return 0;
}
