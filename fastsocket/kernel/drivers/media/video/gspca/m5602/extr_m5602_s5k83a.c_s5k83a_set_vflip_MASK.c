
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sd {struct s5k83a_priv* sensor_priv; } ;
struct s5k83a_priv {int* settings; } ;
struct gspca_dev {int dummy; } ;
typedef int __s32 ;


 size_t VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int*) ;
 int FUNC_1 (struct sd*,scalar_t__*) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_1, __s32 VAR_2)
{
 int VAR_3;
 u8 VAR_4;
 __s32 VAR_5;
 struct sd *VAR_6 = (struct sd *) VAR_1;
 struct s5k83a_priv *VAR_7 = VAR_6->sensor_priv;

 VAR_7->settings[VAR_0] = VAR_2;

 FUNC_0(VAR_1, &VAR_5);

 VAR_3 = FUNC_1(VAR_6, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_4) {
  VAR_2 = !VAR_2;
  VAR_5 = !VAR_5;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_5);
 return VAR_3;
}
