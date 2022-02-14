
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int* A; int fault_addr; int fault_status; int ea_addr; int PC; int exception; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,int,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5(Q68State *VAR_5, uint32_t VAR_6)
{
    int VAR_7 = ~VAR_6 & 0x0040;





    int VAR_8;
    switch (FUNC_0(VAR_6)) {
      case 133:
        VAR_8 = 8;
        break;
      case 135:
        VAR_8 = 10;
        break;
      case 134:
        VAR_8 = 14;
        break;
      case 132:
        switch (FUNC_1(VAR_6)) {
          case 130:
            VAR_8 = 10;
            break;
          case 131:
            VAR_8 = 12;
            break;
          case 129:
            VAR_8 = 10;
            break;
          case 128:
            VAR_8 = 14;
            break;
          default:
            return FUNC_4(VAR_5, VAR_6);
        }
        break;
      default:
        return FUNC_4(VAR_5, VAR_6);
    }

    FUNC_3(VAR_5, VAR_6, VAR_4, VAR_0);
    if (VAR_7) {

        if (VAR_5->A[7] & 1) {
            VAR_5->exception = VAR_1;
            VAR_5->fault_addr = VAR_5->A[7];
            VAR_5->fault_status = VAR_2
                                | VAR_3;
            return 0;
        }

        VAR_8 += 8;
        FUNC_2(VAR_5, VAR_5->PC);
    }
    VAR_5->PC = VAR_5->ea_addr;
    return VAR_8;
}
