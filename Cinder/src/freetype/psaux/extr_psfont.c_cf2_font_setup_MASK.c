
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_11__ ;


struct TYPE_30__ {int a; int d; int b; int c; } ;
struct TYPE_35__ {int tx; int ty; } ;
struct TYPE_28__ {void* usedBV; int font; } ;
struct TYPE_36__ {scalar_t__ syntheticEmboldeningAmountX; scalar_t__ syntheticEmboldeningAmountY; scalar_t__ ppem; int hinted; int renderingFlags; int stemDarkened; int unitsPerEm; scalar_t__ stdVW; scalar_t__ stdHW; int blues; void* reverseWinding; void* darkened; int darkenY; int darkenX; int darkenParams; TYPE_3__ outerTransform; TYPE_8__ innerTransform; TYPE_8__ currentTransform; int * NDV; int lenNDV; int vsindex; TYPE_1__ blend; int error; int cffload; int isT1; TYPE_7__* lastSubfont; TYPE_4__* decoder; } ;
struct TYPE_29__ {int vsindex; } ;
struct TYPE_26__ {int font; } ;
struct TYPE_34__ {TYPE_2__ private_dict; TYPE_11__ blend; } ;
struct TYPE_33__ {scalar_t__ dataCount; } ;
struct TYPE_32__ {int (* load_private_dict ) (int ,TYPE_7__*,int ,int *) ;scalar_t__ (* blend_check_vector ) (TYPE_11__*,int ,int ,int *) ;} ;
struct TYPE_31__ {int cff; } ;
struct TYPE_27__ {int d; int a; } ;
typedef TYPE_4__ PS_Decoder ;
typedef TYPE_5__* FT_Service_CFFLoad ;
typedef int FT_Fixed ;
typedef int FT_Bool ;
typedef TYPE_6__ CFF_VStoreRec ;
typedef TYPE_7__* CFF_SubFont ;
typedef int CF2_UInt ;
typedef TYPE_8__ CF2_Matrix ;
typedef int CF2_Int ;
typedef TYPE_9__* CF2_Font ;
typedef scalar_t__ CF2_Fixed ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (int,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,void*) ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 void* VAR_4 ;
 int FUNC_3 (int *,TYPE_9__*) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,int *,scalar_t__,void*,int ) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_4__*,int *,int **) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 TYPE_7__* FUNC_10 (TYPE_4__*) ;
 TYPE_6__* FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int) ;
 TYPE_14__* VAR_5 ;
 scalar_t__ FUNC_13 (TYPE_8__ const*,TYPE_8__*,int) ;
 scalar_t__ FUNC_14 (TYPE_11__*,int ,int ,int *) ;
 int FUNC_15 (int ,TYPE_7__*,int ,int *) ;

