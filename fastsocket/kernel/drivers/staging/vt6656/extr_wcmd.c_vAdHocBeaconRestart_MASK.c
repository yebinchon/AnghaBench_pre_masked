
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ eCurrMode; scalar_t__ eCurrState; } ;
struct TYPE_6__ {TYPE_1__ sMgmtObj; } ;
typedef TYPE_1__* PSMgmtObject ;
typedef TYPE_2__* PSDevice ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static
void
FUNC_1(PSDevice VAR_4)
{
    PSMgmtObject VAR_5 = &(VAR_4->sMgmtObj);







    if ((VAR_5->eCurrMode == VAR_2) &&
    (VAR_5->eCurrState >= VAR_3))
    {

        FUNC_0(VAR_4, VAR_0, VAR_1);
    }

}
