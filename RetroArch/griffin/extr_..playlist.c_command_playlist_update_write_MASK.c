
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {int dummy; } ;
typedef int playlist_t ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,size_t,struct playlist_entry const*) ;
 int FUNC_2 (int *) ;

void FUNC_3(
      playlist_t *VAR_0,
      size_t VAR_1,
      const struct playlist_entry *VAR_2)
{
   playlist_t *VAR_3 = VAR_0 ? VAR_0 : FUNC_0();

   if (!VAR_3)
      return;

   FUNC_1(
         VAR_3,
         VAR_1,
         VAR_2);

   FUNC_2(VAR_3);
}
