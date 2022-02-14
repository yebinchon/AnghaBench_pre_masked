
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int netchan_t ;
struct TYPE_5__ {int data; int cursize; } ;
typedef TYPE_1__ msg_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_0 ;

void FUNC_3( netchan_t *VAR_1, msg_t* VAR_2 ) {
 FUNC_1( VAR_2, VAR_0 );

 FUNC_0( VAR_2 );
 FUNC_2( VAR_1, VAR_2->cursize, VAR_2->data );
}
