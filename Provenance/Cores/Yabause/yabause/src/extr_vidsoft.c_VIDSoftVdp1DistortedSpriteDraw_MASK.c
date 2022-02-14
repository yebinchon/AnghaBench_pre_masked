
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ CMDYD; scalar_t__ CMDXD; scalar_t__ CMDYC; scalar_t__ CMDXC; scalar_t__ CMDYB; scalar_t__ CMDXB; scalar_t__ CMDYA; scalar_t__ CMDXA; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef int u8 ;
typedef scalar_t__ s32 ;
struct TYPE_8__ {scalar_t__ localY; scalar_t__ localX; int addr; } ;
typedef TYPE_2__ Vdp1 ;


 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,TYPE_2__*,TYPE_1__*,int *) ;

void FUNC_2(u8* VAR_0, Vdp1*VAR_1, u8 * VAR_2) {

 s32 VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10;
   vdp1cmd_struct VAR_11;

   FUNC_0(&VAR_11, VAR_1->addr, VAR_0);

    VAR_3 = (s32)(VAR_11.CMDXA + VAR_1->localX);
    VAR_4 = (s32)(VAR_11.CMDYA + VAR_1->localY);

    VAR_5 = (s32)(VAR_11.CMDXB + VAR_1->localX);
    VAR_6 = (s32)(VAR_11.CMDYB + VAR_1->localY);

    VAR_7 = (s32)(VAR_11.CMDXC + VAR_1->localX);
    VAR_8 = (s32)(VAR_11.CMDYC + VAR_1->localY);

    VAR_9 = (s32)(VAR_11.CMDXD + VAR_1->localX);
    VAR_10 = (s32)(VAR_11.CMDYD + VAR_1->localY);

    FUNC_1(VAR_3, VAR_4, VAR_9, VAR_10, VAR_5, VAR_6, VAR_7, VAR_8, VAR_0, VAR_1, &VAR_11, VAR_2);
}
