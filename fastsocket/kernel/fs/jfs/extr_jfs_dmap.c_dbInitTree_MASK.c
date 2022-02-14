
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmaptree {int* stree; int budmin; int nleafs; int leafidx; int l2nleafs; } ;
typedef int s8 ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dmaptree * VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8;
 s8 *VAR_9, *VAR_10, *VAR_11;

 VAR_9 = VAR_0->stree;


 VAR_1 = FUNC_1(VAR_0->l2nleafs) + VAR_0->budmin;
 for (VAR_2 = VAR_0->budmin, VAR_3 = 1; VAR_2 < VAR_1;
      VAR_2++, VAR_3 = VAR_4) {

  VAR_4 = VAR_3 << 1;


  for (VAR_5 = 0, VAR_10 = VAR_9 + FUNC_1(VAR_0->leafidx);
       VAR_5 < FUNC_1(VAR_0->nleafs);
       VAR_5 += VAR_4, VAR_10 += VAR_4) {

   if (*VAR_10 == VAR_2 && *(VAR_10 + VAR_3) == VAR_2) {
    *VAR_10 = VAR_2 + 1;
    *(VAR_10 + VAR_3) = -1;
   }
  }
 }
 for (VAR_6 = FUNC_1(VAR_0->leafidx),
      VAR_8 = FUNC_1(VAR_0->nleafs) >> 2;
      VAR_8 > 0; VAR_8 >>= 2, VAR_6 = VAR_7) {

  VAR_7 = (VAR_6 - 1) >> 2;




  for (VAR_5 = 0, VAR_10 = VAR_9 + VAR_6, VAR_11 = VAR_9 + VAR_7;
       VAR_5 < VAR_8; VAR_5++, VAR_10 += 4, VAR_11++)
   *VAR_11 = FUNC_0(VAR_10);
 }

 return (*VAR_9);
}
