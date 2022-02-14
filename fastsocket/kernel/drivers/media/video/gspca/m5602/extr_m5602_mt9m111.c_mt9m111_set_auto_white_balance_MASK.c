
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
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sd*,int ,int*,int) ;
 int FUNC_2 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_3,
       __s32 VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;
 s32 *VAR_6 = VAR_5->sensor_priv;
 int VAR_7;
 u8 VAR_8[2];

 VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_8, 2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6[VAR_0] = VAR_4 & 0x01;
 VAR_8[1] = ((VAR_8[1] & 0xfd) | ((VAR_4 & 0x01) << 1));

 VAR_7 = FUNC_2(VAR_5, VAR_2, VAR_8, 2);

 FUNC_0(VAR_1, "Set auto white balance %d", VAR_4);
 return VAR_7;
}
