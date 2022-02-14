
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (scalar_t__,unsigned long) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_7)
{
 unsigned long VAR_8 = 1 << VAR_7;
 FUNC_1("end: %d\n", VAR_7);
 if (!(VAR_6[VAR_7].status & (VAR_2 | VAR_3))) {
  FUNC_0(VAR_1 + VAR_5, VAR_8);

  if (VAR_6[VAR_7].status & VAR_4)
   FUNC_0(VAR_1 + VAR_0, VAR_8);
 }
}
