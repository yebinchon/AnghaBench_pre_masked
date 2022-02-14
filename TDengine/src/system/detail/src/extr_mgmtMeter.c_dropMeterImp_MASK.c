
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int numOfTimeSeries; } ;
struct TYPE_17__ {TYPE_1__ acctInfo; } ;
struct TYPE_14__ {int vgId; } ;
struct TYPE_16__ {int numOfColumns; TYPE_2__ gid; } ;
struct TYPE_15__ {scalar_t__ numOfMeters; } ;
typedef TYPE_3__ SVgObj ;
typedef TYPE_4__ STabObj ;
typedef int SDbObj ;
typedef TYPE_5__ SAcctObj ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (int ,TYPE_4__*) ;

__attribute__((used)) static int FUNC_5(SDbObj *VAR_2, STabObj * VAR_3, SAcctObj *VAR_4) {
  SVgObj * VAR_5;

  if (VAR_4 != ((void*)0)) VAR_4->acctInfo.numOfTimeSeries -= (VAR_3->numOfColumns - 1);

  VAR_5 = FUNC_2(VAR_3->gid.vgId);
  if (VAR_5 == ((void*)0)) return VAR_0;

  FUNC_0(VAR_3->numOfColumns - 1);
  FUNC_3(VAR_3, VAR_5);
  FUNC_4(VAR_1, VAR_3);

  if (VAR_5->numOfMeters <= 0) FUNC_1(VAR_2, VAR_5);

  return 0;
}
