
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tag; struct TYPE_5__* next; } ;
struct TYPE_6__ {TYPE_1__* rover; TYPE_1__ blocklist; } ;
typedef TYPE_2__ memzone_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;

void FUNC_1( int VAR_3 ) {
 int VAR_4;
 memzone_t *VAR_5;

 if ( VAR_3 == VAR_0 ) {
  VAR_5 = VAR_2;
 }
 else {
  VAR_5 = VAR_1;
 }
 VAR_4 = 0;


 VAR_5->rover = VAR_5->blocklist.next;
 do {
  if ( VAR_5->rover->tag == VAR_3 ) {
   VAR_4++;
   FUNC_0( (void *)(VAR_5->rover + 1) );
   continue;
  }
  VAR_5->rover = VAR_5->rover->next;
 } while ( VAR_5->rover != &VAR_5->blocklist );
}
