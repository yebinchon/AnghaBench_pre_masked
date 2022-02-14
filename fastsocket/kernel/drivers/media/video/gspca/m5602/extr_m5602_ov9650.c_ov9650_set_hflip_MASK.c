
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
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 size_t VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sd*,int ,int*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_5, __s32 VAR_6)
{
 int VAR_7;
 u8 VAR_8;
 struct sd *VAR_9 = (struct sd *) VAR_5;
 s32 *VAR_10 = VAR_9->sensor_priv;

 FUNC_0(VAR_0, "Set horizontal flip to %d", VAR_6);

 VAR_10[VAR_1] = VAR_6;

 if (!FUNC_1(VAR_4))
  VAR_8 = ((VAR_6 & 0x01) << 5) |
    (VAR_10[VAR_3] << 4);
 else
  VAR_8 = ((VAR_6 & 0x01) << 5) |
    (!VAR_10[VAR_3] << 4);

 VAR_7 = FUNC_2(VAR_9, VAR_2, &VAR_8, 1);

 return VAR_7;
}
