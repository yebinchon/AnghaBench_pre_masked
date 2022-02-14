
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int y; int x; } ;
struct TYPE_13__ {int y; int x; } ;
struct TYPE_18__ {scalar_t__ op; TYPE_3__ pt1; TYPE_2__ pt0; } ;
struct TYPE_17__ {TYPE_1__* decoder; } ;
struct TYPE_16__ {void** error; } ;
struct TYPE_15__ {int path_begun; } ;
struct TYPE_12__ {TYPE_4__ builder; } ;
typedef TYPE_4__ PS_Builder ;
typedef void* FT_Error ;
typedef TYPE_5__* CF2_OutlineCallbacks ;
typedef TYPE_6__* CF2_Outline ;
typedef TYPE_7__* CF2_CallbackParams ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_4__*,int ,int ) ;
 void* FUNC_2 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void
  FUNC_3( CF2_OutlineCallbacks VAR_1,
                      const CF2_CallbackParams VAR_2 )
  {
    FT_Error VAR_3;


    CF2_Outline VAR_4 = (CF2_Outline)VAR_1;
    PS_Builder* VAR_5;


    FUNC_0( VAR_4 && VAR_4->decoder );
    FUNC_0( VAR_2->op == VAR_0 );

    VAR_5 = &VAR_4->decoder->builder;

    if ( !VAR_5->path_begun )
    {


      VAR_3 = FUNC_2( VAR_5,
                                      VAR_2->pt0.x,
                                      VAR_2->pt0.y );
      if ( VAR_3 )
      {
        if ( !*VAR_1->error )
          *VAR_1->error = VAR_3;
        return;
      }
    }


    VAR_3 = FUNC_1( VAR_5,
                                   VAR_2->pt1.x,
                                   VAR_2->pt1.y );
    if ( VAR_3 )
    {
      if ( !*VAR_1->error )
        *VAR_1->error = VAR_3;
      return;
    }
  }
