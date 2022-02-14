
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct svga_pll {int r_max; int r_min; int f_vco_max; int f_vco_min; int m_min; int n_min; int m_max; int n_max; int f_base; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,unsigned int,...) ;

int FUNC_2(const struct svga_pll *VAR_1, u32 VAR_2, u16 *VAR_3, u16 *VAR_4, u16 *VAR_5, int VAR_6)
{
 u16 VAR_7, VAR_8, VAR_9;
 u32 VAR_10, VAR_11, VAR_12, VAR_13;

 FUNC_1("fb%d: ideal frequency: %d kHz\n", VAR_6, (unsigned int) VAR_2);

 VAR_9 = VAR_1->r_max;
 VAR_10 = VAR_2 << VAR_9;


 if ((VAR_10 >> VAR_9) != VAR_2)
  return -VAR_0;




 while ((VAR_9 > VAR_1->r_min) && (VAR_10 > VAR_1->f_vco_max)) {
  VAR_9--;
  VAR_10 = VAR_10 >> 1;
 }


 if ((VAR_10 < VAR_1->f_vco_min) || (VAR_10 > VAR_1->f_vco_max))
  return -VAR_0;

 VAR_13 = 0xFFFFFFFF;
 *VAR_3 = 0;
 *VAR_4 = 0;
 *VAR_5 = VAR_9;

 VAR_7 = VAR_1->m_min;
 VAR_8 = VAR_1->n_min;

 while ((VAR_7 <= VAR_1->m_max) && (VAR_8 <= VAR_1->n_max)) {
  VAR_11 = (VAR_1->f_base * VAR_7) / VAR_8;
  VAR_12 = FUNC_0 (VAR_11, VAR_10);

  if (VAR_12 < VAR_13) {
   VAR_13 = VAR_12;
   *VAR_3 = VAR_7;
   *VAR_4 = VAR_8;
  }

  if (VAR_11 <= VAR_10) {
   VAR_7 ++;
  } else {
   VAR_8 ++;
  }
 }

 VAR_11 = (VAR_1->f_base * *VAR_3) / *VAR_4;
 FUNC_1("fb%d: found frequency: %d kHz (VCO %d kHz)\n", VAR_6, (int) (VAR_11 >> VAR_9), (int) VAR_11);
 FUNC_1("fb%d: m = %d n = %d r = %d\n", VAR_6, (unsigned int) *VAR_3, (unsigned int) *VAR_4, (unsigned int) *VAR_5);
 return 0;
}
