
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ eCurrMode; scalar_t__ eCurrState; scalar_t__ uIBSSChannel; scalar_t__ uScanChannel; } ;
struct TYPE_5__ {int PortOffset; TYPE_1__ sMgmtObj; } ;
typedef TYPE_1__* PSMgmtObject ;
typedef TYPE_2__* PSDevice ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static
void
FUNC_1(PSDevice VAR_7)
{

    PSMgmtObject VAR_8 = &(VAR_7->sMgmtObj);
    BOOL VAR_9;
    VAR_9 = VAR_1;
    if ((VAR_8->eCurrMode == VAR_5) &&
    (VAR_8->eCurrState >= VAR_6))
    {
        if ((VAR_8->uIBSSChannel <= VAR_0) &&
             (VAR_8->uScanChannel > VAR_0))
        {
            VAR_9 = VAR_4;
        }
        if (VAR_8->uIBSSChannel > VAR_0)
        {
            VAR_9 = VAR_4;
        }
    }

    if (VAR_9)
    {
        FUNC_0(VAR_7->PortOffset, VAR_2, VAR_3);
    }

}
