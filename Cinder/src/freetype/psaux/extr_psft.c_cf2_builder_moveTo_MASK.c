
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ op; } ;
struct TYPE_9__ {TYPE_1__* decoder; } ;
struct TYPE_8__ {scalar_t__ path_begun; } ;
struct TYPE_7__ {TYPE_2__ builder; } ;
typedef TYPE_2__ PS_Builder ;
typedef int CF2_OutlineCallbacks ;
typedef TYPE_3__* CF2_Outline ;
typedef TYPE_4__* CF2_CallbackParams ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
  FUNC_2( CF2_OutlineCallbacks VAR_1,
                      const CF2_CallbackParams VAR_2 )
  {

    CF2_Outline VAR_3 = (CF2_Outline)VAR_1;
    PS_Builder* VAR_4;

    (void)VAR_2;


    FUNC_0( VAR_3 && VAR_3->decoder );
    FUNC_0( VAR_2->op == VAR_0 );

    VAR_4 = &VAR_3->decoder->builder;


    FUNC_1( VAR_4 );
    VAR_4->path_begun = 0;
  }
