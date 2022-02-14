
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ event; scalar_t__ in_use; } ;
typedef TYPE_1__ tGAP_INFO ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {TYPE_1__* blk; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

BOOLEAN FUNC_0 (UINT16 VAR_4)
{
    tGAP_INFO *VAR_5 = &VAR_3.blk[0];
    UINT8 VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++, VAR_5++) {
        if (VAR_5->in_use && VAR_5->event == VAR_4) {
            return (VAR_2);
        }
    }


    return (VAR_0);
}
