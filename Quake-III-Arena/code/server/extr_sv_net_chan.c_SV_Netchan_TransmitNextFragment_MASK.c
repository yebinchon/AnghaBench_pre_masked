
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int data; int cursize; } ;
struct TYPE_9__ {struct TYPE_9__* next; TYPE_6__ msg; } ;
typedef TYPE_1__ netchan_buffer_t ;
struct TYPE_12__ {int unsentFragments; } ;
struct TYPE_10__ {TYPE_1__* netchan_start_queue; TYPE_1__** netchan_end_queue; TYPE_7__ netchan; } ;
typedef TYPE_2__ client_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_7__*,int ,int ) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_6__*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6( client_t *VAR_1 ) {
 FUNC_3( &VAR_1->netchan );
 if (!VAR_1->netchan.unsentFragments)
 {

  if (!VAR_1->netchan_end_queue) {
   FUNC_1(VAR_0, "netchan queue is not properly initialized in SV_Netchan_TransmitNextFragment\n");
  }

  if (VAR_1->netchan_start_queue) {
   netchan_buffer_t *VAR_2;
   FUNC_0("#462 Netchan_TransmitNextFragment: popping a queued message for transmit\n");
   VAR_2 = VAR_1->netchan_start_queue;
   FUNC_4( VAR_1, &VAR_2->msg );
   FUNC_2( &VAR_1->netchan, VAR_2->msg.cursize, VAR_2->msg.data );

   VAR_1->netchan_start_queue = VAR_2->next;
   if (!VAR_1->netchan_start_queue) {
    FUNC_0("#462 Netchan_TransmitNextFragment: emptied queue\n");
    VAR_1->netchan_end_queue = &VAR_1->netchan_start_queue;
   }
   else
    FUNC_0("#462 Netchan_TransmitNextFragment: remaining queued message\n");
   FUNC_5(VAR_2);
  }
 }
}
