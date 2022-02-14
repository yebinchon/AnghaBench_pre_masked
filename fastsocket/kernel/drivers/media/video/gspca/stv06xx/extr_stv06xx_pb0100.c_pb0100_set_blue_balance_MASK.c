
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int* sensor_priv; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int __s32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct sd*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_6, __s32 VAR_7)
{
 int VAR_8;
 struct sd *VAR_9 = (struct sd *) VAR_6;
 s32 *VAR_10 = VAR_9->sensor_priv;

 if (VAR_10[VAR_0])
  return -VAR_3;

 VAR_10[VAR_1] = VAR_7;
 VAR_7 += VAR_10[VAR_4];
 if (VAR_7 < 0)
  VAR_7 = 0;
 else if (VAR_7 > 255)
  VAR_7 = 255;

 VAR_8 = FUNC_1(VAR_9, VAR_5, VAR_7);
 FUNC_0(VAR_2, "Set blue gain to %d, status: %d", VAR_7, VAR_8);

 return VAR_8;
}
