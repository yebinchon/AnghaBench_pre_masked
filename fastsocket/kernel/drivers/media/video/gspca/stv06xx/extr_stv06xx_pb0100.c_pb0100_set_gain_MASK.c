
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__* sensor_priv; } ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ s32 ;
typedef scalar_t__ __s32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 size_t VAR_7 ;
 int FUNC_1 (struct gspca_dev*,scalar_t__) ;
 int FUNC_2 (struct gspca_dev*,scalar_t__) ;
 int FUNC_3 (struct sd*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_8, __s32 VAR_9)
{
 int VAR_10;
 struct sd *VAR_11 = (struct sd *) VAR_8;
 s32 *VAR_12 = VAR_11->sensor_priv;

 if (VAR_12[VAR_0])
  return -VAR_3;

 VAR_12[VAR_4] = VAR_9;
 VAR_10 = FUNC_3(VAR_11, VAR_5, VAR_9);
 if (!VAR_10)
  VAR_10 = FUNC_3(VAR_11, VAR_6, VAR_9);
 FUNC_0(VAR_2, "Set green gain to %d, status: %d", VAR_9, VAR_10);

 if (!VAR_10)
  VAR_10 = FUNC_2(VAR_8,
          VAR_12[VAR_7]);
 if (!VAR_10)
  VAR_10 = FUNC_1(VAR_8,
         VAR_12[VAR_1]);

 return VAR_10;
}
