
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UWORD ;
typedef scalar_t__ ULONG ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__* VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 UWORD VAR_2 = 0;
 int VAR_3 = FUNC_0(&VAR_2);


 if (!VAR_3) {
  VAR_2 = 64;
 }

 if (VAR_1 != ((void*)0)) {
  long int VAR_4 = 0;
  ULONG VAR_5 = 0;
  int VAR_6 = 0;
  do {
   if (*(VAR_0+VAR_4) != 0) {
    FUNC_1("%04X ", (UWORD) VAR_4);
    VAR_5++;
    if (++VAR_6 == 8) {
     FUNC_1("\n");
     VAR_6 = 0;
    };
   };
  } while ((++VAR_4 < 65536) && (VAR_5 < VAR_2));
 FUNC_1("\n");
 } else {
  FUNC_1("Use tss first.\n");
 }
}
