
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct entry_template {int * et_callback; int et_flags; int et_units; int et_group; int et_key; } ;
typedef int spl_t ;
typedef TYPE_1__* ledger_template_t ;
struct TYPE_7__ {size_t lt_cnt; size_t lt_table_size; struct entry_template* lt_entries; int * lt_zone; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 struct entry_template* FUNC_2 (int) ;
 int FUNC_3 (struct entry_template*,int) ;
 int FUNC_4 (struct entry_template*,struct entry_template*,int) ;
 int FUNC_5 (char*,int ,int) ;
 scalar_t__ FUNC_6 (int,int,int*) ;
 int FUNC_7 (int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

int
FUNC_11(ledger_template_t VAR_2, const char *VAR_3,
    const char *VAR_4, const char *VAR_5)
{
 int VAR_6;
 struct entry_template *VAR_7;

 if ((VAR_3 == ((void*)0)) || (FUNC_8(VAR_3) >= VAR_0) || (VAR_2->lt_zone != ((void*)0)))
  return (-1);

 FUNC_9(VAR_2);


 if (VAR_2->lt_cnt == VAR_2->lt_table_size) {
  struct entry_template *VAR_8, *VAR_9;
  int VAR_10, VAR_11, VAR_12 = 0;
  spl_t VAR_13;

  VAR_10 = VAR_2->lt_table_size;
  VAR_11 = VAR_10 * (int)(sizeof(struct entry_template));

  if (FUNC_6(VAR_11, 2, &VAR_12)) {
   FUNC_10(VAR_2);
   return -1;
  }
  VAR_8 = FUNC_2(VAR_12);
  if (VAR_8 == ((void*)0)) {
   FUNC_10(VAR_2);
   return -1;
  }
  FUNC_4(VAR_8, VAR_2->lt_entries, VAR_11);
  FUNC_5(((char *)VAR_8) + VAR_11, 0, VAR_11);

  VAR_2->lt_table_size = VAR_10 * 2;

  VAR_9 = VAR_2->lt_entries;

  FUNC_1(VAR_13, VAR_2);
  VAR_2->lt_entries = VAR_8;
  FUNC_0(VAR_13, VAR_2);

  FUNC_3(VAR_9, VAR_11);
 }

 VAR_7 = &VAR_2->lt_entries[VAR_2->lt_cnt];
 FUNC_7(VAR_7->et_key, VAR_3, VAR_0);
 FUNC_7(VAR_7->et_group, VAR_4, VAR_0);
 FUNC_7(VAR_7->et_units, VAR_5, VAR_0);
 VAR_7->et_flags = VAR_1;
 VAR_7->et_callback = ((void*)0);

 VAR_6 = VAR_2->lt_cnt++;
 FUNC_10(VAR_2);

 return (VAR_6);
}
