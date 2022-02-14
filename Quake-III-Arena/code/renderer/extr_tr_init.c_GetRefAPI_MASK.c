
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* Printf ) (int ,char*,int,int) ;} ;
typedef TYPE_1__ refimport_t ;
struct TYPE_8__ {int inPVS; int GetEntityToken; int RemapShader; int RegisterFont; int UploadCinematic; int DrawStretchRaw; int DrawStretchPic; int SetColor; int RenderScene; int AddAdditiveLightToScene; int AddLightToScene; int LightForPoint; int AddPolyToScene; int AddRefEntityToScene; int ClearScene; int ModelBounds; int LerpTag; int MarkFragments; int EndFrame; int BeginFrame; int EndRegistration; int SetWorldVisData; int LoadWorld; int RegisterShaderNoMip; int RegisterShader; int RegisterSkin; int RegisterModel; int BeginRegistration; int Shutdown; } ;
typedef TYPE_2__ refexport_t ;
typedef int re ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 TYPE_1__ VAR_31 ;
 int FUNC_1 (int ,char*,int,int) ;

refexport_t *FUNC_2 ( int VAR_32, refimport_t *VAR_33 ) {
 static refexport_t VAR_34;

 VAR_31 = *VAR_33;

 FUNC_0( &VAR_34, 0, sizeof( VAR_34 ) );

 if ( VAR_32 != VAR_1 ) {
  VAR_31.Printf(VAR_0, "Mismatched REF_API_VERSION: expected %i, got %i\n",
   VAR_1, VAR_32 );
  return ((void*)0);
 }



 VAR_34.Shutdown = VAR_20;

 VAR_34.BeginRegistration = VAR_7;
 VAR_34.RegisterModel = VAR_13;
 VAR_34.RegisterSkin = VAR_16;
 VAR_34.RegisterShader = VAR_14;
 VAR_34.RegisterShaderNoMip = VAR_15;
 VAR_34.LoadWorld = VAR_11;
 VAR_34.SetWorldVisData = VAR_19;
 VAR_34.EndRegistration = VAR_10;

 VAR_34.BeginFrame = VAR_6;
 VAR_34.EndFrame = VAR_9;

 VAR_34.MarkFragments = VAR_27;
 VAR_34.LerpTag = VAR_25;
 VAR_34.ModelBounds = VAR_28;

 VAR_34.ClearScene = VAR_8;
 VAR_34.AddRefEntityToScene = VAR_5;
 VAR_34.AddPolyToScene = VAR_4;
 VAR_34.LightForPoint = VAR_26;
 VAR_34.AddLightToScene = VAR_3;
 VAR_34.AddAdditiveLightToScene = VAR_2;
 VAR_34.RenderScene = VAR_17;

 VAR_34.SetColor = VAR_18;
 VAR_34.DrawStretchPic = VAR_21;
 VAR_34.DrawStretchRaw = VAR_22;
 VAR_34.UploadCinematic = VAR_23;

 VAR_34.RegisterFont = VAR_12;
 VAR_34.RemapShader = VAR_29;
 VAR_34.GetEntityToken = VAR_24;
 VAR_34.inPVS = VAR_30;

 return &VAR_34;
}
