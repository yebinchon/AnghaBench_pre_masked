
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
 int FUNC_1 (struct sd*,int ,int*,int) ;
 int FUNC_2 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_3, __s32 VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;
 s32 *VAR_6 = VAR_5->sensor_priv;
 u8 VAR_7;
 int VAR_8;

 VAR_6[VAR_1] = VAR_4;

 FUNC_0(VAR_0, "Set hflip %d", VAR_4);
 VAR_8 = FUNC_1(VAR_5, VAR_2, &VAR_7, 1);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = (0x7f & VAR_7) | ((VAR_4 & 0x01) << 7);

 VAR_8 = FUNC_2(VAR_5, VAR_2,
     &VAR_7, 1);

 return VAR_8;
}
