
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int value ;
typedef int u32 ;
struct TYPE_14__ {int H; int L; } ;
struct TYPE_15__ {TYPE_5__ part; } ;
struct TYPE_12__ {int H; int L; } ;
struct TYPE_13__ {TYPE_3__ part; } ;
struct TYPE_10__ {int PR; int EP; int T0; int S; int Z; int C; int V; int E; int ES; int EX; int LE; int P; } ;
struct TYPE_11__ {TYPE_1__ part; } ;
struct TYPE_16__ {int TOP; int LOP; int* CT; int RA0; int WA0; int RX; int RY; TYPE_6__ AC; TYPE_4__ P; TYPE_2__ ProgControlPort; } ;
typedef TYPE_7__ scudspregs_struct ;
typedef int YuiScudsp ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*) ;

__attribute__((used)) static void FUNC_2( YuiScudsp *VAR_0, int VAR_1, u32 VAR_2 ) {


  scudspregs_struct VAR_3;
  FUNC_0(&VAR_3);

  switch ( VAR_1 ) {
  case 0: VAR_3.ProgControlPort.part.PR = VAR_2; break;
  case 1: VAR_3.ProgControlPort.part.EP = VAR_2; break;
  case 2: VAR_3.ProgControlPort.part.T0 = VAR_2; break;
  case 3: VAR_3.ProgControlPort.part.S = VAR_2; break;
  case 4: VAR_3.ProgControlPort.part.Z = VAR_2; break;
  case 5: VAR_3.ProgControlPort.part.C = VAR_2; break;
  case 6: VAR_3.ProgControlPort.part.V = VAR_2; break;
  case 7: VAR_3.ProgControlPort.part.E = VAR_2; break;
  case 8: VAR_3.ProgControlPort.part.ES = VAR_2; break;
  case 9: VAR_3.ProgControlPort.part.EX = VAR_2; break;
  case 10: VAR_3.ProgControlPort.part.LE = VAR_2; break;
  case 11: VAR_3.ProgControlPort.part.P = VAR_2; break;
  case 12: VAR_3.TOP = VAR_2; break;
  case 13: VAR_3.LOP = VAR_2; break;
  case 14:
    VAR_3.CT[0] = (VAR_2>>24) & 0xff;
    VAR_3.CT[1] = (VAR_2>>16) & 0xff;
    VAR_3.CT[2] = (VAR_2>>8) & 0xff;
    VAR_3.CT[3] = (VAR_2) & 0xff;
    break;
  case 15: VAR_3.RA0 = VAR_2; break;
  case 16: VAR_3.WA0 = VAR_2; break;
  case 17: VAR_3.RX = VAR_2; break;
  case 18: VAR_3.RY = VAR_2; break;
  case 19: VAR_3.P.part.H = VAR_2; break;
  case 20: VAR_3.P.part.L = VAR_2; break;
  case 21: VAR_3.AC.part.H = VAR_2; break;
  case 22: VAR_3.AC.part.L = VAR_2; break;
  }

  FUNC_1(&VAR_3);
}
