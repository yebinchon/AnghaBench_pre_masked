
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t fileHandle_t ;
struct TYPE_2__ {scalar_t__ streamed; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (void*,int,size_t) ;
 int FUNC_2 (void*,int,int,size_t) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_3( void *VAR_5, int VAR_6, fileHandle_t VAR_7 ) {
 if ( !VAR_1 ) {
  FUNC_0( VAR_0, "Filesystem call made without initialization\n" );
 }

 if ( !VAR_7 ) {
  return 0;
 }
 if (VAR_2[VAR_7].streamed) {
  int VAR_8;
  VAR_2[VAR_7].streamed = VAR_3;
  VAR_8 = FUNC_2( VAR_5, VAR_6, 1, VAR_7);
  VAR_2[VAR_7].streamed = VAR_4;
  return VAR_8;
 } else {
  return FUNC_1( VAR_5, VAR_6, VAR_7);
 }
}
