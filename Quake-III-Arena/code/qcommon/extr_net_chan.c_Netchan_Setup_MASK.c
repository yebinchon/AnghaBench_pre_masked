
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int netsrc_t ;
struct TYPE_4__ {int qport; int outgoingSequence; scalar_t__ incomingSequence; int remoteAddress; int sock; } ;
typedef TYPE_1__ netchan_t ;
typedef int netadr_t ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1( netsrc_t VAR_0, netchan_t *VAR_1, netadr_t VAR_2, int VAR_3 ) {
 FUNC_0 (VAR_1, 0, sizeof(*VAR_1));

 VAR_1->sock = VAR_0;
 VAR_1->remoteAddress = VAR_2;
 VAR_1->qport = VAR_3;
 VAR_1->incomingSequence = 0;
 VAR_1->outgoingSequence = 1;
}
