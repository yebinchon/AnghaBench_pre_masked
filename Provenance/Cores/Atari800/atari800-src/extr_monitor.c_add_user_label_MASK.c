
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addr; int name; } ;
typedef TYPE_1__ symtable_rec ;
typedef int UWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char const*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(const char *VAR_3, UWORD VAR_4)
{

 if (VAR_1 == ((void*)0))
  VAR_1 = (symtable_rec *) FUNC_0(128 * sizeof(symtable_rec));
 else if (VAR_2 >= 128
       && (VAR_2 & (VAR_2 - 1)) == 0) {

  VAR_1 = (symtable_rec *) FUNC_1(VAR_1,
   2 * VAR_2 * sizeof(symtable_rec));
 }
 VAR_1[VAR_2].name = FUNC_2(VAR_3);
 VAR_1[VAR_2].addr = VAR_4;
 VAR_2++;
}
