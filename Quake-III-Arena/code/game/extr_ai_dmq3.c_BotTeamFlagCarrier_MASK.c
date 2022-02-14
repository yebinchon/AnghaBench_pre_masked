
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int client; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_8__ {int valid; } ;
typedef TYPE_2__ aas_entityinfo_t ;


 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_3(bot_state_t *VAR_2) {
 int VAR_3;
 aas_entityinfo_t VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1 && VAR_3 < VAR_0; VAR_3++) {
  if (VAR_3 == VAR_2->client)
   continue;

  FUNC_0(VAR_3, &VAR_4);

  if (!VAR_4.valid)
   continue;

  if (!FUNC_2(&VAR_4))
   continue;

  if (!FUNC_1(VAR_2, VAR_3))
   continue;

  return VAR_3;
 }
 return -1;
}
