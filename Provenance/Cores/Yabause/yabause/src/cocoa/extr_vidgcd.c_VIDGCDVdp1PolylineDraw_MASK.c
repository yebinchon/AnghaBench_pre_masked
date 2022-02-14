
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (double*,double*,double*,int,int ,int ) ;

void FUNC_5(u8 * VAR_7, Vdp1 * VAR_8, u8* VAR_9)
{
 int VAR_10[4];
 int VAR_11[4];
 double VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 int VAR_15;

 FUNC_2(&VAR_2, VAR_1->addr, VAR_0);

 VAR_10[0] = (int)VAR_1->localX + (int)((s16)FUNC_1(VAR_0, VAR_1->addr + 0x0C));
 VAR_11[0] = (int)VAR_1->localY + (int)((s16)FUNC_1(VAR_0, VAR_1->addr + 0x0E));
 VAR_10[1] = (int)VAR_1->localX + (int)((s16)FUNC_1(VAR_0, VAR_1->addr + 0x10));
 VAR_11[1] = (int)VAR_1->localY + (int)((s16)FUNC_1(VAR_0, VAR_1->addr + 0x12));
 VAR_10[2] = (int)VAR_1->localX + (int)((s16)FUNC_1(VAR_0, VAR_1->addr + 0x14));
 VAR_11[2] = (int)VAR_1->localY + (int)((s16)FUNC_1(VAR_0, VAR_1->addr + 0x16));
 VAR_10[3] = (int)VAR_1->localX + (int)((s16)FUNC_1(VAR_0, VAR_1->addr + 0x18));
 VAR_11[3] = (int)VAR_1->localY + (int)((s16)FUNC_1(VAR_0, VAR_1->addr + 0x1A));

 VAR_15 = FUNC_3(VAR_10[0], VAR_11[0], VAR_10[1], VAR_11[1]);
 FUNC_4(&VAR_12,&VAR_13,&VAR_14,VAR_15, VAR_3, VAR_4);
 FUNC_0(VAR_10[0], VAR_11[0], VAR_10[1], VAR_11[1], 0,0,VAR_12,VAR_13,VAR_14);

 VAR_15 = FUNC_3(VAR_10[1], VAR_11[1], VAR_10[2], VAR_11[2]);
 FUNC_4(&VAR_12,&VAR_13,&VAR_14,VAR_15, VAR_4, VAR_5);
 FUNC_0(VAR_10[1], VAR_11[1], VAR_10[2], VAR_11[2], 0,0,VAR_12,VAR_13,VAR_14);

 VAR_15 = FUNC_3(VAR_10[2], VAR_11[2], VAR_10[3], VAR_11[3]);
 FUNC_4(&VAR_12,&VAR_13,&VAR_14,VAR_15, VAR_6, VAR_5);
 FUNC_0(VAR_10[3], VAR_11[3], VAR_10[2], VAR_11[2], 0,0,VAR_12,VAR_13,VAR_14);

 VAR_15 = FUNC_3(VAR_10[3], VAR_11[3], VAR_10[0], VAR_11[0]);
 FUNC_4(&VAR_12,&VAR_13,&VAR_14,VAR_15, VAR_3,VAR_6);
 FUNC_0(VAR_10[0], VAR_11[0], VAR_10[3], VAR_11[3], 0,0,VAR_12,VAR_13,VAR_14);
}
