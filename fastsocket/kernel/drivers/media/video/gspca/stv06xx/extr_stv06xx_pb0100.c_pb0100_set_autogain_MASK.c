
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int* sensor_priv; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int __s32 ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (struct sd*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_4, __s32 VAR_5)
{
 int VAR_6;
 struct sd *VAR_7 = (struct sd *) VAR_4;
 s32 *VAR_8 = VAR_7->sensor_priv;

 VAR_8[VAR_0] = VAR_5;
 if (VAR_8[VAR_0]) {
  if (VAR_8[VAR_2])
   VAR_5 = FUNC_0(6)|FUNC_0(4)|FUNC_0(0);
  else
   VAR_5 = FUNC_0(4)|FUNC_0(0);
 } else
  VAR_5 = 0;

 VAR_6 = FUNC_2(VAR_7, VAR_3, VAR_5);
 FUNC_1(VAR_1, "Set autogain to %d (natural: %d), status: %d",
        VAR_8[VAR_0], VAR_8[VAR_2],
        VAR_6);

 return VAR_6;
}
