
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* name; scalar_t__ beh; int mask; int min; int max; scalar_t__ var; scalar_t__ data; int need_to_save; } ;
typedef TYPE_1__ menu_entry ;
struct TYPE_7__ {int volume; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*) ;
 TYPE_5__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,char const*,char const*) ;
 int FUNC_2 (char*,char const*,...) ;
 TYPE_1__* FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (char const*,char**,int ) ;

__attribute__((used)) static void FUNC_8(const char *VAR_4, const char *VAR_5, int *VAR_6)
{
 menu_entry *VAR_7;
 int VAR_8;

 if (FUNC_5(VAR_4, "LastUsedROM") == 0)
  return;

 if (FUNC_6(VAR_4, "bind", 4) == 0) {
  *VAR_6 = 1;
  return;
 }

 if (FUNC_5(VAR_4, "Sound Volume") == 0) {
  VAR_3.volume = FUNC_0(VAR_5);
  return;
 }

 for (VAR_7 = FUNC_3(); VAR_7 != ((void*)0); VAR_7 = FUNC_4())
 {
  char *VAR_9;

  if (!VAR_7->need_to_save)
   continue;
  if (VAR_7->name == ((void*)0) || FUNC_5(VAR_4, VAR_7->name) != 0)
   continue;

  if (VAR_7->beh == VAR_1) {
   VAR_8 = FUNC_7(VAR_5, &VAR_9, 0);
   if (*VAR_9 != 0)
    goto bad_val;
   if (VAR_8) *(int *)VAR_7->var |= VAR_7->mask;
   else *(int *)VAR_7->var &= ~VAR_7->mask;
   return;
  }
  else if (VAR_7->beh == VAR_2) {
   VAR_8 = FUNC_7(VAR_5, &VAR_9, 0);
   if (*VAR_9 != 0)
    goto bad_val;
   if (VAR_8 < VAR_7->min) VAR_8 = VAR_7->min;
   if (VAR_8 > VAR_7->max) VAR_8 = VAR_7->max;
   *(int *)VAR_7->var = VAR_8;
   return;
  }
  else if (VAR_7->beh == VAR_0) {
   const char **VAR_10, *VAR_11;
   int VAR_12;

   VAR_10 = (const char **)VAR_7->data;
   if (VAR_10 == ((void*)0))
    goto bad_val;
   for (VAR_12 = 0; VAR_10[VAR_12] != ((void*)0); VAR_12++) {
    for (VAR_11 = VAR_10[VAR_12]; *VAR_11 == ' '; VAR_11++)
     ;
    if (FUNC_5(VAR_11, VAR_5) == 0) {
     *(int *)VAR_7->var = VAR_12;
     return;
    }
   }
   goto bad_val;
  }
  else if (FUNC_1(VAR_7, VAR_4, VAR_5))
   return;
 }

 FUNC_2("config_readsect: unhandled var: \"%s\"\n", VAR_4);
 return;

bad_val:
 FUNC_2("config_readsect: unhandled val for \"%s\": \"%s\"\n", VAR_4, VAR_5);
}
