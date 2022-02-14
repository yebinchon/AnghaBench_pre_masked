
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec4_t ;
struct TYPE_6__ {float x; float y; int flags; int parent; scalar_t__ name; } ;
struct TYPE_7__ {float width; float height; float* focuscolor; void* focusshader; TYPE_1__ generic; void* shader; scalar_t__ focuspic; scalar_t__ errorpic; } ;
typedef TYPE_2__ menubitmap_s ;
struct TYPE_8__ {int realtime; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (float,float,float,float,void*) ;
 float* VAR_8 ;
 float* VAR_9 ;
 double FUNC_2 (int) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (float*) ;
 TYPE_3__ VAR_10 ;

void FUNC_5( menubitmap_s *VAR_11 )
{
 float VAR_12;
 float VAR_13;
 float VAR_14;
 float VAR_15;
 vec4_t VAR_16;
 float* VAR_17;

 VAR_12 = VAR_11->generic.x;
 VAR_13 = VAR_11->generic.y;
 VAR_14 = VAR_11->width;
 VAR_15 = VAR_11->height;

 if (VAR_11->generic.flags & VAR_7)
 {
  VAR_12 = VAR_12 - VAR_14;
 }
 else if (VAR_11->generic.flags & VAR_1)
 {
  VAR_12 = VAR_12 - VAR_14/2;
 }


 if (VAR_11->generic.name && !VAR_11->shader)
 {
  VAR_11->shader = FUNC_3( VAR_11->generic.name );
  if (!VAR_11->shader && VAR_11->errorpic)
   VAR_11->shader = FUNC_3( VAR_11->errorpic );
 }

 if (VAR_11->focuspic && !VAR_11->focusshader)
  VAR_11->focusshader = FUNC_3( VAR_11->focuspic );

 if (VAR_11->generic.flags & VAR_2)
 {
  if (VAR_11->shader)
  {
   FUNC_4( VAR_8 );
   FUNC_1( VAR_12, VAR_13, VAR_14, VAR_15, VAR_11->shader );
   FUNC_4( ((void*)0) );
  }
 }
 else
 {
  if (VAR_11->shader)
   FUNC_1( VAR_12, VAR_13, VAR_14, VAR_15, VAR_11->shader );


  if ( ( (VAR_11->generic.flags & VAR_5)
   || (VAR_11->generic.flags & VAR_6) )
        && (FUNC_0( VAR_11->generic.parent ) == VAR_11))
  {
   if (VAR_11->focuscolor)
   {
    VAR_16[0] = VAR_11->focuscolor[0];
    VAR_16[1] = VAR_11->focuscolor[1];
    VAR_16[2] = VAR_11->focuscolor[2];
    VAR_17 = VAR_16;
   }
   else
    VAR_17 = VAR_9;
   VAR_17[3] = 0.5+0.5*FUNC_2(VAR_10.realtime/VAR_0);

   FUNC_4( VAR_17 );
   FUNC_1( VAR_12, VAR_13, VAR_14, VAR_15, VAR_11->focusshader );
   FUNC_4( ((void*)0) );
  }
  else if ((VAR_11->generic.flags & VAR_3) || ((VAR_11->generic.flags & VAR_4) && (FUNC_0( VAR_11->generic.parent ) == VAR_11)))
  {
   if (VAR_11->focuscolor)
   {
    FUNC_4( VAR_11->focuscolor );
    FUNC_1( VAR_12, VAR_13, VAR_14, VAR_15, VAR_11->focusshader );
    FUNC_4( ((void*)0) );
   }
   else
    FUNC_1( VAR_12, VAR_13, VAR_14, VAR_15, VAR_11->focusshader );
  }
 }
}
