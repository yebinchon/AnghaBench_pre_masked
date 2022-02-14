
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; int id; int flags; scalar_t__ name; } ;
struct TYPE_5__ {int width; int height; void* focusshader; TYPE_1__ generic; void* shader; scalar_t__ focuspic; scalar_t__ errorpic; } ;
typedef TYPE_2__ menubitmap_s ;
struct TYPE_6__ {int page; int * maplist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int,int,void*) ;
 int FUNC_1 (int,int,int ,int,int ) ;
 int FUNC_2 (int,int,int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 void* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4( void *VAR_8 ) {
 menubitmap_s *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_9 = (menubitmap_s *)VAR_8;

 if( !VAR_9->generic.name ) {
  return;
 }

 if( VAR_9->generic.name && !VAR_9->shader ) {
  VAR_9->shader = FUNC_3( VAR_9->generic.name );
  if( !VAR_9->shader && VAR_9->errorpic ) {
   VAR_9->shader = FUNC_3( VAR_9->errorpic );
  }
 }

 if( VAR_9->focuspic && !VAR_9->focusshader ) {
  VAR_9->focusshader = FUNC_3( VAR_9->focuspic );
 }

 VAR_10 = VAR_9->generic.x;
 VAR_11 = VAR_9->generic.y;
 VAR_12 = VAR_9->width;
 VAR_13 = VAR_9->height;
 if( VAR_9->shader ) {
  FUNC_0( VAR_10, VAR_11, VAR_12, VAR_13, VAR_9->shader );
 }

 VAR_10 = VAR_9->generic.x;
 VAR_11 = VAR_9->generic.y + VAR_9->height;
 FUNC_2( VAR_10, VAR_11, VAR_9->width, 28, VAR_5 );

 VAR_10 += VAR_9->width / 2;
 VAR_11 += 4;
 VAR_14 = VAR_7.page * VAR_1 + VAR_9->generic.id - VAR_0;
 FUNC_1( VAR_10, VAR_11, VAR_7.maplist[VAR_14], VAR_3|VAR_4, VAR_6 );

 VAR_10 = VAR_9->generic.x;
 VAR_11 = VAR_9->generic.y;
 VAR_12 = VAR_9->width;
 VAR_13 = VAR_9->height + 28;
 if( VAR_9->generic.flags & VAR_2 ) {
  FUNC_0( VAR_10, VAR_11, VAR_12, VAR_13, VAR_9->focusshader );
 }
}
