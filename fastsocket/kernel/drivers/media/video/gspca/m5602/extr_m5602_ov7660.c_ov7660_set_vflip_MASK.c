
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int* sensor_priv; } ;
struct gspca_dev {scalar_t__ streaming; } ;
typedef int s32 ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 size_t VAR_2 ;
 int FUNC_1 (struct sd*,int ,int*,int) ;
 int FUNC_2 (struct sd*) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_3, __s32 VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 struct sd *VAR_7 = (struct sd *) VAR_3;
 s32 *VAR_8 = VAR_7->sensor_priv;

 FUNC_0(VAR_0, "Set vertical flip to %d", VAR_4);
 VAR_8[VAR_2] = VAR_4;

 VAR_6 = ((VAR_4 & 0x01) << 4) | (VAR_8[VAR_2] << 5);
 VAR_5 = FUNC_1(VAR_7, VAR_1, &VAR_6, 1);
 if (VAR_5 < 0)
  return VAR_5;


 if (VAR_3->streaming)
  VAR_5 = FUNC_2(VAR_7);

 return VAR_5;
}
