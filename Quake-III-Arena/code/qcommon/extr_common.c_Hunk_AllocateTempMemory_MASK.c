
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int magic; } ;
typedef TYPE_1__ hunkHeader_t ;
struct TYPE_7__ {int permanent; } ;
struct TYPE_6__ {scalar_t__ temp; int * tempHighwater; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 void* FUNC_2 (int) ;
 TYPE_2__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;

void *FUNC_3( int VAR_7 ) {
 void *VAR_8;
 hunkHeader_t *VAR_9;





 if ( VAR_5 == ((void*)0) )
 {
  return FUNC_2(VAR_7);
 }

 FUNC_1();

 VAR_7 = ( (VAR_7+3)&~3 ) + sizeof( hunkHeader_t );

 if ( VAR_4->temp + VAR_3->permanent + VAR_7 > VAR_6 ) {
  FUNC_0( VAR_0, "Hunk_AllocateTempMemory: failed on %i", VAR_7 );
 }

 if ( VAR_4 == &VAR_2 ) {
  VAR_8 = (void *)(VAR_5 + VAR_4->temp);
  VAR_4->temp += VAR_7;
 } else {
  VAR_4->temp += VAR_7;
  VAR_8 = (void *)(VAR_5 + VAR_6 - VAR_4->temp );
 }

 if ( VAR_4->temp > VAR_4->tempHighwater ) {
  VAR_4->tempHighwater = VAR_4->temp;
 }

 VAR_9 = (hunkHeader_t *)VAR_8;
 VAR_8 = (void *)(VAR_9+1);

 VAR_9->magic = VAR_1;
 VAR_9->size = VAR_7;


 return VAR_8;
}
