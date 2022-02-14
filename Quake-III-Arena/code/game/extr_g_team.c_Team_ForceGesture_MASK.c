
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int flags; TYPE_2__* client; int inuse; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_5__ {int sessionTeam; } ;
struct TYPE_6__ {TYPE_1__ sess; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;

void FUNC_0(int VAR_3) {
 int VAR_4;
 gentity_t *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = &VAR_2[VAR_4];
  if (!VAR_5->inuse)
   continue;
  if (!VAR_5->client)
   continue;
  if (VAR_5->client->sess.sessionTeam != VAR_3)
   continue;

  VAR_5->flags |= VAR_0;
 }
}
