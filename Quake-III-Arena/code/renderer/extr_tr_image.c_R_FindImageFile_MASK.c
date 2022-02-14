
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {char* imgName; int wrapClampMode; int allowPicmip; int mipmap; struct TYPE_6__* next; } ;
typedef TYPE_1__ image_t ;
typedef int byte ;
struct TYPE_7__ {int (* Free ) (int *) ;int (* Printf ) (int ,char*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (char*,int *,int,int,int ,int ,int) ;
 int FUNC_1 (char const*,int **,int*,int*) ;
 long FUNC_2 (char const*) ;
 TYPE_1__** VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,char const*) ;
 int FUNC_7 (int ,char*,char const*) ;
 int FUNC_8 (int ,char*,char const*) ;
 int FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (int *) ;
 char FUNC_11 (char) ;

image_t *FUNC_12( const char *VAR_5, qboolean VAR_6, qboolean VAR_7, int VAR_8 ) {
 image_t *VAR_9;
 int VAR_10, VAR_11;
 byte *VAR_12;
 long VAR_13;

 if (!VAR_5) {
  return ((void*)0);
 }

 VAR_13 = FUNC_2(VAR_5);




 for (VAR_9=VAR_3[VAR_13]; VAR_9; VAR_9=VAR_9->next) {
  if ( !FUNC_3( VAR_5, VAR_9->imgName ) ) {

   if ( FUNC_3( VAR_5, "*white" ) ) {
    if ( VAR_9->mipmap != VAR_6 ) {
     VAR_4.Printf( VAR_2, "WARNING: reused image %s with mixed mipmap parm\n", VAR_5 );
    }
    if ( VAR_9->allowPicmip != VAR_7 ) {
     VAR_4.Printf( VAR_2, "WARNING: reused image %s with mixed allowPicmip parm\n", VAR_5 );
    }
    if ( VAR_9->wrapClampMode != VAR_8 ) {
     VAR_4.Printf( VAR_1, "WARNING: reused image %s with mixed glWrapClampMode parm\n", VAR_5 );
    }
   }
   return VAR_9;
  }
 }




 FUNC_1( VAR_5, &VAR_12, &VAR_10, &VAR_11 );
 if ( VAR_12 == ((void*)0) ) {
   char VAR_14[VAR_0];
    int VAR_15;
    FUNC_4( VAR_14, VAR_5 );
    VAR_15 = FUNC_5( VAR_14 );
    VAR_14[VAR_15-3] = FUNC_11(VAR_14[VAR_15-3]);
    VAR_14[VAR_15-2] = FUNC_11(VAR_14[VAR_15-2]);
    VAR_14[VAR_15-1] = FUNC_11(VAR_14[VAR_15-1]);
  VAR_4.Printf( VAR_1, "trying %s...\n", VAR_14 );
   FUNC_1( VAR_14, &VAR_12, &VAR_10, &VAR_11 );
    if (VAR_12 == ((void*)0)) {
      return ((void*)0);
    }
 }

 VAR_9 = FUNC_0( ( char * ) VAR_5, VAR_12, VAR_10, VAR_11, VAR_6, VAR_7, VAR_8 );
 VAR_4.Free( VAR_12 );
 return VAR_9;
}
