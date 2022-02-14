
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int * sensor_priv; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int __s32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct sd*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_3, __s32 VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 struct sd *VAR_7 = (struct sd *) VAR_3;
 s32 *VAR_8 = VAR_7->sensor_priv;

 FUNC_0(VAR_0, "Setting gain to %d", VAR_4);

 VAR_8[VAR_1] = VAR_4;

 VAR_5 = FUNC_1(VAR_7, VAR_2, &VAR_6, 1);
 return VAR_5;
}
