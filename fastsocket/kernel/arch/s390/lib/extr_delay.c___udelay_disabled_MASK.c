
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ clock_comparator; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (unsigned long,int ,int ) ;
 int FUNC_1 (unsigned long,int ,int ) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 unsigned long VAR_3 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(unsigned long long VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 u64 VAR_8;
 u64 VAR_9;

 VAR_5 = VAR_3 | VAR_1 | VAR_0;
 VAR_9 = FUNC_3() + (VAR_4 << 12);
 VAR_8 = FUNC_5();
 FUNC_1(VAR_7, 0, 0);
 VAR_6 = (VAR_7 & 0xffff00e0) | 0x00000800;
 FUNC_0(VAR_6 , 0, 0);
 FUNC_7();
 do {
  FUNC_9(VAR_9);
  FUNC_10();
  FUNC_2(VAR_5);
  FUNC_4();
 } while (FUNC_3() < VAR_9);
 FUNC_8();
 FUNC_0(VAR_7, 0, 0);
 FUNC_6(VAR_8);
 FUNC_9(VAR_2.clock_comparator);
}
