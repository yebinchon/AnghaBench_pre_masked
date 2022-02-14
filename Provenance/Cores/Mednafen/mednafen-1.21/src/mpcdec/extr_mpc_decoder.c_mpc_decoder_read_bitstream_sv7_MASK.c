
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mpc_uint32_t ;
typedef int mpc_lut_data ;
typedef int mpc_int32_t ;
typedef int mpc_int16_t ;
struct TYPE_6__ {size_t* Res_L; size_t* Res_R; size_t* MS_Flag; int max_band; int* SCFI_L; int* SCFI_R; int** SCF_Index_L; int** SCF_Index_R; TYPE_1__* Q; scalar_t__ ms; } ;
typedef TYPE_2__ mpc_decoder ;
typedef int mpc_bits_reader ;
struct TYPE_5__ {int* L; int* R; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int ** VAR_4 ;
 void* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int const*) ;
 size_t FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_5 ;

void FUNC_4(mpc_decoder * VAR_6, mpc_bits_reader * VAR_7)
{

    static const mpc_int32_t VAR_8[] = { -1, 0, 1,-1, 0, 1,-1, 0, 1,-1, 0, 1,-1, 0, 1,-1, 0, 1,-1, 0, 1,-1, 0, 1,-1, 0, 1};
    static const mpc_int32_t VAR_9[] = { -1,-1,-1, 0, 0, 0, 1, 1, 1,-1,-1,-1, 0, 0, 0, 1, 1, 1,-1,-1,-1, 0, 0, 0, 1, 1, 1};
    static const mpc_int32_t VAR_10[] = { -1,-1,-1,-1,-1,-1,-1,-1,-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    static const mpc_int32_t VAR_11[] = { -2,-1, 0, 1, 2,-2,-1, 0, 1, 2,-2,-1, 0, 1, 2,-2,-1, 0, 1, 2,-2,-1, 0, 1, 2};
    static const mpc_int32_t VAR_12[] = { -2,-2,-2,-2,-2,-1,-1,-1,-1,-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2};

    mpc_int32_t VAR_13, VAR_14, VAR_15 = 0;




 VAR_6->Res_L[0] = FUNC_2(VAR_7, 4);
 VAR_6->Res_R[0] = FUNC_2(VAR_7, 4);
 if (!(VAR_6->Res_L[0] == 0 && VAR_6->Res_R[0] == 0)) {
  if (VAR_6->ms)
         VAR_6->MS_Flag[0] = FUNC_2(VAR_7, 1);
  VAR_15 = 1;
 }


 for ( VAR_13 = 1; VAR_13 <= VAR_6->max_band; VAR_13++ ) {
  VAR_14 = FUNC_1(VAR_7, & VAR_3);
  VAR_6->Res_L[VAR_13] = (VAR_14!=4) ? VAR_6->Res_L[VAR_13 - 1] + VAR_14 : (int) FUNC_2(VAR_7, 4);

  VAR_14 = FUNC_1(VAR_7, & VAR_3);
  VAR_6->Res_R[VAR_13] = (VAR_14!=4) ? VAR_6->Res_R[VAR_13 - 1] + VAR_14 : (int) FUNC_2(VAR_7, 4);

  if (!(VAR_6->Res_L[VAR_13] == 0 && VAR_6->Res_R[VAR_13] == 0)) {
   if (VAR_6->ms)
             VAR_6->MS_Flag[VAR_13] = FUNC_2(VAR_7, 1);
   VAR_15 = VAR_13 + 1;
  }
    }


    for ( VAR_13 = 0; VAR_13 < VAR_15; VAR_13++ ) {
  if (VAR_6->Res_L[VAR_13])
   VAR_6->SCFI_L[VAR_13] = FUNC_0(VAR_7, VAR_5);
  if (VAR_6->Res_R[VAR_13])
   VAR_6->SCFI_R[VAR_13] = FUNC_0(VAR_7, VAR_5);
    }


    for ( VAR_13 = 0; VAR_13 < VAR_15; VAR_13++ ) {
  mpc_int32_t * VAR_16 = VAR_6->SCF_Index_L[VAR_13];
  mpc_uint32_t VAR_17 = VAR_6->Res_L[VAR_13], VAR_18 = VAR_6->SCFI_L[VAR_13];
  do {
   if (VAR_17) {
    switch (VAR_18) {
     case 1:
      VAR_14 = FUNC_1(VAR_7, & VAR_2);
      VAR_16[0] = (VAR_14!=8) ? VAR_16[2] + VAR_14 : (int) FUNC_2(VAR_7, 6);
      VAR_14 = FUNC_1(VAR_7, & VAR_2);
      VAR_16[1] = (VAR_14!=8) ? VAR_16[0] + VAR_14 : (int) FUNC_2(VAR_7, 6);
      VAR_16[2] = VAR_16[1];
      break;
     case 3:
      VAR_14 = FUNC_1(VAR_7, & VAR_2);
      VAR_16[0] = (VAR_14!=8) ? VAR_16[2] + VAR_14 : (int) FUNC_2(VAR_7, 6);
      VAR_16[1] = VAR_16[0];
      VAR_16[2] = VAR_16[1];
      break;
     case 2:
      VAR_14 = FUNC_1(VAR_7, & VAR_2);
      VAR_16[0] = (VAR_14!=8) ? VAR_16[2] + VAR_14 : (int) FUNC_2(VAR_7, 6);
      VAR_16[1] = VAR_16[0];
      VAR_14 = FUNC_1(VAR_7, & VAR_2);
      VAR_16[2] = (VAR_14!=8) ? VAR_16[1] + VAR_14 : (int) FUNC_2(VAR_7, 6);
      break;
     case 0:
      VAR_14 = FUNC_1(VAR_7, & VAR_2);
      VAR_16[0] = (VAR_14!=8) ? VAR_16[2] + VAR_14 : (int) FUNC_2(VAR_7, 6);
      VAR_14 = FUNC_1(VAR_7, & VAR_2);
      VAR_16[1] = (VAR_14!=8) ? VAR_16[0] + VAR_14 : (int) FUNC_2(VAR_7, 6);
      VAR_14 = FUNC_1(VAR_7, & VAR_2);
      VAR_16[2] = (VAR_14!=8) ? VAR_16[1] + VAR_14 : (int) FUNC_2(VAR_7, 6);
      break;
     default:
      return;
    }
    if (VAR_16[0] > 1024)
     VAR_16[0] = 0x8080;
    if (VAR_16[1] > 1024)
     VAR_16[1] = 0x8080;
    if (VAR_16[2] > 1024)
     VAR_16[2] = 0x8080;
   }
   VAR_17 = VAR_6->Res_R[VAR_13];
   VAR_18 = VAR_6->SCFI_R[VAR_13];
  } while ( VAR_16 == VAR_6->SCF_Index_L[VAR_13] && (VAR_16 = VAR_6->SCF_Index_R[VAR_13]));
    }





    for ( VAR_13 = 0; VAR_13 < VAR_15; VAR_13++ ) {
  mpc_int16_t *VAR_19 = VAR_6->Q[VAR_13].L, VAR_20 = VAR_6->Res_L[VAR_13];
  do {
   mpc_int32_t VAR_21;
   const mpc_lut_data *VAR_22;
   switch (VAR_20) {
    case -2: case -3: case -4: case -5: case -6: case -7: case -8: case -9:
    case -10: case -11: case -12: case -13: case -14: case -15: case -16: case -17: case 0:
     break;
    case -1:
     for (VAR_21=0; VAR_21<36; VAR_21++ ) {
      mpc_uint32_t VAR_23 = FUNC_3(VAR_6);
      VAR_19[VAR_21] = ((VAR_23 >> 24) & 0xFF) + ((VAR_23 >> 16) & 0xFF) + ((VAR_23 >> 8) & 0xFF) + ((VAR_23 >> 0) & 0xFF) - 510;
     }
     break;
    case 1:
     VAR_22 = & VAR_4[0][FUNC_2(VAR_7, 1)];
     for ( VAR_21 = 0; VAR_21 < 36; VAR_21 += 3) {
      VAR_14 = FUNC_1(VAR_7, VAR_22);
      VAR_19[VAR_21] = VAR_8[VAR_14];
      VAR_19[VAR_21 + 1] = VAR_9[VAR_14];
      VAR_19[VAR_21 + 2] = VAR_10[VAR_14];
     }
     break;
    case 2:
     VAR_22 = & VAR_4[1][FUNC_2(VAR_7, 1)];
     for ( VAR_21 = 0; VAR_21 < 36; VAR_21 += 2) {
      VAR_14 = FUNC_1(VAR_7, VAR_22);
      VAR_19[VAR_21] = VAR_11[VAR_14];
      VAR_19[VAR_21 + 1] = VAR_12[VAR_14];
     }
     break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
     VAR_22 = & VAR_4[VAR_20 - 1][FUNC_2(VAR_7, 1)];
     for ( VAR_21 = 0; VAR_21 < 36; VAR_21++ )
      VAR_19[VAR_21] = FUNC_1(VAR_7, VAR_22);
     break;
    case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17:
     for ( VAR_21 = 0; VAR_21 < 36; VAR_21++ )
      VAR_19[VAR_21] = (mpc_int32_t)FUNC_2(VAR_7, VAR_1[VAR_20]) - VAR_0[VAR_20];
     break;
    default:
     return;
   }

   VAR_20 = VAR_6->Res_R[VAR_13];
  } while (VAR_19 == VAR_6->Q[VAR_13].L && (VAR_19 = VAR_6->Q[VAR_13].R));
    }
}
