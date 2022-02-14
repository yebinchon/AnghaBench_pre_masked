
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ s16 ;
typedef int Vdp1 ;
struct TYPE_2__ {scalar_t__ addr; scalar_t__ localY; scalar_t__ localX; } ;


 int FUNC_0 (int,int,int,int,int ,int ,double,double,double) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (double*,double*,double*,int,int ,int ) ;

void FUNC_5(u8 * VAR_5, Vdp1 * VAR_6, u8* VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 double VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 int VAR_15;

 FUNC_2(&VAR_2, VAR_1->addr, VAR_0);

 VAR_8 = (int)VAR_1->localX + (int)((s16)FUNC_1(VAR_0, VAR_1->addr + 0x0C));
 VAR_9 = (int)VAR_1->localY + (int)((s16)FUNC_1(VAR_0, VAR_1->addr + 0x0E));
 VAR_10 = (int)VAR_1->localX + (int)((s16)FUNC_1(VAR_0, VAR_1->addr + 0x10));
 VAR_11 = (int)VAR_1->localY + (int)((s16)FUNC_1(VAR_0, VAR_1->addr + 0x12));

 VAR_15 = FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11);
 FUNC_4(&VAR_12,&VAR_14,&VAR_13,VAR_15, VAR_3, VAR_4);
 FUNC_0(VAR_8, VAR_9, VAR_10, VAR_11, 0,0,VAR_12,VAR_13,VAR_14);
}
