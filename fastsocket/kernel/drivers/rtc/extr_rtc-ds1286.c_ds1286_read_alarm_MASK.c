
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tm_min; int tm_hour; int tm_wday; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {TYPE_1__ time; } ;
struct ds1286_priv {int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 struct ds1286_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (struct ds1286_priv*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct ds1286_priv *VAR_6 = FUNC_1(VAR_4);
 unsigned char VAR_7;
 unsigned long VAR_8;





 FUNC_3(&VAR_6->lock, VAR_8);
 VAR_5->time.tm_min = FUNC_2(VAR_6, VAR_3) & 0x7f;
 VAR_5->time.tm_hour = FUNC_2(VAR_6, VAR_2) & 0x1f;
 VAR_5->time.tm_wday = FUNC_2(VAR_6, VAR_1) & 0x07;
 VAR_7 = FUNC_2(VAR_6, VAR_0);
 FUNC_4(&VAR_6->lock, VAR_8);

 VAR_5->time.tm_min = FUNC_0(VAR_5->time.tm_min);
 VAR_5->time.tm_hour = FUNC_0(VAR_5->time.tm_hour);
 VAR_5->time.tm_sec = 0;
 return 0;
}
