
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
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sd*,int ,int*,int) ;
 int VAR_3 ;
 int FUNC_3 (struct sd*) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_4, __s32 VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 struct sd *VAR_8 = (struct sd *) VAR_4;
 s32 *VAR_9 = VAR_8->sensor_priv;

 FUNC_0(VAR_0, "Set vertical flip to %d", VAR_5);
 VAR_9[VAR_2] = VAR_5;

 if (FUNC_1(VAR_3))
  VAR_5 = !VAR_5;

 VAR_7 = ((VAR_5 & 0x01) << 4) | (VAR_9[VAR_2] << 5);
 VAR_6 = FUNC_2(VAR_8, VAR_1, &VAR_7, 1);
 if (VAR_6 < 0)
  return VAR_6;


 if (VAR_4->streaming)
  VAR_6 = FUNC_3(VAR_8);

 return VAR_6;
}
