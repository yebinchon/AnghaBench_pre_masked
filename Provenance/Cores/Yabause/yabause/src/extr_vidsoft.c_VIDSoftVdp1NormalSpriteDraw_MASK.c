
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int CMDSIZE; scalar_t__ CMDYA; scalar_t__ CMDXA; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef int u8 ;
typedef scalar_t__ s16 ;
struct TYPE_8__ {scalar_t__ localY; scalar_t__ localX; int addr; } ;
typedef TYPE_2__ Vdp1 ;


 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,TYPE_2__*,TYPE_1__*,int *) ;

void FUNC_2(u8 * VAR_0, Vdp1 * VAR_1, u8 * VAR_2) {

 s16 VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10;
 int VAR_11;
 int VAR_12;
   vdp1cmd_struct VAR_13;
 FUNC_0(&VAR_13, VAR_1->addr, VAR_0);

 VAR_3 = VAR_13.CMDXA + VAR_1->localX;
 VAR_4 = VAR_13.CMDYA + VAR_1->localY;
 VAR_11 = ((VAR_13.CMDSIZE >> 8) & 0x3F) * 8;
 VAR_12 = VAR_13.CMDSIZE & 0xFF;

 VAR_5 = VAR_3 + (VAR_11 - 1);
 VAR_6 = VAR_4;
 VAR_7 = VAR_3 + (VAR_11 - 1);
 VAR_8 = VAR_4 + (VAR_12 - 1);
 VAR_9 = VAR_3;
 VAR_10 = VAR_4 + (VAR_12 - 1);

   FUNC_1(VAR_3, VAR_4, VAR_9, VAR_10, VAR_5, VAR_6, VAR_7, VAR_8, VAR_0, VAR_1, &VAR_13, VAR_2);
}
