
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
 int FUNC_1 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_4, __s32 VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_4;
 s32 *VAR_7 = VAR_6->sensor_priv;
 u8 VAR_8;
 int VAR_9;

 VAR_7[VAR_1] = VAR_5;
 FUNC_0(VAR_0, "Set exposure to %d", VAR_5 & 0xffff);

 VAR_8 = ((VAR_5 & 0xff00) >> 8);
 FUNC_0(VAR_0, "Set exposure to high byte to 0x%x",
        VAR_8);

 VAR_9 = FUNC_1(VAR_6, VAR_2,
      &VAR_8, 1);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = (VAR_5 & 0xff);
 FUNC_0(VAR_0, "Set exposure to low byte to 0x%x",
        VAR_8);
 VAR_9 = FUNC_1(VAR_6, VAR_3,
      &VAR_8, 1);

 return VAR_9;
}
