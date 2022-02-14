
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int count; } ;
typedef TYPE_1__ symbol_t ;
typedef int stored_ptr ;
typedef int new_symbol ;
struct TYPE_19__ {int (* get ) (TYPE_4__*,TYPE_2__*,TYPE_2__*,int ) ;scalar_t__ (* put ) (TYPE_4__*,TYPE_2__*,TYPE_2__*,int ) ;} ;
struct TYPE_18__ {int size; TYPE_1__** data; } ;
typedef TYPE_2__ DBT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__**,TYPE_1__**,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_2__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,TYPE_2__*,TYPE_2__*,int ) ;
 TYPE_1__* FUNC_7 (char*) ;
 TYPE_4__* VAR_1 ;

symbol_t *
FUNC_8(char *VAR_2)
{
 symbol_t *VAR_3;
 DBT VAR_4;
 DBT VAR_5;
 int VAR_6;

 VAR_4.data = (void *)VAR_2;
 VAR_4.size = FUNC_3(VAR_2);

 if ((VAR_6 = VAR_1->get(VAR_1, &VAR_4, &VAR_5, 0)) != 0) {
  if (VAR_6 == -1) {
   FUNC_2("Symbol table get operation failed");
   FUNC_0(VAR_0);

  } else if (VAR_6 == 1) {

   symbol_t *VAR_7;

   VAR_7 = FUNC_7(VAR_2);
   VAR_5.data = &VAR_7;
   VAR_5.size = sizeof(VAR_7);
   if (VAR_1->put(VAR_1, &VAR_4, &VAR_5,
                0) !=0) {
    FUNC_2("Symtable put failed");
    FUNC_0(VAR_0);
   }
   return (VAR_7);
  } else {
   FUNC_2("Unexpected return value from db get routine");
   FUNC_0(VAR_0);

  }
 }
 FUNC_1(&VAR_3, VAR_5.data, sizeof(VAR_3));
 VAR_3->count++;
 VAR_5.data = &VAR_3;
 if (VAR_1->put(VAR_1, &VAR_4, &VAR_5, 0) !=0) {
  FUNC_2("Symtable put failed");
  FUNC_0(VAR_0);
 }
 return (VAR_3);
}
