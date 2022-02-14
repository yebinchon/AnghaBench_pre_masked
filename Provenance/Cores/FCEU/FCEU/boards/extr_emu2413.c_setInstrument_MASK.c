
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
typedef size_t uint32 ;
typedef int src ;
struct TYPE_8__ {int AM; int PM; int EG; int KR; int ML; int KL; int TL; int WF; int AR; int DR; int SL; int RR; int * FB; } ;
struct TYPE_11__ {TYPE_1__ patch; } ;
struct TYPE_10__ {TYPE_1__ patch; } ;
struct TYPE_9__ {size_t* patch_number; int* CustInst; } ;
typedef TYPE_1__ OPLL_PATCH ;
typedef TYPE_2__ OPLL ;


 TYPE_6__* FUNC_0 (TYPE_2__*,size_t) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,size_t) ;
 int** VAR_0 ;

__attribute__((used)) static void FUNC_2(OPLL * VAR_1, uint32 VAR_2, uint32 VAR_3) {
 const uint8 *VAR_4;
 OPLL_PATCH *VAR_5, *VAR_6;

 VAR_1->patch_number[VAR_2] = VAR_3;

 if (VAR_3)
  VAR_4 = VAR_0[VAR_3 - 1];
 else
  VAR_4 = VAR_1->CustInst;

 VAR_5 = &FUNC_1(VAR_1, VAR_2)->patch;
 VAR_6 = &FUNC_0(VAR_1, VAR_2)->patch;

 VAR_5->AM = (VAR_4[0] >> 7) & 1;
 VAR_5->PM = (VAR_4[0] >> 6) & 1;
 VAR_5->EG = (VAR_4[0] >> 5) & 1;
 VAR_5->KR = (VAR_4[0] >> 4) & 1;
 VAR_5->ML = (VAR_4[0] & 0xF);

 VAR_6->AM = (VAR_4[1] >> 7) & 1;
 VAR_6->PM = (VAR_4[1] >> 6) & 1;
 VAR_6->EG = (VAR_4[1] >> 5) & 1;
 VAR_6->KR = (VAR_4[1] >> 4) & 1;
 VAR_6->ML = (VAR_4[1] & 0xF);

 VAR_5->KL = (VAR_4[2] >> 6) & 3;
 VAR_5->TL = (VAR_4[2] & 0x3F);

 VAR_6->KL = (VAR_4[3] >> 6) & 3;
 VAR_6->WF = (VAR_4[3] >> 4) & 1;

 VAR_5->WF = (VAR_4[3] >> 3) & 1;

 VAR_5->FB = (VAR_4[3]) & 7;

 VAR_5->AR = (VAR_4[4] >> 4) & 0xF;
 VAR_5->DR = (VAR_4[4] & 0xF);

 VAR_6->AR = (VAR_4[5] >> 4) & 0xF;
 VAR_6->DR = (VAR_4[5] & 0xF);

 VAR_5->SL = (VAR_4[6] >> 4) & 0xF;
 VAR_5->RR = (VAR_4[6] & 0xF);

 VAR_6->SL = (VAR_4[7] >> 4) & 0xF;
 VAR_6->RR = (VAR_4[7] & 0xF);
}
