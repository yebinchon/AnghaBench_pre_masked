
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int msg ;
struct TYPE_5__ {scalar_t__ size; TYPE_1__* cheats; } ;
typedef TYPE_2__ cheat_manager_t ;
struct TYPE_4__ {char* desc; char* code; scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_2 (char*,int,char*,unsigned int,char*,char*) ;

void FUNC_3(cheat_manager_t *VAR_2, unsigned VAR_3)
{
   char VAR_4[256];

   if (!VAR_2 || !VAR_2->cheats || VAR_2->size == 0)
      return;

   FUNC_2(VAR_4, sizeof(VAR_4), "Cheat: #%u [%s]: %s",
         VAR_3, VAR_2->cheats[VAR_3].state ? "ON" : "OFF",
         (VAR_2->cheats[VAR_3].desc != ((void*)0)) ?
         (VAR_2->cheats[VAR_3].desc) : (VAR_2->cheats[VAR_3].code)
         );
   FUNC_1(VAR_4, 1, 180, 1, ((void*)0), VAR_1, VAR_0);
   FUNC_0("%s\n", VAR_4);
}
