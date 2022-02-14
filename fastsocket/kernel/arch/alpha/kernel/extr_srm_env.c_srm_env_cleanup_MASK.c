
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ id; int * name; int * proc_entry; } ;
typedef TYPE_1__ srm_env_t ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static void
FUNC_1(void)
{
 srm_env_t *VAR_8;
 unsigned long VAR_9;

 if (VAR_3) {



  if (VAR_4) {
   VAR_8 = VAR_6;
   while (VAR_8->name != ((void*)0) && VAR_8->id != 0) {
    if (VAR_8->proc_entry) {
     FUNC_0(VAR_8->name,
       VAR_4);
     VAR_8->proc_entry = ((void*)0);
    }
    VAR_8++;
   }
   FUNC_0(VAR_1, VAR_3);
  }




  if (VAR_5) {
   for (VAR_9 = 0; VAR_9 <= 255; VAR_9++) {
    VAR_8 = &VAR_7[VAR_9];

    if (VAR_8->proc_entry) {
     FUNC_0(VAR_8->name,
       VAR_5);
     VAR_8->proc_entry = ((void*)0);
     VAR_8->name = ((void*)0);
    }
   }
   FUNC_0(VAR_2, VAR_3);
  }

  FUNC_0(VAR_0, ((void*)0));
 }

 return;
}
