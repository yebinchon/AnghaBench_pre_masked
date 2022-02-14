
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int shader_t ;
struct TYPE_15__ {int stateBits; int adjustColorsForFog; TYPE_1__* bundle; scalar_t__ isDetail; void* active; } ;
typedef TYPE_2__ shaderStage_t ;
typedef void* qboolean ;
struct TYPE_20__ {int integer; } ;
struct TYPE_19__ {int integer; } ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {int (* Printf ) (int ,char*,int ) ;} ;
struct TYPE_16__ {scalar_t__ lightmapIndex; int numUnfoggedPasses; scalar_t__ sort; int name; scalar_t__ polygonOffset; scalar_t__ isSky; } ;
struct TYPE_14__ {scalar_t__ tcGen; scalar_t__ isLightmap; int * image; } ;
struct TYPE_13__ {scalar_t__ hardwareType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_3 () ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_4 () ;
 TYPE_11__ VAR_26 ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int) ;
 void* VAR_27 ;
 void* VAR_28 ;
 TYPE_8__* VAR_29 ;
 TYPE_7__* VAR_30 ;
 TYPE_6__* VAR_31 ;
 TYPE_5__ VAR_32 ;
 TYPE_4__ VAR_33 ;
 TYPE_2__* VAR_34 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static shader_t *FUNC_9( void ) {
 int VAR_35;
 qboolean VAR_36;
 qboolean VAR_37;

 VAR_36 = VAR_27;
 VAR_37 = VAR_27;




 if ( VAR_33.isSky ) {
  VAR_33.sort = VAR_19;
 }




 if ( VAR_33.polygonOffset && !VAR_33.sort ) {
  VAR_33.sort = VAR_18;
 }




 for ( VAR_35 = 0; VAR_35 < VAR_14; VAR_35++ ) {
  shaderStage_t *VAR_38 = &VAR_34[VAR_35];

  if ( !VAR_38->active ) {
   break;
  }


  if ( !VAR_38->bundle[0].image[0] ) {
   VAR_32.Printf( VAR_16, "Shader %s has a stage with no image\n", VAR_33.name );
   VAR_38->active = VAR_27;
   continue;
  }




  if ( VAR_38->isDetail && !VAR_29->integer ) {
   if ( VAR_35 < ( VAR_14 - 1 ) ) {
    FUNC_5( VAR_38, VAR_38 + 1, sizeof( *VAR_38 ) * ( VAR_14 - VAR_35 - 1 ) );
    FUNC_1( VAR_38 + 1, 0, sizeof( *VAR_38 ) );
   }
   continue;
  }




  if ( VAR_38->bundle[0].isLightmap ) {
   if ( VAR_38->bundle[0].tcGen == VAR_23 ) {
    VAR_38->bundle[0].tcGen = VAR_24;
   }
   VAR_36 = VAR_28;
  } else {
   if ( VAR_38->bundle[0].tcGen == VAR_23 ) {
    VAR_38->bundle[0].tcGen = VAR_25;
   }
  }
  if ( ( VAR_38->stateBits & ( VAR_9 | VAR_5 ) ) &&
    ( VAR_34[0].stateBits & ( VAR_9 | VAR_5 ) ) ) {
   int VAR_39 = VAR_38->stateBits & VAR_9;
   int VAR_40 = VAR_38->stateBits & VAR_5;
   if ( ( ( VAR_39 == VAR_10 ) && ( VAR_40 == VAR_6 ) ) ||
    ( ( VAR_39 == VAR_12 ) && ( VAR_40 == VAR_8 ) ) ) {
    VAR_38->adjustColorsForFog = VAR_1;
   }

   else if ( ( VAR_39 == VAR_11 ) && ( VAR_40 == VAR_7 ) )
   {
    VAR_38->adjustColorsForFog = VAR_0;
   }

   else if ( ( VAR_39 == VAR_10 ) && ( VAR_40 == VAR_7 ) )
   {
    VAR_38->adjustColorsForFog = VAR_2;
   } else {

   }


   if ( !VAR_33.sort ) {

    if ( VAR_38->stateBits & VAR_4 ) {
     VAR_33.sort = VAR_22;
    } else {
     VAR_33.sort = VAR_17;
    }
   }
  }
 }



 if ( !VAR_33.sort ) {
  VAR_33.sort = VAR_21;
 }




 if ( VAR_35 > 1 && ( (VAR_31->integer && !VAR_30->integer) || VAR_26.hardwareType == VAR_3 ) ) {
  FUNC_4();
  VAR_35 = 1;
  VAR_36 = VAR_27;
 }




 if ( VAR_35 > 1 && FUNC_0() ) {
  VAR_35--;
 }

 if ( VAR_33.lightmapIndex >= 0 && !VAR_36 ) {
  if (VAR_37) {
   VAR_32.Printf( VAR_15, "WARNING: shader '%s' has VERTEX forced lightmap!\n", VAR_33.name );
  } else {
   VAR_32.Printf( VAR_15, "WARNING: shader '%s' has lightmap but no lightmap stage!\n", VAR_33.name );
     VAR_33.lightmapIndex = VAR_13;
  }
 }





 VAR_33.numUnfoggedPasses = VAR_35;


 if ( VAR_35 == 0 ) {
  VAR_33.sort = VAR_20;
 }


 FUNC_2();

 return FUNC_3();
}
