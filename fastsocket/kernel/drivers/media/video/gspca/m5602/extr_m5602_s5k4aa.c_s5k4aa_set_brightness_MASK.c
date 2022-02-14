
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int* sensor_priv; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int __s32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_5, __s32 VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_5;
 s32 *VAR_8 = VAR_7->sensor_priv;
 u8 VAR_9 = VAR_4;
 int VAR_10;

 VAR_8[VAR_0] = VAR_6;

 FUNC_0(VAR_1, "Set brightness to %d", VAR_6);
 VAR_10 = FUNC_1(VAR_7, VAR_3, &VAR_9, 1);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = VAR_6 & 0xff;
 return FUNC_1(VAR_7, VAR_2, &VAR_9, 1);
}
