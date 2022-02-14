
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; int layer_specific; int event; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_MSG ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(UINT16 VAR_2)
{
    tBTA_DM_MSG *VAR_3;

    if ((VAR_3 = (tBTA_DM_MSG *) FUNC_1(sizeof(tBTA_DM_MSG))) != ((void*)0)) {
        VAR_3->hdr.event = VAR_1;
        VAR_3->hdr.layer_specific = VAR_0;
        VAR_3->hdr.offset = VAR_2;
        FUNC_0(VAR_3);
    }
}
