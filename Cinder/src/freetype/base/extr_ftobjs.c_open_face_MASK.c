
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int memory; } ;
struct TYPE_22__ {TYPE_1__ root; TYPE_5__* clazz; } ;
struct TYPE_21__ {int (* done_face ) (TYPE_3__*) ;scalar_t__ (* init_face ) (int ,TYPE_3__*,int,int,TYPE_2__*) ;int face_object_size; } ;
struct TYPE_20__ {int random_seed; int stream; struct TYPE_20__* internal; int * incremental_interface; int face_flags; int memory; TYPE_6__* driver; } ;
struct TYPE_19__ {scalar_t__ tag; scalar_t__ data; } ;
typedef int FT_Stream ;
typedef TYPE_2__ FT_Parameter ;
typedef int FT_Memory ;
typedef scalar_t__ FT_Long ;
typedef int FT_Int ;
typedef int * FT_Incremental_Interface ;
typedef TYPE_3__* FT_Face_Internal ;
typedef TYPE_3__* FT_Face ;
typedef scalar_t__ FT_Error ;
typedef TYPE_5__* FT_Driver_Class ;
typedef TYPE_6__* FT_Driver ;
typedef scalar_t__ FT_Bool ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*,int,int,TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static FT_Error
  FUNC_8( FT_Driver VAR_3,
             FT_Stream *VAR_4,
             FT_Bool VAR_5,
             FT_Long VAR_6,
             FT_Int VAR_7,
             FT_Parameter* VAR_8,
             FT_Face *VAR_9 )
  {
    FT_Memory VAR_10;
    FT_Driver_Class VAR_11;
    FT_Face VAR_12 = ((void*)0);
    FT_Face_Internal VAR_13 = ((void*)0);

    FT_Error VAR_14, VAR_15;


    VAR_11 = VAR_3->clazz;
    VAR_10 = VAR_3->root.memory;


    if ( FUNC_0( VAR_12, VAR_11->face_object_size ) )
      goto Fail;

    VAR_12->driver = VAR_3;
    VAR_12->memory = VAR_10;
    VAR_12->stream = *VAR_4;


    if ( VAR_5 )
      VAR_12->face_flags |= VAR_0;

    if ( FUNC_3( VAR_13 ) )
      goto Fail;

    VAR_12->internal = VAR_13;
    VAR_12->internal->random_seed = -1;

    if ( VAR_11->init_face )
      VAR_14 = VAR_11->init_face( *VAR_4,
                                VAR_12,
                                (FT_Int)VAR_6,
                                VAR_7,
                                VAR_8 );
    *VAR_4 = VAR_12->stream;
    if ( VAR_14 )
      goto Fail;


    VAR_15 = FUNC_5( VAR_12 );





    if ( VAR_15 && FUNC_1( VAR_15, VAR_2 ) )
    {
      VAR_14 = VAR_15;
      goto Fail;
    }

    *VAR_9 = VAR_12;

  Fail:
    if ( VAR_14 )
    {
      FUNC_4( VAR_12, VAR_10 );
      if ( VAR_11->done_face )
        VAR_11->done_face( VAR_12 );
      FUNC_2( VAR_13 );
      FUNC_2( VAR_12 );
      *VAR_9 = ((void*)0);
    }

    return VAR_14;
  }
