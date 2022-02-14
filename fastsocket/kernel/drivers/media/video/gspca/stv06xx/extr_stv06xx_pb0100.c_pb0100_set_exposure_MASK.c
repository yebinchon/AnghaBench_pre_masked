
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__* sensor_priv; } ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ s32 ;
typedef scalar_t__ __s32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 int FUNC_1 (struct sd*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_5, __s32 VAR_6)
{
 int VAR_7;
 struct sd *VAR_8 = (struct sd *) VAR_5;
 s32 *VAR_9 = VAR_8->sensor_priv;

 if (VAR_9[VAR_0])
  return -VAR_2;

 VAR_9[VAR_3] = VAR_6;
 VAR_7 = FUNC_1(VAR_8, VAR_4, VAR_6);
 FUNC_0(VAR_1, "Set exposure to %d, status: %d", VAR_6, VAR_7);

 return VAR_7;
}
