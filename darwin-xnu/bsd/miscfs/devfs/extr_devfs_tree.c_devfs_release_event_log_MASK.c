
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* devfs_event_log_t ;
struct TYPE_3__ {int * del_entries; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(devfs_event_log_t VAR_1, int VAR_2)
{
 if (VAR_1->del_entries == ((void*)0)) {
  FUNC_1("Free of devfs notify info that has not been intialized.\n");
 }

 if (VAR_2) {
  FUNC_0(VAR_1->del_entries, VAR_0);
 }

 VAR_1->del_entries = ((void*)0);
}
