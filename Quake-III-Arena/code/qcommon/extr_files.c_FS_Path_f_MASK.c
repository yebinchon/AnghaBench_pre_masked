
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* dir; TYPE_7__* pack; struct TYPE_11__* next; } ;
typedef TYPE_4__ searchpath_t ;
struct TYPE_13__ {int pakFilename; int numfiles; } ;
struct TYPE_9__ {scalar_t__ o; } ;
struct TYPE_10__ {TYPE_2__ file; } ;
struct TYPE_12__ {int name; TYPE_3__ handleFiles; } ;
struct TYPE_8__ {int path; int gamedir; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_7__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_5__* VAR_3 ;

void FUNC_2( void ) {
 searchpath_t *VAR_4;
 int VAR_5;

 FUNC_0 ("Current search path:\n");
 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->pack) {
   FUNC_0 ("%s (%i files)\n", VAR_4->pack->pakFilename, VAR_4->pack->numfiles);
   if ( VAR_1 ) {
    if ( !FUNC_1(VAR_4->pack) ) {
     FUNC_0( "    not on the pure list\n" );
    } else {
     FUNC_0( "    on the pure list\n" );
    }
   }
  } else {
   FUNC_0 ("%s/%s\n", VAR_4->dir->path, VAR_4->dir->gamedir );
  }
 }


 FUNC_0( "\n" );
 for ( VAR_5 = 1 ; VAR_5 < VAR_0 ; VAR_5++ ) {
  if ( VAR_3[VAR_5].handleFiles.file.o ) {
   FUNC_0( "handle %i: %s\n", VAR_5, VAR_3[VAR_5].name );
  }
 }
}
