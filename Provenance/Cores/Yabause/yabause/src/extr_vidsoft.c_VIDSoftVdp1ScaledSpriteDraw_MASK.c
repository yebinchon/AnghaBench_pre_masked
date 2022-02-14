
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int CMDXA; int CMDYA; int CMDCTRL; scalar_t__ CMDYB; scalar_t__ CMDXB; scalar_t__ CMDYC; scalar_t__ CMDXC; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef int u8 ;
typedef int s32 ;
struct TYPE_8__ {int localX; int localY; int addr; } ;
typedef TYPE_2__ Vdp1 ;


 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (int,int,int,int,int,int,int,int,int *,TYPE_2__*,TYPE_1__*,int *) ;

void FUNC_2(u8* VAR_0, Vdp1*VAR_1, u8 * VAR_2){

 s32 VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10;
 int VAR_11,VAR_12,VAR_13,VAR_14;
   vdp1cmd_struct VAR_15;
   FUNC_0(&VAR_15, VAR_1->addr, VAR_0);

 VAR_11 = VAR_15.CMDXA + VAR_1->localX;
 VAR_12 = VAR_15.CMDYA + VAR_1->localY;

 switch ((VAR_15.CMDCTRL >> 8) & 0xF)
 {
 case 0x0:
 default:
  VAR_13 = ((int)VAR_15.CMDXC) - VAR_11 + VAR_1->localX + 1;
  VAR_14 = ((int)VAR_15.CMDYC) - VAR_12 + VAR_1->localY + 1;
  break;
 case 0x5:
  VAR_13 = ((int)VAR_15.CMDXB) + 1;
  VAR_14 = ((int)VAR_15.CMDYB) + 1;
  break;
 case 0x6:
  VAR_13 = ((int)VAR_15.CMDXB);
  VAR_14 = ((int)VAR_15.CMDYB);
  VAR_11 = VAR_11 - VAR_13/2;
  VAR_13++;
  VAR_14++;
  break;
 case 0x7:
  VAR_13 = ((int)VAR_15.CMDXB);
  VAR_14 = ((int)VAR_15.CMDYB);
  VAR_11 = VAR_11 - VAR_13;
  VAR_13++;
  VAR_14++;
  break;
 case 0x9:
  VAR_13 = ((int)VAR_15.CMDXB);
  VAR_14 = ((int)VAR_15.CMDYB);
  VAR_12 = VAR_12 - VAR_14/2;
  VAR_13++;
  VAR_14++;
  break;
 case 0xA:
  VAR_13 = ((int)VAR_15.CMDXB);
  VAR_14 = ((int)VAR_15.CMDYB);
  VAR_11 = VAR_11 - VAR_13/2;
  VAR_12 = VAR_12 - VAR_14/2;
  VAR_13++;
  VAR_14++;
  break;
 case 0xB:
  VAR_13 = ((int)VAR_15.CMDXB);
  VAR_14 = ((int)VAR_15.CMDYB);
  VAR_11 = VAR_11 - VAR_13;
  VAR_12 = VAR_12 - VAR_14/2;
  VAR_13++;
  VAR_14++;
  break;
 case 0xD:
  VAR_13 = ((int)VAR_15.CMDXB);
  VAR_14 = ((int)VAR_15.CMDYB);
  VAR_12 = VAR_12 - VAR_14;
  VAR_13++;
  VAR_14++;
  break;
 case 0xE:
  VAR_13 = ((int)VAR_15.CMDXB);
  VAR_14 = ((int)VAR_15.CMDYB);
  VAR_11 = VAR_11 - VAR_13/2;
  VAR_12 = VAR_12 - VAR_14;
  VAR_13++;
  VAR_14++;
  break;
 case 0xF:
  VAR_13 = ((int)VAR_15.CMDXB);
  VAR_14 = ((int)VAR_15.CMDYB);
  VAR_11 = VAR_11 - VAR_13;
  VAR_12 = VAR_12 - VAR_14;
  VAR_13++;
  VAR_14++;
  break;
 }

 VAR_3 = VAR_11;
 VAR_4 = VAR_12;

 VAR_5 = VAR_13+VAR_11 - 1;
 VAR_6 = VAR_4;

 VAR_7 = VAR_13+VAR_11 - 1;
 VAR_8 = VAR_14+VAR_12 - 1;

 VAR_9 = VAR_3;
 VAR_10 = VAR_14+VAR_12 - 1;

   FUNC_1(VAR_3, VAR_4, VAR_9, VAR_10, VAR_5, VAR_6, VAR_7, VAR_8, VAR_0, VAR_1, &VAR_15, VAR_2);
}
