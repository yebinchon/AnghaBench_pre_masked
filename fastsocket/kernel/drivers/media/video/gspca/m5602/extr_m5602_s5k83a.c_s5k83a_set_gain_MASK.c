
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {struct s5k83a_priv* sensor_priv; } ;
struct s5k83a_priv {int* settings; } ;
struct gspca_dev {int dummy; } ;
typedef int __s32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sd*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_2, __s32 VAR_3)
{
 int VAR_4;
 u8 VAR_5[2];
 struct sd *VAR_6 = (struct sd *) VAR_2;
 struct s5k83a_priv *VAR_7 = VAR_6->sensor_priv;

 VAR_7->settings[VAR_0] = VAR_3;

 VAR_5[0] = 0x00;
 VAR_5[1] = 0x20;
 VAR_4 = FUNC_0(VAR_6, 0x14, VAR_5, 2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5[0] = 0x01;
 VAR_5[1] = 0x00;
 VAR_4 = FUNC_0(VAR_6, 0x0d, VAR_5, 2);
 if (VAR_4 < 0)
  return VAR_4;



 VAR_5[0] = VAR_3 >> 3;
 VAR_5[1] = VAR_3 >> 1;
 VAR_4 = FUNC_0(VAR_6, VAR_1, VAR_5, 2);

 return VAR_4;
}
