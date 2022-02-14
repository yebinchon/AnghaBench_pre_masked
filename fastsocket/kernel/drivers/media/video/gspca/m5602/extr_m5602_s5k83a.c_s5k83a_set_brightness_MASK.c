
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct sd {struct s5k83a_priv* sensor_priv; } ;
struct s5k83a_priv {void** settings; } ;
struct gspca_dev {int dummy; } ;
typedef void* __s32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sd*,int ,void**,int) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_2, __s32 VAR_3)
{
 int VAR_4;
 u8 VAR_5[1];
 struct sd *VAR_6 = (struct sd *) VAR_2;
 struct s5k83a_priv *VAR_7 = VAR_6->sensor_priv;

 VAR_7->settings[VAR_0] = VAR_3;
 VAR_5[0] = VAR_3;
 VAR_4 = FUNC_0(VAR_6, VAR_1, VAR_5, 1);
 return VAR_4;
}
