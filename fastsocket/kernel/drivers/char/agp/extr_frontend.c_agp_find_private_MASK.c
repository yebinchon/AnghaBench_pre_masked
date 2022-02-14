
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_file_private {scalar_t__ my_pid; struct agp_file_private* next; } ;
typedef scalar_t__ pid_t ;
struct TYPE_2__ {struct agp_file_private* file_priv_list; } ;


 TYPE_1__ VAR_0 ;

struct agp_file_private *FUNC_0(pid_t VAR_1)
{
 struct agp_file_private *VAR_2;

 VAR_2 = VAR_0.file_priv_list;

 while (VAR_2 != ((void*)0)) {
  if (VAR_2->my_pid == VAR_1)
   return VAR_2;
  VAR_2 = VAR_2->next;
 }

 return ((void*)0);
}
