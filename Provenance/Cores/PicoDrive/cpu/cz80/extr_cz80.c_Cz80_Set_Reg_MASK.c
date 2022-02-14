
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t BasePC; size_t* Fetch; size_t PC; size_t HaltState; size_t IRQState; int * OPFetch; int OPBase; } ;
typedef TYPE_1__ cz80_struc ;
typedef size_t UINT32 ;
typedef int INT32 ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;

void FUNC_0(cz80_struc *VAR_17, INT32 VAR_18, UINT32 VAR_19)
{
 switch (VAR_18)
 {
 case 130:
  VAR_17->BasePC = VAR_17->Fetch[VAR_19 >> VAR_0];



  VAR_17->PC = VAR_19 + VAR_17->BasePC;
  break;

 case 128: VAR_16 = VAR_19; break;
 case 146: VAR_1 = VAR_19; break;
 case 144: VAR_3 = VAR_19; break;
 case 142: VAR_5 = VAR_19; break;
 case 139: VAR_7 = VAR_19; break;
 case 132: VAR_13 = VAR_19; break;
 case 131: VAR_14 = VAR_19; break;
 case 145: VAR_2 = VAR_19; break;
 case 143: VAR_4 = VAR_19; break;
 case 141: VAR_6 = VAR_19; break;
 case 138: VAR_8 = VAR_19; break;
 case 129: VAR_15 = VAR_19; break;
 case 137: VAR_9 = VAR_19; break;
 case 134: VAR_12 = VAR_19; break;
 case 136: VAR_10 = VAR_19 ? (1 << 2) : 0; break;
 case 135: VAR_11 = VAR_19 ? (1 << 2) : 0; break;
 case 140: VAR_17->HaltState = VAR_19; break;
 case 133: VAR_17->IRQState = VAR_19; break;
 default: break;
 }
}
