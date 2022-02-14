
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* rover; int used; } ;
typedef TYPE_1__ memzone_t ;
struct TYPE_6__ {int id; scalar_t__ tag; int size; struct TYPE_6__* prev; struct TYPE_6__* next; } ;
typedef TYPE_2__ memblock_t ;
typedef int byte ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (void*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;

void FUNC_2( void *VAR_7 ) {
 memblock_t *VAR_8, *VAR_9;
 memzone_t *VAR_10;

 if (!VAR_7) {
  FUNC_0( VAR_0, "Z_Free: NULL pointer" );
 }

 VAR_8 = (memblock_t *) ( (byte *)VAR_7 - sizeof(memblock_t));
 if (VAR_8->id != VAR_4) {
  FUNC_0( VAR_1, "Z_Free: freed a pointer without ZONEID" );
 }
 if (VAR_8->tag == 0) {
  FUNC_0( VAR_1, "Z_Free: freed a freed pointer" );
 }

 if (VAR_8->tag == VAR_3) {
  return;
 }


 if ( *(int *)((byte *)VAR_8 + VAR_8->size - 4 ) != VAR_4 ) {
  FUNC_0( VAR_1, "Z_Free: memory block wrote past end" );
 }

 if (VAR_8->tag == VAR_2) {
  VAR_10 = VAR_6;
 }
 else {
  VAR_10 = VAR_5;
 }

 VAR_10->used -= VAR_8->size;


 FUNC_1( VAR_7, 0xaa, VAR_8->size - sizeof( *VAR_8 ) );

 VAR_8->tag = 0;

 VAR_9 = VAR_8->prev;
 if (!VAR_9->tag) {

  VAR_9->size += VAR_8->size;
  VAR_9->next = VAR_8->next;
  VAR_9->next->prev = VAR_9;
  if (VAR_8 == VAR_10->rover) {
   VAR_10->rover = VAR_9;
  }
  VAR_8 = VAR_9;
 }

 VAR_10->rover = VAR_8;

 VAR_9 = VAR_8->next;
 if ( !VAR_9->tag ) {

  VAR_8->size += VAR_9->size;
  VAR_8->next = VAR_9->next;
  VAR_8->next->prev = VAR_8;
  if (VAR_9 == VAR_10->rover) {
   VAR_10->rover = VAR_8;
  }
 }
}
