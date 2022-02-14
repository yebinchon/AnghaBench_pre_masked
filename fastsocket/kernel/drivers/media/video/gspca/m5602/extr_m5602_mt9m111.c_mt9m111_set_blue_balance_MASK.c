
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

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_3, __s32 VAR_4)
{
 u8 VAR_5[2];
 struct sd *VAR_6 = (struct sd *) VAR_3;
 s32 *VAR_7 = VAR_6->sensor_priv;

 VAR_7[VAR_0] = VAR_4;
 VAR_5[1] = (VAR_4 & 0xff);
 VAR_5[0] = (VAR_4 & 0xff00) >> 8;

 FUNC_0(VAR_1, "Set blue balance %d", VAR_4);

 return FUNC_1(VAR_6, VAR_2,
      VAR_5, 2);
}
