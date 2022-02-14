
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trap_info {scalar_t__ address; } ;
typedef int gate_desc ;
struct TYPE_2__ {unsigned long address; unsigned long size; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct trap_info*) ;
 TYPE_1__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int const*,struct trap_info*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int,int const*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(gate_desc *VAR_1, int VAR_2, const gate_desc *VAR_3)
{
 unsigned long VAR_4 = (unsigned long)&VAR_1[VAR_2];
 unsigned long VAR_5, VAR_6;

 FUNC_5();

 VAR_5 = FUNC_2(VAR_0).address;
 VAR_6 = VAR_5 + FUNC_2(VAR_0).size + 1;

 FUNC_7();

 FUNC_4(VAR_1, VAR_2, VAR_3);

 if (VAR_4 >= VAR_5 && (VAR_4 + 8) <= VAR_6) {
  struct trap_info VAR_7[2];

  VAR_7[1].address = 0;

  if (FUNC_3(VAR_2, VAR_3, &VAR_7[0]))
   if (FUNC_1(VAR_7))
    FUNC_0();
 }

 FUNC_6();
}
