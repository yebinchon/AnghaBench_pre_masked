
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sd {scalar_t__* sensor_priv; } ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ s32 ;
typedef scalar_t__ __s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sd*,int ,int *) ;
 int FUNC_2 (struct sd*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_4, __s32 VAR_5)
{
 int VAR_6;
 u16 VAR_7;
 struct sd *VAR_8 = (struct sd *) VAR_4;
 s32 *VAR_9 = VAR_8->sensor_priv;

 VAR_9[VAR_1] = VAR_5;
 VAR_6 = FUNC_1(VAR_8, VAR_2, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5)
  VAR_7 |= VAR_3;
 else
  VAR_7 &= ~VAR_3;

 FUNC_0(VAR_0, "Set vertical flip to %d", VAR_5);
 VAR_6 = FUNC_2(VAR_8, VAR_2, VAR_7);

 return (VAR_6 < 0) ? VAR_6 : 0;
}
