
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int* sensor_priv; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int __s32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_6, __s32 VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_6;
 s32 *VAR_9 = VAR_8->sensor_priv;
 u8 VAR_10 = VAR_5;
 int VAR_11;

 VAR_9[VAR_1] = VAR_7;
 FUNC_0(VAR_0, "Set exposure to %d", VAR_7);
 VAR_11 = FUNC_1(VAR_8, VAR_4, &VAR_10, 1);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_10 = (VAR_7 >> 8) & 0xff;
 VAR_11 = FUNC_1(VAR_8, VAR_2, &VAR_10, 1);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_10 = VAR_7 & 0xff;
 VAR_11 = FUNC_1(VAR_8, VAR_3, &VAR_10, 1);

 return VAR_11;
}
