
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {TYPE_4__* clazz; } ;
struct TYPE_16__ {int (* done_face ) (TYPE_3__*) ;} ;
struct TYPE_14__ {int (* finalizer ) (TYPE_3__*) ;} ;
struct TYPE_13__ {int data; int (* finalizer ) (int ) ;} ;
struct TYPE_15__ {int face_flags; struct TYPE_15__* internal; int * stream; TYPE_2__ generic; int * size; int sizes_list; scalar_t__ glyph; TYPE_1__ autohint; } ;
typedef int FT_Memory ;
typedef int FT_List_Destructor ;
typedef TYPE_3__* FT_Face ;
typedef TYPE_4__* FT_Driver_Class ;
typedef TYPE_5__* FT_Driver ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ,int ,TYPE_5__*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void
  FUNC_8( FT_Memory VAR_2,
                FT_Face VAR_3,
                FT_Driver VAR_4 )
  {
    FT_Driver_Class VAR_5 = VAR_4->clazz;



    if ( VAR_3->autohint.finalizer )
      VAR_3->autohint.finalizer( VAR_3->autohint.data );



    while ( VAR_3->glyph )
      FUNC_0( VAR_3->glyph );


    FUNC_2( &VAR_3->sizes_list,
                      (FT_List_Destructor)VAR_1,
                      VAR_2,
                      VAR_4 );
    VAR_3->size = ((void*)0);


    if ( VAR_3->generic.finalizer )
      VAR_3->generic.finalizer( VAR_3 );


    FUNC_4( VAR_3, VAR_2 );


    if ( VAR_5->done_face )
      VAR_5->done_face( VAR_3 );


    FUNC_3(
      VAR_3->stream,
      ( VAR_3->face_flags & VAR_0 ) != 0 );

    VAR_3->stream = ((void*)0);


    if ( VAR_3->internal )
    {
      FUNC_1( VAR_3->internal );
    }
    FUNC_1( VAR_3 );
  }
