
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int m68k_register_t ;
struct TYPE_2__ {unsigned int* dar; int t1_flag; int s_flag; int int_mask; int x_flag; int n_flag; int v_flag; int c_flag; unsigned int* sp; unsigned int pref_addr; unsigned int pref_data; unsigned int ir; int not_z_flag; int pc; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

unsigned int FUNC_1(m68k_register_t VAR_5)
{
  switch(VAR_5)
  {
    case 143: return VAR_4.dar[0];
    case 142: return VAR_4.dar[1];
    case 141: return VAR_4.dar[2];
    case 140: return VAR_4.dar[3];
    case 139: return VAR_4.dar[4];
    case 138: return VAR_4.dar[5];
    case 137: return VAR_4.dar[6];
    case 136: return VAR_4.dar[7];
    case 151: return VAR_4.dar[8];
    case 150: return VAR_4.dar[9];
    case 149: return VAR_4.dar[10];
    case 148: return VAR_4.dar[11];
    case 147: return VAR_4.dar[12];
    case 146: return VAR_4.dar[13];
    case 145: return VAR_4.dar[14];
    case 144: return VAR_4.dar[15];
    case 133: return FUNC_0(VAR_4.pc);
    case 129: return VAR_4.t1_flag |
                  (VAR_4.s_flag << 11) |
                   VAR_4.int_mask |
                  ((VAR_4.x_flag & VAR_3) >> 4) |
                  ((VAR_4.n_flag & VAR_1) >> 4) |
                  ((!VAR_4.not_z_flag) << 2) |
                  ((VAR_4.v_flag & VAR_2) >> 6) |
                  ((VAR_4.c_flag & VAR_0) >> 8);
    case 130: return VAR_4.dar[15];
    case 128: return VAR_4.s_flag ? VAR_4.sp[0] : VAR_4.dar[15];
    case 134: return VAR_4.s_flag ? VAR_4.dar[15] : VAR_4.sp[4];




    case 135: return VAR_4.ir;
    default: return 0;
  }
}
