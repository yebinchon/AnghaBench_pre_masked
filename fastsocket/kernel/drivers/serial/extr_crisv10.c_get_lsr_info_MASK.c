
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ head; scalar_t__ tail; } ;
struct e100_serial {unsigned long last_tx_active; unsigned long last_tx_active_usec; int char_time_usec; TYPE_1__ xmit; } ;


 int VAR_0 ;
 unsigned long FUNC_0 () ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned int*,unsigned int*,int) ;
 unsigned long VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct e100_serial * VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6 = VAR_2;

 unsigned long VAR_7 = VAR_3;
 unsigned long VAR_8 = FUNC_0();
 unsigned long VAR_9 =
  (VAR_7 - VAR_4->last_tx_active) * 1000000/VAR_1 +
  VAR_8 - VAR_4->last_tx_active_usec;

 if (VAR_4->xmit.head != VAR_4->xmit.tail ||
     VAR_9 < 2*VAR_4->char_time_usec) {
  VAR_6 = 0;
 }


 if (FUNC_1(VAR_5, &VAR_6, sizeof(int)))
  return -VAR_0;
 return 0;
}
