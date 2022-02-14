
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int data; int (* function ) (int ) ;scalar_t__ expires; } ;


 int FUNC_0 (unsigned long,int ,int ) ;
 int FUNC_1 (unsigned long,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_0 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (unsigned long) ;
 unsigned long long FUNC_12 () ;
 int FUNC_13 (unsigned long long) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 int FUNC_17 () ;

void
FUNC_18(void)
{
 unsigned long long VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6, VAR_7;
 u64 VAR_8;
 int VAR_9;



 VAR_8 = 0;
 if (FUNC_16(&VAR_1)) {

  VAR_8 = FUNC_6() +
     FUNC_14(VAR_1.expires -
      VAR_0);
 }
 FUNC_11(VAR_5);

 VAR_9 = FUNC_7();
 if (!VAR_9)
  FUNC_8();

 VAR_4 = FUNC_12();
 FUNC_17();
 FUNC_1(VAR_6, 0, 0);
 VAR_7 = VAR_6;
 VAR_7 &= 0xffff00a0;
 VAR_7 |= 0x00000200;
 FUNC_0(VAR_7, 0, 0);
 FUNC_2(0x01);

 while (VAR_2 != VAR_3) {

  if (FUNC_16(&VAR_1) &&
      FUNC_6() > VAR_8 &&
      FUNC_5(&VAR_1))
   VAR_1.function(VAR_1.data);
  FUNC_4();
 }
 FUNC_9();
 FUNC_0(VAR_6, 0, 0);
 if (!VAR_9)
  FUNC_3();
 FUNC_13(VAR_4);
 FUNC_10(VAR_5);
}