__attribute__((used)) static void
  FUNC_16( CF2_Font VAR_6,
                  const CF2_Matrix* VAR_7 )
  {

    PS_Decoder* VAR_8 = VAR_6->decoder;

    FT_Bool VAR_9 = VAR_2;

    CFF_VStoreRec* VAR_10;
    FT_Bool VAR_11 = VAR_2;


    CF2_Fixed VAR_12 = VAR_6->syntheticEmboldeningAmountX;
    CF2_Fixed VAR_13 = VAR_6->syntheticEmboldeningAmountY;

    CFF_SubFont VAR_14;
    CF2_Fixed VAR_15;

    CF2_UInt VAR_16 = 0;
    FT_Fixed* VAR_17 = ((void*)0);


    VAR_6->error = VAR_3;



    VAR_14 = FUNC_10( VAR_8 );
    if ( VAR_6->lastSubfont != VAR_14 )
    {
      VAR_6->lastSubfont = VAR_14;
      VAR_9 = VAR_4;
    }

    if ( !VAR_6->isT1 )
    {
      FT_Service_CFFLoad VAR_18 = (FT_Service_CFFLoad)VAR_6->cffload;



      VAR_10 = FUNC_11( VAR_8 );
      VAR_11 = ( VAR_10->dataCount != 0 );

      if ( VAR_11 )
      {
        VAR_6->blend.font = VAR_14->blend.font;


        VAR_6->blend.usedBV = VAR_2;


        VAR_6->vsindex = VAR_14->private_dict.vsindex;


        VAR_6->lenNDV = VAR_16;
        VAR_6->NDV = VAR_17;
      }
    }




    VAR_15 = FUNC_7( VAR_8 );
    if ( VAR_6->ppem != VAR_15 )
    {
      VAR_6->ppem = VAR_15;
      VAR_9 = VAR_4;
    }


    VAR_6->hinted = (FT_Bool)( VAR_6->renderingFlags & VAR_1 );



    if ( FUNC_13( VAR_7,
                    &VAR_6->currentTransform,
                    4 * sizeof ( CF2_Fixed ) ) != 0 )
    {


      VAR_6->currentTransform = *VAR_7;
      VAR_6->currentTransform.tx =
      VAR_6->currentTransform.ty = FUNC_12( 0 );



      VAR_6->innerTransform = *VAR_7;
      VAR_6->outerTransform.a =
      VAR_6->outerTransform.d = FUNC_12( 1 );
      VAR_6->outerTransform.b =
      VAR_6->outerTransform.c = FUNC_12( 0 );

      VAR_9 = VAR_4;
    }
    if ( VAR_6->stemDarkened != ( VAR_6->renderingFlags & VAR_0 ) )
    {
      VAR_6->stemDarkened =
        (FT_Bool)( VAR_6->renderingFlags & VAR_0 );


      VAR_9 = VAR_4;
    }



    if ( VAR_9 )
    {
      CF2_Fixed VAR_19;
      CF2_Fixed VAR_20;
      CF2_Int VAR_21 = VAR_6->unitsPerEm;


      if ( VAR_21 == 0 )
        VAR_21 = 1000;

      VAR_15 = FUNC_1( FUNC_12( 4 ),
                     VAR_6->ppem );
      VAR_19 = FUNC_12( 1000 ) / VAR_21;
      VAR_6->stdVW = FUNC_9( VAR_8 );

      if ( VAR_6->stdVW <= 0 )
        VAR_6->stdVW = FUNC_0( FUNC_12( 75 ), VAR_19 );

      if ( VAR_12 > 0 )
      {


        VAR_12 = FUNC_1( VAR_12,
                          FUNC_0( FUNC_12( VAR_21 ), VAR_15 ) );






        FUNC_4( VAR_19,
                              VAR_15,
                              VAR_6->stdVW,
                              &VAR_6->darkenX,
                              VAR_12,
                              VAR_2,
                              VAR_6->darkenParams );
      }
      else
        FUNC_4( VAR_19,
                              VAR_15,
                              VAR_6->stdVW,
                              &VAR_6->darkenX,
                              0,
                              VAR_6->stemDarkened,
                              VAR_6->darkenParams );
      VAR_20 = FUNC_8( VAR_8 );

      if ( VAR_20 > 0 && VAR_6->stdVW > FUNC_2( 2, VAR_20 ) )
        VAR_6->stdHW = FUNC_0( FUNC_12( 75 ), VAR_19 );
      else
      {

        VAR_6->stdHW = FUNC_0( FUNC_12( 110 ), VAR_19 );
      }

      FUNC_4( VAR_19,
                            VAR_15,
                            VAR_6->stdHW,
                            &VAR_6->darkenY,
                            VAR_13,
                            VAR_6->stemDarkened,
                            VAR_6->darkenParams );

      if ( VAR_6->darkenX != 0 || VAR_6->darkenY != 0 )
        VAR_6->darkened = VAR_4;
      else
        VAR_6->darkened = VAR_2;

      VAR_6->reverseWinding = VAR_2;


      FUNC_3( &VAR_6->blues, VAR_6 );

    }
  }
