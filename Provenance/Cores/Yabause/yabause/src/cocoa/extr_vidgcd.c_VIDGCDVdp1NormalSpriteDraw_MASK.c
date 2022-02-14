
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ s16 ;
typedef int Vdp1 ;
struct TYPE_5__ {scalar_t__ localY; scalar_t__ localX; int addr; } ;
struct TYPE_4__ {int CMDSIZE; scalar_t__ CMDYA; scalar_t__ CMDXA; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_2(u8 * VAR_3, Vdp1 * VAR_4, u8* VAR_5) {

 s16 VAR_6,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13;
 int VAR_14;
 int VAR_15;
 FUNC_0(&VAR_2, VAR_1->addr, VAR_0);

 VAR_6 = VAR_2.CMDXA + VAR_1->localX;
 VAR_7 = VAR_2.CMDYA + VAR_1->localY;
 VAR_14 = ((VAR_2.CMDSIZE >> 8) & 0x3F) * 8;
 VAR_15 = VAR_2.CMDSIZE & 0xFF;

 VAR_8 = VAR_6 + (VAR_14 - 1);
 VAR_9 = VAR_7;
 VAR_10 = VAR_6 + (VAR_14 - 1);
 VAR_11 = VAR_7 + (VAR_15 - 1);
 VAR_12 = VAR_6;
 VAR_13 = VAR_7 + (VAR_15 - 1);

 FUNC_1(VAR_6,VAR_7,VAR_12,VAR_13,VAR_8,VAR_9,VAR_10,VAR_11);
}
