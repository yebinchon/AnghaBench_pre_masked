
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ transport; int bda; scalar_t__ connected; scalar_t__ in_use; } ;
typedef TYPE_1__ tGATT_PROFILE_CLCB ;
typedef scalar_t__ tBT_TRANSPORT ;
typedef scalar_t__ UINT8 ;
struct TYPE_5__ {TYPE_1__* profile_clcb; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static tGATT_PROFILE_CLCB *FUNC_1(BD_ADDR VAR_3, tBT_TRANSPORT VAR_4)
{
    UINT8 VAR_5;
    tGATT_PROFILE_CLCB *VAR_6 = ((void*)0);

    for (VAR_5 = 0, VAR_6 = VAR_2.profile_clcb; VAR_5 < VAR_1; VAR_5++, VAR_6++) {
        if (VAR_6->in_use && VAR_6->transport == VAR_4 &&
                VAR_6->connected && !FUNC_0(VAR_6->bda, VAR_3, VAR_0)) {
            return VAR_6;
        }
    }

    return ((void*)0);
}
