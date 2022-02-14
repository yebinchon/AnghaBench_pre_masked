
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rubin_state {unsigned long p; unsigned long q; long rec_q; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct rubin_state*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct rubin_state *VAR_1, long VAR_2, long VAR_3)
{
 unsigned long VAR_4 = VAR_1->p, VAR_5 = VAR_1->q;
 long VAR_6, VAR_7;
 int VAR_8;

 if (VAR_5 >= VAR_0 || ((VAR_4 + VAR_5) <= VAR_0))
  FUNC_0(VAR_1, VAR_4, VAR_5);

 VAR_6 = VAR_2 * VAR_1->p / (VAR_2 + VAR_3);
 if (VAR_6 <= 0)
  VAR_6 = 1;

 if (VAR_6 >= VAR_1->p)
  VAR_6 = VAR_1->p - 1;

 VAR_7 = VAR_1->q + VAR_6;
 VAR_8 = VAR_1->rec_q >= VAR_7;
 if (VAR_1->rec_q >= VAR_7) {
  VAR_1->q += VAR_6;
  VAR_6 = VAR_1->p - VAR_6;
 }

 VAR_1->p = VAR_6;

 return VAR_8;
}
