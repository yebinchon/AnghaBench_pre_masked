
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ s32 ;
typedef int Vdp1 ;
struct TYPE_5__ {scalar_t__ localY; scalar_t__ localX; int addr; } ;
struct TYPE_4__ {scalar_t__ CMDYD; scalar_t__ CMDXD; scalar_t__ CMDYC; scalar_t__ CMDXC; scalar_t__ CMDYB; scalar_t__ CMDXB; scalar_t__ CMDYA; scalar_t__ CMDXA; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_2(u8 * VAR_3, Vdp1 * VAR_4, u8* VAR_5) {

 s32 VAR_6,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13;

 FUNC_0(&VAR_2, VAR_1->addr, VAR_0);

    VAR_6 = (s32)(VAR_2.CMDXA + VAR_1->localX);
    VAR_7 = (s32)(VAR_2.CMDYA + VAR_1->localY);

    VAR_8 = (s32)(VAR_2.CMDXB + VAR_1->localX);
    VAR_9 = (s32)(VAR_2.CMDYB + VAR_1->localY);

    VAR_10 = (s32)(VAR_2.CMDXC + VAR_1->localX);
    VAR_11 = (s32)(VAR_2.CMDYC + VAR_1->localY);

    VAR_12 = (s32)(VAR_2.CMDXD + VAR_1->localX);
    VAR_13 = (s32)(VAR_2.CMDYD + VAR_1->localY);

 FUNC_1(VAR_6,VAR_7,VAR_12,VAR_13,VAR_8,VAR_9,VAR_10,VAR_11);
}
