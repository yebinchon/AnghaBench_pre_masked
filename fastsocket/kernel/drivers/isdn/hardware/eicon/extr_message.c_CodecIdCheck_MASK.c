
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ State; } ;
struct TYPE_5__ {int * AdvSignalPLCI; int * AdvSignalAppl; TYPE_2__* AdvCodecPLCI; scalar_t__ AdvCodecFLAG; } ;
typedef int PLCI ;
typedef TYPE_1__ DIVA_CAPI_ADAPTER ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(DIVA_CAPI_ADAPTER *VAR_1, PLCI *VAR_2)
{

  FUNC_1(1,FUNC_2("CodecIdCheck"));

  if(VAR_1->AdvSignalPLCI == VAR_2)
  {
    FUNC_1(1,FUNC_2("PLCI owns codec"));
    FUNC_0(VAR_1->AdvCodecPLCI);
    if(VAR_1->AdvCodecPLCI->State == VAR_0)
    {
      FUNC_1(1,FUNC_2("remove temp codec PLCI"));
      FUNC_3(VAR_1->AdvCodecPLCI);
      VAR_1->AdvCodecFLAG = 0;
      VAR_1->AdvCodecPLCI = ((void*)0);
      VAR_1->AdvSignalAppl = ((void*)0);
    }
    VAR_1->AdvSignalPLCI = ((void*)0);
  }
}
