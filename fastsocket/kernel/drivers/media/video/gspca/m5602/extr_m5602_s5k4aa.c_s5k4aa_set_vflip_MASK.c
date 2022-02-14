
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
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sd*,int ,int*,int) ;
 int FUNC_3 (struct sd*,int ,int*,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_8, __s32 VAR_9)
{
 struct sd *VAR_10 = (struct sd *) VAR_8;
 s32 *VAR_11 = VAR_10->sensor_priv;
 u8 VAR_12 = VAR_2;
 int VAR_13;

 VAR_11[VAR_6] = VAR_9;

 FUNC_0(VAR_0, "Set vertical flip to %d", VAR_9);
 VAR_13 = FUNC_3(VAR_10, VAR_1, &VAR_12, 1);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_10, VAR_3, &VAR_12, 1);
 if (VAR_13 < 0)
  return VAR_13;

 if (FUNC_1(VAR_7))
  VAR_9 = !VAR_9;

 VAR_12 = ((VAR_12 & ~VAR_4) | ((VAR_9 & 0x01) << 7));
 VAR_13 = FUNC_3(VAR_10, VAR_3, &VAR_12, 1);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_10, VAR_5, &VAR_12, 1);
 if (VAR_13 < 0)
  return VAR_13;
 if (VAR_9)
  VAR_12 &= 0xfe;
 else
  VAR_12 |= 0x01;
 VAR_13 = FUNC_3(VAR_10, VAR_5, &VAR_12, 1);
 return VAR_13;
}
