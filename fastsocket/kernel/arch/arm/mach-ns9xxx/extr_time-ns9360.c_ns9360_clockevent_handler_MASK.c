
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 struct clock_event_device VAR_10 ;
 int FUNC_5 (struct clock_event_device*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_11, void *VAR_12)
{
 int VAR_13 = VAR_11 - VAR_3;
 u32 VAR_14;

 struct clock_event_device *VAR_15 = &VAR_10;


 VAR_14 = FUNC_3(FUNC_2(VAR_13));
 if (FUNC_0(VAR_14, VAR_6, VAR_4) == VAR_7) {
  FUNC_1(VAR_14, VAR_6, VAR_8, VAR_0);
  FUNC_4(VAR_14, FUNC_2(VAR_13));
 }
 FUNC_1(VAR_14, VAR_6, VAR_1, VAR_5);
 FUNC_4(VAR_14, FUNC_2(VAR_13));
 FUNC_1(VAR_14, VAR_6, VAR_1, VAR_9);
 FUNC_4(VAR_14, FUNC_2(VAR_13));

 VAR_15->event_handler(VAR_15);

 return VAR_2;
}
