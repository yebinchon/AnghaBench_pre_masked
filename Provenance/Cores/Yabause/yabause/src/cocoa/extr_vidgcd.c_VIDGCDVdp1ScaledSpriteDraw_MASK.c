
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int s32 ;
typedef int Vdp1 ;
struct TYPE_5__ {int localX; int localY; int addr; } ;
struct TYPE_4__ {int CMDXA; int CMDYA; int CMDCTRL; int CMDSIZE; scalar_t__ CMDYB; scalar_t__ CMDXB; scalar_t__ CMDYC; scalar_t__ CMDXC; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int,int,int,int,int,int,int,int) ;

void FUNC_2(u8 * VAR_3, Vdp1 * VAR_4, u8* VAR_5){

 s32 VAR_6,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16,VAR_17,VAR_18,VAR_19;
 FUNC_0(&VAR_2, VAR_1->addr, VAR_0);

 VAR_16 = VAR_2.CMDXA + VAR_1->localX;
 VAR_17 = VAR_2.CMDYA + VAR_1->localY;

 switch ((VAR_2.CMDCTRL >> 8) & 0xF)
 {
 case 0x0:
 default:
  VAR_18 = ((int)VAR_2.CMDXC) - VAR_16 + VAR_1->localX + 1;
  VAR_19 = ((int)VAR_2.CMDYC) - VAR_17 + VAR_1->localY + 1;
  break;
 case 0x5:
  VAR_18 = ((int)VAR_2.CMDXB) + 1;
  VAR_19 = ((int)VAR_2.CMDYB) + 1;
  break;
 case 0x6:
  VAR_18 = ((int)VAR_2.CMDXB);
  VAR_19 = ((int)VAR_2.CMDYB);
  VAR_16 = VAR_16 - VAR_18/2;
  VAR_18++;
  VAR_19++;
  break;
 case 0x7:
  VAR_18 = ((int)VAR_2.CMDXB);
  VAR_19 = ((int)VAR_2.CMDYB);
  VAR_16 = VAR_16 - VAR_18;
  VAR_18++;
  VAR_19++;
  break;
 case 0x9:
  VAR_18 = ((int)VAR_2.CMDXB);
  VAR_19 = ((int)VAR_2.CMDYB);
  VAR_17 = VAR_17 - VAR_19/2;
  VAR_18++;
  VAR_19++;
  break;
 case 0xA:
  VAR_18 = ((int)VAR_2.CMDXB);
  VAR_19 = ((int)VAR_2.CMDYB);
  VAR_16 = VAR_16 - VAR_18/2;
  VAR_17 = VAR_17 - VAR_19/2;
  VAR_18++;
  VAR_19++;
  break;
 case 0xB:
  VAR_18 = ((int)VAR_2.CMDXB);
  VAR_19 = ((int)VAR_2.CMDYB);
  VAR_16 = VAR_16 - VAR_18;
  VAR_17 = VAR_17 - VAR_19/2;
  VAR_18++;
  VAR_19++;
  break;
 case 0xD:
  VAR_18 = ((int)VAR_2.CMDXB);
  VAR_19 = ((int)VAR_2.CMDYB);
  VAR_17 = VAR_17 - VAR_19;
  VAR_18++;
  VAR_19++;
  break;
 case 0xE:
  VAR_18 = ((int)VAR_2.CMDXB);
  VAR_19 = ((int)VAR_2.CMDYB);
  VAR_16 = VAR_16 - VAR_18/2;
  VAR_17 = VAR_17 - VAR_19;
  VAR_18++;
  VAR_19++;
  break;
 case 0xF:
  VAR_18 = ((int)VAR_2.CMDXB);
  VAR_19 = ((int)VAR_2.CMDYB);
  VAR_16 = VAR_16 - VAR_18;
  VAR_17 = VAR_17 - VAR_19;
  VAR_18++;
  VAR_19++;
  break;
 }

 VAR_14 = ((VAR_2.CMDSIZE >> 8) & 0x3F) * 8;
 VAR_15 = VAR_2.CMDSIZE & 0xFF;

 VAR_6 = VAR_16;
 VAR_7 = VAR_17;

 VAR_8 = VAR_18 + VAR_16 - 1;
 VAR_9 = VAR_7;

 VAR_10 = VAR_18 + VAR_16 - 1;
 VAR_11 = VAR_19 + VAR_17 - 1;

 VAR_12 = VAR_6;
 VAR_13 = VAR_19 + VAR_17 - 1;

 FUNC_1(VAR_6,VAR_7,VAR_12,VAR_13,VAR_8,VAR_9,VAR_10,VAR_11);
}
