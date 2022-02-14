
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addr; } ;
typedef TYPE_1__ symtable_rec ;
typedef int UWORD ;
struct TYPE_5__ {int addr; char* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int) ;
 TYPE_1__* FUNC_2 (char const*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int*) ;
 void* FUNC_5 () ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_10(UWORD *VAR_5)
{
 char *VAR_6 = FUNC_5();
 if (VAR_6 == ((void*)0)) {
  FUNC_8("Built-in labels are %sabled.\n", VAR_2 ? "en" : "dis");
  if (VAR_4 > 0)
   FUNC_8("Using %d user-defined label%s.\n",
    VAR_4, (VAR_4 > 1) ? "s" : "");
  else
   FUNC_8("There are no user-defined labels.\n");
  FUNC_8(
   "Labels are displayed in disassembly listings.\n"
   "You may also use them as command arguments"



    ".\n"
   "Usage:\n"
   "LABELS OFF            - no labels\n"
   "LABELS BUILTIN        - use only built-in labels\n"
   "LABELS LOAD filename  - use only labels loaded from file\n"
   "LABELS ADD filename   - use built-in and loaded labels\n"
   "LABELS SET name value - define a label\n"
   "LABELS LIST           - list user-defined labels\n"
  );
 }
 else {
  FUNC_0(VAR_6);
  if (FUNC_9(VAR_6, "OFF") == 0) {
   VAR_2 = VAR_0;
   FUNC_3();
  }
  else if (FUNC_9(VAR_6, "BUILTIN") == 0) {
   VAR_2 = VAR_1;
   FUNC_3();
  }
  else if (FUNC_9(VAR_6, "LOAD") == 0) {
   VAR_2 = VAR_0;
   FUNC_6(FUNC_5());
  }
  else if (FUNC_9(VAR_6, "ADD") == 0) {
   VAR_2 = VAR_1;
   FUNC_6(FUNC_5());
  }
  else if (FUNC_9(VAR_6, "SET") == 0) {
   const char *VAR_7 = FUNC_5();
   if (VAR_7 != ((void*)0) && FUNC_4(VAR_5)) {
    symtable_rec *VAR_8 = FUNC_2(VAR_7);
    if (VAR_8 != ((void*)0)) {
     if (VAR_8->addr != *VAR_5) {
      FUNC_8("%s redefined (previous value: %04X)\n", VAR_7, VAR_8->addr);
      VAR_8->addr = *VAR_5;
     }
    }
    else
     FUNC_1(VAR_7, *VAR_5);
   }
   else
    FUNC_8("Missing or bad arguments\n");
  }
  else if (FUNC_9(VAR_6, "LIST") == 0) {
   int VAR_9;
   int VAR_10 = 0;
   for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
    if (++VAR_10 == 24) {
     if (FUNC_7())
      break;
     VAR_10 = 0;
    }
    FUNC_8("%04X %s\n", VAR_3[VAR_9].addr, VAR_3[VAR_9].name);
   }
  }
  else
   FUNC_8("Invalid command, type \"LABELS\" for help\n");
 }
}
