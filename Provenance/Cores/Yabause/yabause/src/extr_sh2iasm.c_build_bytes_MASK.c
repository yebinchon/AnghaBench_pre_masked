
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int const type; int reg; } ;
typedef TYPE_1__ sh_operand_info ;
struct TYPE_8__ {int* nibbles; } ;
typedef TYPE_2__ sh_opcode_info ;
 int FUNC_0 (unsigned int*,int,int) ;

unsigned long FUNC_1(sh_opcode_info VAR_0,sh_operand_info VAR_1,
                          sh_operand_info VAR_2,sh_operand_info VAR_3)




{
    int VAR_4;
    int VAR_5;
    unsigned int VAR_6;

    VAR_4 = 0;
    VAR_6 = 0;
    while(VAR_4 < 4)
    {
       VAR_5 = VAR_0.nibbles[VAR_4];
       if(VAR_5 < 16)
       {
          FUNC_0(&VAR_6,VAR_5,VAR_4);
          VAR_4++;
       }
       else
       {
          switch(VAR_5)
          {
            case 129 : if(VAR_1 == 129)
                             FUNC_0(&VAR_6,VAR_1,VAR_4);
                           else
                             FUNC_0(&VAR_6,VAR_2,VAR_4);
                           break;
            case 128 : if(VAR_1 == 128)
                             FUNC_0(&VAR_6,VAR_1,VAR_4);
                           else
                             FUNC_0(&VAR_6,VAR_2,VAR_4);
                           break;
            case 139 :
            case 137 : FUNC_0(&VAR_6,VAR_3.reg&0xF,VAR_4);
                           break;
            case 136: VAR_3.reg >>= 1;
                           FUNC_0(&VAR_6,VAR_3.reg&0xF,VAR_4);
                           break;
            case 135: VAR_3.reg >>= 2;
                           FUNC_0(&VAR_6,VAR_3.reg&0xF,VAR_4);
                           break;
            case 141: FUNC_0(&VAR_6,(VAR_3.reg >> 8) & 0xF,VAR_4);
                            FUNC_0(&VAR_6,(VAR_3.reg >> 4) & 0xF,VAR_4+1);
                            FUNC_0(&VAR_6,VAR_3.reg & 0xF,VAR_4+2);
                            VAR_4 += 2;
                            break;
            case 138 :
            case 134 :
            case 140 : FUNC_0(&VAR_6,(VAR_3.reg >> 4) & 0xF,VAR_4);
                            FUNC_0(&VAR_6,VAR_3.reg & 0xF,VAR_4+1);
                            VAR_4 += 1;
                            break;
            case 131:
            case 133 :
                            VAR_3.reg >>= 1;
                            FUNC_0(&VAR_6,(VAR_3.reg >> 4) & 0xF,VAR_4);
                            FUNC_0(&VAR_6,VAR_3.reg & 0xF,VAR_4+1);
                            VAR_4 += 1;
                            break;
            case 130:
            case 132 :
                            VAR_3.reg >>= 2;
                            FUNC_0(&VAR_6,(VAR_3.reg >> 4) & 0xF,VAR_4);
                            FUNC_0(&VAR_6,VAR_3.reg & 0xF,VAR_4+1);
                            VAR_4 += 1;
                            break;
          }
          VAR_4++;
       }
    }
    return VAR_6;
}
