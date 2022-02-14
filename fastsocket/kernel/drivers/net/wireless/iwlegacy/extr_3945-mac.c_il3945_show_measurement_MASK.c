
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct il_spectrum_notification {int dummy; } ;
struct il_priv {int measurement_status; int lock; int measure_report; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int measure_report ;


 int VAR_0 ;
 int VAR_1 ;
 struct il_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int,int,int,char*,int,int) ;
 int FUNC_2 (struct il_spectrum_notification*,int *,int) ;
 int FUNC_3 (int,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
   char *VAR_4)
{
 struct il_priv *VAR_5 = FUNC_0(VAR_2);
 struct il_spectrum_notification VAR_6;
 u32 VAR_7 = sizeof(VAR_6), VAR_8 = 0, VAR_9 = 0;
 u8 *VAR_10 = (u8 *) &VAR_6;
 unsigned long VAR_11;

 FUNC_4(&VAR_5->lock, VAR_11);
 if (!(VAR_5->measurement_status & VAR_0)) {
  FUNC_5(&VAR_5->lock, VAR_11);
  return 0;
 }
 FUNC_2(&VAR_6, &VAR_5->measure_report, VAR_7);
 VAR_5->measurement_status = 0;
 FUNC_5(&VAR_5->lock, VAR_11);

 while (VAR_7 && VAR_1 - VAR_8) {
  FUNC_1(VAR_10 + VAR_9, VAR_7, 16, 1, VAR_4 + VAR_8,
       VAR_1 - VAR_8, 1);
  VAR_8 = FUNC_6(VAR_4);
  if (VAR_1 - VAR_8)
   VAR_4[VAR_8++] = '\n';

  VAR_9 += 16;
  VAR_7 -= FUNC_3(VAR_7, 16U);
 }

 return VAR_8;
}
