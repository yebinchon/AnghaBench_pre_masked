
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char u16 ;
struct TYPE_4__ {unsigned char old_signals; unsigned char serial_signals; int status_timer; int lock; } ;
typedef TYPE_1__ SLMP_INFO ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,unsigned char) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_9)
{
 u16 VAR_10 = 0;
 SLMP_INFO *VAR_11 = (SLMP_INFO*)VAR_9;
 unsigned long VAR_12;
 unsigned char VAR_13;


 FUNC_4(&VAR_11->lock,VAR_12);
 FUNC_0(VAR_11);
 FUNC_5(&VAR_11->lock,VAR_12);



 VAR_13 = VAR_11->old_signals ^ VAR_11->serial_signals;
 VAR_11->old_signals = VAR_11->serial_signals;

 if (VAR_13 & VAR_6)
  VAR_10 |= VAR_2|(VAR_11->serial_signals&VAR_6);

 if (VAR_13 & VAR_7)
  VAR_10 |= VAR_3|(VAR_11->serial_signals&VAR_7);

 if (VAR_13 & VAR_5)
  VAR_10 |= VAR_1|(VAR_11->serial_signals&VAR_5);

 if (VAR_13 & VAR_4)
  VAR_10 |= VAR_0|(VAR_11->serial_signals&VAR_4);

 if (VAR_10)
  FUNC_1(VAR_11,VAR_10);

 FUNC_2(&VAR_11->status_timer, VAR_8 + FUNC_3(10));
}
