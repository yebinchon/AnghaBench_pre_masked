
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int s8 ;
struct TYPE_4__ {int dmt_budmin; int* dmt_stree; int dmt_nleafs; int dmt_leafidx; } ;
typedef TYPE_1__ dmtree_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(dmtree_t * VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 s8 *VAR_7;



 if (VAR_4 >= VAR_2->dmt_budmin) {


  VAR_7 = VAR_2->dmt_stree + FUNC_2(VAR_2->dmt_leafidx);
  VAR_5 = FUNC_0(VAR_4, VAR_2->dmt_budmin);



  while (VAR_5 < FUNC_2(VAR_2->dmt_nleafs)) {


   VAR_6 = VAR_3 ^ VAR_5;




   if (VAR_4 > VAR_7[VAR_6])
    break;


   if (VAR_4 < VAR_7[VAR_6])
    return -VAR_0;
   if (VAR_3 < VAR_6) {


    FUNC_1(VAR_2, VAR_6, VAR_1);
   } else {



    FUNC_1(VAR_2, VAR_3, VAR_1);
    VAR_3 = VAR_6;
   }



   VAR_4 += 1;
   VAR_5 <<= 1;
  }
 }



 FUNC_1(VAR_2, VAR_3, VAR_4);

 return 0;
}
