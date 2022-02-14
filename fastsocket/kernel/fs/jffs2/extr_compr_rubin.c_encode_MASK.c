
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rubin_state {int q; int p; int pp; int bit_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct rubin_state *VAR_2, long VAR_3, long VAR_4, int VAR_5)
{

 long VAR_6, VAR_7;
 int VAR_8;

 while ((VAR_2->q >= VAR_1) ||
        ((VAR_2->p + VAR_2->q) <= VAR_1)) {
  VAR_2->bit_number++;

  VAR_8 = FUNC_0(&VAR_2->pp, (VAR_2->q & VAR_1) ? 1 : 0, 0);
  if (VAR_8)
   return VAR_8;
  VAR_2->q &= VAR_0;
  VAR_2->q <<= 1;
  VAR_2->p <<= 1;
 }
 VAR_6 = VAR_3 * VAR_2->p / (VAR_3 + VAR_4);
 if (VAR_6 <= 0)
  VAR_6 = 1;

 if (VAR_6 >= VAR_2->p)
  VAR_6 = VAR_2->p - 1;

 VAR_7 = VAR_2->p - VAR_6;

 if (VAR_5 == 0)
  VAR_2->p = VAR_6;
 else {
  VAR_2->p = VAR_7;
  VAR_2->q += VAR_6;
 }
 return 0;
}
