
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_file_private {int access_flags; } ;
struct agp_controller {struct agp_client* clients; } ;
struct agp_client {struct agp_client* next; int pid; } ;
struct TYPE_2__ {int used_by_controller; int * current_controller; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct agp_file_private* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct agp_controller *VAR_3,
          struct agp_file_private *VAR_4)
{
 struct agp_client *VAR_5;

 FUNC_2(VAR_0, &VAR_4->access_flags);
 VAR_5 = VAR_3->clients;

 while (VAR_5 != ((void*)0)) {
  struct agp_file_private *VAR_6;

  VAR_6 = FUNC_1(VAR_5->pid);

  if (VAR_6 != ((void*)0))
   FUNC_2(VAR_0, &VAR_6->access_flags);

  VAR_5 = VAR_5->next;
 }

 VAR_2.current_controller = ((void*)0);
 VAR_2.used_by_controller = 0;
 FUNC_0(VAR_1);
}
