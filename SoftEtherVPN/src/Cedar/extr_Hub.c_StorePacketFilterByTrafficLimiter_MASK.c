
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT64 ;
struct TYPE_11__ {int Value; } ;
struct TYPE_13__ {TYPE_3__ UploadLimiter; } ;
struct TYPE_12__ {TYPE_1__* Policy; TYPE_2__* PacketAdapter; } ;
struct TYPE_10__ {scalar_t__ Param; } ;
struct TYPE_9__ {int MaxUpload; } ;
typedef TYPE_3__ TRAFFIC_LIMITER ;
typedef TYPE_4__ SESSION ;
typedef int PKT ;
typedef TYPE_5__ HUB_PA ;


 int FUNC_0 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int *) ;
 scalar_t__ VAR_0 ;

bool FUNC_2(SESSION *VAR_1, PKT *VAR_2)
{
 HUB_PA *VAR_3;
 TRAFFIC_LIMITER *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (VAR_1->Policy->MaxUpload == 0)
 {

  return 1;
 }

 VAR_3 = (HUB_PA *)VAR_1->PacketAdapter->Param;
 VAR_4 = &VAR_3->UploadLimiter;


 if (FUNC_1(VAR_1, VAR_2))
 {
  return 1;
 }


 FUNC_0(VAR_4, VAR_2);


 if ((VAR_4->Value * (UINT64)1000 / (UINT64)VAR_0) > VAR_1->Policy->MaxUpload)
 {

  return 0;
 }

 return 1;
}
