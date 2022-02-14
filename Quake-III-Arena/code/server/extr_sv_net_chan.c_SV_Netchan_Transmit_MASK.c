
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* next; int msgBuffer; int msg; } ;
typedef TYPE_1__ netchan_buffer_t ;
struct TYPE_13__ {int data; int cursize; } ;
typedef TYPE_2__ msg_t ;
struct TYPE_15__ {scalar_t__ unsentFragments; } ;
struct TYPE_14__ {TYPE_8__ netchan; TYPE_1__** netchan_end_queue; } ;
typedef TYPE_3__ client_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_8__*,int ,int ) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_0 ;

void FUNC_7( client_t *VAR_1, msg_t *VAR_2) {
 FUNC_2( VAR_2, VAR_0 );
 if (VAR_1->netchan.unsentFragments) {
  netchan_buffer_t *VAR_3;
  FUNC_0("#462 SV_Netchan_Transmit: unsent fragments, stacked\n");
  VAR_3 = (netchan_buffer_t *)FUNC_6(sizeof(netchan_buffer_t));

  FUNC_1(&VAR_3->msg, VAR_3->msgBuffer, sizeof( VAR_3->msgBuffer ), VAR_2);
  VAR_3->next = ((void*)0);

  *VAR_1->netchan_end_queue = VAR_3;
  VAR_1->netchan_end_queue = &(*VAR_1->netchan_end_queue)->next;

  FUNC_4(&VAR_1->netchan);
 } else {
  FUNC_5( VAR_1, VAR_2 );
  FUNC_3( &VAR_1->netchan, VAR_2->cursize, VAR_2->data );
 }
}
