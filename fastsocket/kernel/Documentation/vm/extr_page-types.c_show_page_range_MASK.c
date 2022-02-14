
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,unsigned long,...) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1,
       unsigned long VAR_2, uint64_t VAR_3)
{
 static uint64_t VAR_4;
 static unsigned long VAR_5;
 static unsigned long VAR_6;
 static unsigned long VAR_7;

 if (VAR_3 == VAR_4 && VAR_2 == VAR_6 + VAR_7 &&
     (!VAR_0 || VAR_1 == VAR_5 + VAR_7)) {
  VAR_7++;
  return;
 }

 if (VAR_7) {
  if (VAR_0)
   FUNC_1("%lx\t", VAR_5);
  FUNC_1("%lx\t%lx\t%s\n",
    VAR_6, VAR_7, FUNC_0(VAR_4));
 }

 VAR_4 = VAR_3;
 VAR_6 = VAR_2;
 VAR_5 = VAR_1;
 VAR_7 = 1;
}
