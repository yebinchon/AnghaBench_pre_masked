
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {int enabled; int kdebug_iops; int kdebug_slowcheck; int oldest_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(boolean_t VAR_10, uint32_t VAR_11)
{
 int VAR_12 = FUNC_5(VAR_0);
 FUNC_3(VAR_9);
 if (VAR_10) {



  VAR_7.oldest_time = FUNC_2();
  VAR_8 |= VAR_11;
  VAR_7.kdebug_slowcheck &= ~VAR_6;
  VAR_7.enabled = 1;
  FUNC_0();
 } else {
  VAR_8 &= ~(VAR_2|VAR_1);
  VAR_7.kdebug_slowcheck |= VAR_6;
  VAR_7.enabled = 0;
  FUNC_0();
 }
 FUNC_4(VAR_9);
 FUNC_5(VAR_12);

 if (VAR_10) {
  FUNC_1(VAR_7.kdebug_iops, VAR_4, ((void*)0));
 } else {





  FUNC_1(VAR_7.kdebug_iops, VAR_3, ((void*)0));
  FUNC_1(VAR_7.kdebug_iops, VAR_5, ((void*)0));
 }
}
