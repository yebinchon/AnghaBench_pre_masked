
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int s8 ;
struct TYPE_4__ {int* dmt_stree; int dmt_budmin; int dmt_leafidx; } ;
typedef TYPE_1__ dmtree_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(dmtree_t * VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 s8 *VAR_6 = VAR_0->dmt_stree + FUNC_2(VAR_0->dmt_leafidx);



 if (VAR_6[VAR_1] > VAR_0->dmt_budmin) {





  VAR_5 = VAR_6[VAR_1] - 1;
  VAR_4 = FUNC_0(VAR_5, VAR_0->dmt_budmin);



  while (VAR_5 >= VAR_2) {


   FUNC_1(VAR_0, VAR_1 ^ VAR_4, VAR_5);



   VAR_5 -= 1;
   VAR_4 >>= 1;
  }
 }




 FUNC_1(VAR_0, VAR_1, VAR_3);
}
