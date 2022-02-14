
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; struct TYPE_7__* prev; } ;
typedef TYPE_1__ localEntity_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

localEntity_t *FUNC_2( void ) {
 localEntity_t *VAR_2;

 if ( !VAR_1 ) {


  FUNC_0( VAR_0.prev );
 }

 VAR_2 = VAR_1;
 VAR_1 = VAR_1->next;

 FUNC_1( VAR_2, 0, sizeof( *VAR_2 ) );


 VAR_2->next = VAR_0.next;
 VAR_2->prev = &VAR_0;
 VAR_0.next->prev = VAR_2;
 VAR_0.next = VAR_2;
 return VAR_2;
}
