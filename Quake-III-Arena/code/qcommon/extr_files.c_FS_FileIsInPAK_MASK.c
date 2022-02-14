
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pack; struct TYPE_6__* next; } ;
typedef TYPE_1__ searchpath_t ;
struct TYPE_7__ {int pure_checksum; TYPE_3__** hashTable; int hashSize; } ;
typedef TYPE_2__ pack_t ;
struct TYPE_8__ {struct TYPE_8__* next; int name; } ;
typedef TYPE_3__ fileInPack_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*) ;
 long FUNC_2 (char const*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_4 (char const*,char*) ;

int FUNC_5(const char *VAR_2, int *VAR_3 ) {
 searchpath_t *VAR_4;
 pack_t *VAR_5;
 fileInPack_t *VAR_6;
 long VAR_7 = 0;

 if ( !VAR_1 ) {
  FUNC_0( VAR_0, "Filesystem call made without initialization\n" );
 }

 if ( !VAR_2 ) {
  FUNC_0( VAR_0, "FS_FOpenFileRead: NULL 'filename' parameter passed\n" );
 }


 if ( VAR_2[0] == '/' || VAR_2[0] == '\\' ) {
  VAR_2++;
 }




 if ( FUNC_4( VAR_2, ".." ) || FUNC_4( VAR_2, "::" ) ) {
  return -1;
 }





 for ( VAR_4 = VAR_1 ; VAR_4 ; VAR_4 = VAR_4->next ) {

  if (VAR_4->pack) {
   VAR_7 = FUNC_2(VAR_2, VAR_4->pack->hashSize);
  }

  if ( VAR_4->pack && VAR_4->pack->hashTable[VAR_7] ) {

   if ( !FUNC_3(VAR_4->pack) ) {
    continue;
   }


   VAR_5 = VAR_4->pack;
   VAR_6 = VAR_5->hashTable[VAR_7];
   do {

    if ( !FUNC_1( VAR_6->name, VAR_2 ) ) {
     if (VAR_3) {
      *VAR_3 = VAR_5->pure_checksum;
     }
     return 1;
    }
    VAR_6 = VAR_6->next;
   } while(VAR_6 != ((void*)0));
  }
 }
 return -1;
}
