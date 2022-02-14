
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vdp1cmd_struct ;
typedef int u8 ;
typedef scalar_t__ s16 ;
struct TYPE_6__ {int addr; scalar_t__ localY; scalar_t__ localX; } ;
typedef TYPE_1__ Vdp1 ;


 int FUNC_0 (int,int,int,int,int ,int ,int ,double,double,double,TYPE_1__*,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (double*,double*,double*,int,int ,int ,int *,TYPE_1__*,int *,int *) ;
 int FUNC_4 (int,int,int,int,int,int *,int *,TYPE_1__*,int *,int *,int *) ;

void FUNC_5(u8* VAR_4, Vdp1*VAR_5, u8 * VAR_6)
{
 int VAR_7[4];
 int VAR_8[4];
 double VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 int VAR_12;
   vdp1cmd_struct VAR_13;

   FUNC_2(&VAR_13, VAR_5->addr, VAR_4);

 VAR_7[0] = (int)VAR_5->localX + (int)((s16)FUNC_1(VAR_4, VAR_5->addr + 0x0C));
 VAR_8[0] = (int)VAR_5->localY + (int)((s16)FUNC_1(VAR_4, VAR_5->addr + 0x0E));
 VAR_7[1] = (int)VAR_5->localX + (int)((s16)FUNC_1(VAR_4, VAR_5->addr + 0x10));
 VAR_8[1] = (int)VAR_5->localY + (int)((s16)FUNC_1(VAR_4, VAR_5->addr + 0x12));
 VAR_7[2] = (int)VAR_5->localX + (int)((s16)FUNC_1(VAR_4, VAR_5->addr + 0x14));
 VAR_8[2] = (int)VAR_5->localY + (int)((s16)FUNC_1(VAR_4, VAR_5->addr + 0x16));
 VAR_7[3] = (int)VAR_5->localX + (int)((s16)FUNC_1(VAR_4, VAR_5->addr + 0x18));
 VAR_8[3] = (int)VAR_5->localY + (int)((s16)FUNC_1(VAR_4, VAR_5->addr + 0x1A));

   VAR_12 = FUNC_4(VAR_7[0], VAR_8[0], VAR_7[1], VAR_8[1], 1, ((void*)0), ((void*)0), VAR_5, &VAR_13, VAR_4, VAR_6);
   FUNC_3(&VAR_9, &VAR_10, &VAR_11, VAR_12, VAR_0, VAR_1, VAR_4, VAR_5, &VAR_13, VAR_6);
   FUNC_0(VAR_7[0], VAR_8[0], VAR_7[1], VAR_8[1], 0, 0, 0, VAR_9, VAR_10, VAR_11, VAR_5, &VAR_13, VAR_4, VAR_6);

   VAR_12 = FUNC_4(VAR_7[1], VAR_8[1], VAR_7[2], VAR_8[2], 1, ((void*)0), ((void*)0), VAR_5, &VAR_13, VAR_4, VAR_6);
   FUNC_3(&VAR_9, &VAR_10, &VAR_11, VAR_12, VAR_1, VAR_2, VAR_4, VAR_5, &VAR_13, VAR_6);
   FUNC_0(VAR_7[1], VAR_8[1], VAR_7[2], VAR_8[2], 0, 0, 0, VAR_9, VAR_10, VAR_11, VAR_5, &VAR_13, VAR_4, VAR_6);

   VAR_12 = FUNC_4(VAR_7[2], VAR_8[2], VAR_7[3], VAR_8[3], 1, ((void*)0), ((void*)0), VAR_5, &VAR_13, VAR_4, VAR_6);
   FUNC_3(&VAR_9, &VAR_10, &VAR_11, VAR_12, VAR_3, VAR_2, VAR_4, VAR_5, &VAR_13, VAR_6);
   FUNC_0(VAR_7[3], VAR_8[3], VAR_7[2], VAR_8[2], 0, 0, 0, VAR_9, VAR_10, VAR_11, VAR_5, &VAR_13, VAR_4, VAR_6);

   VAR_12 = FUNC_4(VAR_7[3], VAR_8[3], VAR_7[0], VAR_8[0], 1, ((void*)0), ((void*)0), VAR_5, &VAR_13, VAR_4, VAR_6);
   FUNC_3(&VAR_9, &VAR_10, &VAR_11, VAR_12, VAR_0, VAR_3, VAR_4, VAR_5, &VAR_13, VAR_6);
   FUNC_0(VAR_7[0], VAR_8[0], VAR_7[3], VAR_8[3], 0, 0, 0, VAR_9, VAR_10, VAR_11, VAR_5, &VAR_13, VAR_4, VAR_6);
}
