
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int imm; int sel; int sub_opcode; int opcode; } ;
struct TYPE_10__ {int addr; int reg; } ;
struct TYPE_9__ {int offset; int sign; int sub_opcode; int opcode; } ;
struct TYPE_12__ {TYPE_3__ alu_imm; TYPE_2__ bx; TYPE_1__ b; } ;
typedef TYPE_4__ ulp_insn_t ;
typedef int uint32_t ;
struct TYPE_13__ {int addr; int type; } ;
typedef TYPE_5__ reloc_info_t ;
typedef scalar_t__ int32_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;



 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static esp_err_t FUNC_3(ulp_insn_t* VAR_7, uint32_t VAR_8,
        reloc_info_t VAR_9, reloc_info_t VAR_10)
{
    size_t VAR_11 = VAR_10.addr - VAR_8;
    ulp_insn_t* VAR_12 = &VAR_7[VAR_11];

    switch (VAR_10.type) {
        case 132: {



            FUNC_2(VAR_12->b.opcode == VAR_4
                    && "branch macro was applied to a non-branch instruction");
            switch (VAR_12->b.sub_opcode) {
                case 130:
                case 129:{
                    int32_t VAR_13 = ((int32_t) VAR_9.addr) - ((int32_t) VAR_10.addr);
                    uint32_t VAR_14 = FUNC_1(VAR_13);
                    uint32_t VAR_15 = (VAR_13 >= 0) ? 0 : 1;
                    if (VAR_14 > 127) {
                        FUNC_0(VAR_6, "target out of range: branch from %x to %x",
                                VAR_10.addr, VAR_9.addr);
                        return VAR_1;
                    }
                    VAR_12->b.offset = VAR_14;
                    VAR_12->b.sign = VAR_15;
                    break;
                }
                case 128:{
                    FUNC_2(VAR_12->bx.reg == 0 &&
                            "relocation applied to a jump with offset in register");
                    VAR_12->bx.addr = VAR_9.addr;
                    break;
                }
                default:
                    FUNC_2(0 && "unexpected branch sub-opcode");
            }
            break;
        }
        case 131: {
            FUNC_2((VAR_12->alu_imm.opcode == VAR_3 && VAR_12->alu_imm.sub_opcode == VAR_5 && VAR_12->alu_imm.sel == VAR_0)
                        && "pc macro was applied to an incompatible instruction");
            VAR_12->alu_imm.imm = VAR_9.addr;
            break;
        }
        default:
            FUNC_2(0 && "unknown reloc type");
    }
    return VAR_2;
}
