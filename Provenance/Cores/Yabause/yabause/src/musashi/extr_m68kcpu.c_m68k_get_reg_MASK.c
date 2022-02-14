
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
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;

unsigned int FUNC_1(void* VAR_10, m68k_register_t VAR_11)
{
 m68ki_cpu_core* VAR_12 = VAR_10 != ((void*)0) ?(m68ki_cpu_core*)VAR_10 : &VAR_9;

 switch(VAR_11)
 {
  case 148: return VAR_12->dar[0];
  case 147: return VAR_12->dar[1];
  case 146: return VAR_12->dar[2];
  case 145: return VAR_12->dar[3];
  case 144: return VAR_12->dar[4];
  case 143: return VAR_12->dar[5];
  case 142: return VAR_12->dar[6];
  case 141: return VAR_12->dar[7];
  case 159: return VAR_12->dar[8];
  case 158: return VAR_12->dar[9];
  case 157: return VAR_12->dar[10];
  case 156: return VAR_12->dar[11];
  case 155: return VAR_12->dar[12];
  case 154: return VAR_12->dar[13];
  case 153: return VAR_12->dar[14];
  case 152: return VAR_12->dar[15];
  case 136: return FUNC_0(VAR_12->pc);
  case 130: return VAR_12->t1_flag |
         VAR_12->t0_flag |
         (VAR_12->s_flag << 11) |
         (VAR_12->m_flag << 11) |
         VAR_12->int_mask |
         ((VAR_12->x_flag & VAR_8) >> 4) |
         ((VAR_12->n_flag & VAR_6) >> 4) |
         ((!VAR_12->not_z_flag) << 2) |
         ((VAR_12->v_flag & VAR_7) >> 6) |
         ((VAR_12->c_flag & VAR_0) >> 8);
  case 131: return VAR_12->dar[15];
  case 129: return VAR_12->s_flag ? VAR_12->sp[0] : VAR_12->dar[15];
  case 138: return VAR_12->s_flag && !VAR_12->m_flag ? VAR_12->dar[15] : VAR_12->sp[4];
  case 137: return VAR_12->s_flag && VAR_12->m_flag ? VAR_12->dar[15] : VAR_12->sp[6];
  case 132: return VAR_12->sfc;
  case 140: return VAR_12->dfc;
  case 128: return VAR_12->vbr;
  case 150: return VAR_12->cacr;
  case 151: return VAR_12->caar;
  case 134: return VAR_12->pref_addr;
  case 133: return VAR_12->pref_data;
  case 135: return FUNC_0(VAR_12->ppc);
  case 139: return VAR_12->ir;
  case 149:
   switch(VAR_12->cpu_type)
   {
    case 163: return (unsigned int)VAR_1;
    case 162: return (unsigned int)VAR_2;
    case 160: return (unsigned int)VAR_4;
    case 161: return (unsigned int)VAR_3;
   }
   return VAR_5;
  default: return 0;
 }
 return 0;
}
