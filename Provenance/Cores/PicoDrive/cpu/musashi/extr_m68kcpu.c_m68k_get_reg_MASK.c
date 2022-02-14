
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* dar; int t1_flag; int t0_flag; int s_flag; int m_flag; int int_mask; int x_flag; int n_flag; int v_flag; int c_flag; unsigned int* sp; unsigned int sfc; unsigned int dfc; unsigned int vbr; unsigned int cacr; unsigned int caar; unsigned int pref_addr; unsigned int pref_data; unsigned int ir; int cpu_type; int ppc; int not_z_flag; int pc; } ;
typedef TYPE_1__ m68ki_cpu_core ;
typedef int m68k_register_t ;


 int VAR_0 ;






 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;

unsigned int FUNC_1(void* VAR_12, m68k_register_t VAR_13)
{
 m68ki_cpu_core* VAR_14 = VAR_12 != ((void*)0) ?(m68ki_cpu_core*)VAR_12 : &VAR_11;

 switch(VAR_13)
 {
  case 148: return VAR_14->dar[0];
  case 147: return VAR_14->dar[1];
  case 146: return VAR_14->dar[2];
  case 145: return VAR_14->dar[3];
  case 144: return VAR_14->dar[4];
  case 143: return VAR_14->dar[5];
  case 142: return VAR_14->dar[6];
  case 141: return VAR_14->dar[7];
  case 159: return VAR_14->dar[8];
  case 158: return VAR_14->dar[9];
  case 157: return VAR_14->dar[10];
  case 156: return VAR_14->dar[11];
  case 155: return VAR_14->dar[12];
  case 154: return VAR_14->dar[13];
  case 153: return VAR_14->dar[14];
  case 152: return VAR_14->dar[15];
  case 136: return FUNC_0(VAR_14->pc);
  case 130: return VAR_14->t1_flag |
         VAR_14->t0_flag |
         (VAR_14->s_flag << 11) |
         (VAR_14->m_flag << 11) |
         VAR_14->int_mask |
         ((VAR_14->x_flag & VAR_10) >> 4) |
         ((VAR_14->n_flag & VAR_8) >> 4) |
         ((!VAR_14->not_z_flag) << 2) |
         ((VAR_14->v_flag & VAR_9) >> 6) |
         ((VAR_14->c_flag & VAR_0) >> 8);
  case 131: return VAR_14->dar[15];
  case 129: return VAR_14->s_flag ? VAR_14->sp[0] : VAR_14->dar[15];
  case 138: return VAR_14->s_flag && !VAR_14->m_flag ? VAR_14->dar[15] : VAR_14->sp[4];
  case 137: return VAR_14->s_flag && VAR_14->m_flag ? VAR_14->dar[15] : VAR_14->sp[6];
  case 132: return VAR_14->sfc;
  case 140: return VAR_14->dfc;
  case 128: return VAR_14->vbr;
  case 150: return VAR_14->cacr;
  case 151: return VAR_14->caar;
  case 134: return VAR_14->pref_addr;
  case 133: return VAR_14->pref_data;
  case 135: return FUNC_0(VAR_14->ppc);
  case 139: return VAR_14->ir;
  case 149:
   switch(VAR_14->cpu_type)
   {
    case 165: return (unsigned int)VAR_1;
    case 164: return (unsigned int)VAR_2;
    case 163: return (unsigned int)VAR_3;
    case 160: return (unsigned int)VAR_6;
    case 162: return (unsigned int)VAR_4;
    case 161: return (unsigned int)VAR_5;
   }
   return VAR_7;
  default: return 0;
 }
 return 0;
}
