
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drive_list_entry {int id_firmware; scalar_t__ id_model; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__,char*) ;
 scalar_t__ FUNC_1 (char*,int ) ;

int FUNC_2(u16 *VAR_2, const struct drive_list_entry *VAR_3)
{
 for ( ; VAR_3->id_model; VAR_3++)
  if ((!FUNC_0(VAR_3->id_model, (char *)&VAR_2[VAR_1])) &&
      (!VAR_3->id_firmware ||
       FUNC_1((char *)&VAR_2[VAR_0], VAR_3->id_firmware)))
   return 1;
 return 0;
}
