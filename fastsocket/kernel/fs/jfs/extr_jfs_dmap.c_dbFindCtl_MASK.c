
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metapage {scalar_t__ data; } ;
struct dmapctl {int budmin; scalar_t__ leafidx; } ;
struct bmap {TYPE_1__* db_ipbmap; int db_l2nbperpage; } ;
typedef int s64 ;
typedef int dmtree_t ;
struct TYPE_2__ {int i_sb; } ;


 int FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int*) ;
 int FUNC_3 (int ,char*) ;
 struct metapage* FUNC_4 (TYPE_1__*,int,int ,int ) ;
 int FUNC_5 (struct metapage*) ;

__attribute__((used)) static int FUNC_6(struct bmap * VAR_4, int VAR_5, int VAR_6, s64 * VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 s64 VAR_11, VAR_12;
 struct dmapctl *VAR_13;
 int VAR_14;
 struct metapage *VAR_15;






 for (VAR_10 = VAR_6, VAR_11 = *VAR_7; VAR_10 >= 0; VAR_10--) {



  VAR_12 = FUNC_0(VAR_11, VAR_4->db_l2nbperpage, VAR_10);
  VAR_15 = FUNC_4(VAR_4->db_ipbmap, VAR_12, VAR_3, 0);
  if (VAR_15 == ((void*)0))
   return -VAR_1;
  VAR_13 = (struct dmapctl *) VAR_15->data;
  VAR_14 = VAR_13->budmin;

  if (VAR_13->leafidx != FUNC_1(VAR_0)) {
   FUNC_3(VAR_4->db_ipbmap->i_sb,
      "dbFindCtl: Corrupt dmapctl page");
   FUNC_5(VAR_15);
   return -VAR_1;
  }






  VAR_8 = FUNC_2((dmtree_t *) VAR_13, VAR_5, &VAR_9);



  FUNC_5(VAR_15);



  if (VAR_8) {
   if (VAR_10 != VAR_6) {
    FUNC_3(VAR_4->db_ipbmap->i_sb,
       "dbFindCtl: dmap inconsistent");
    return -VAR_1;
   }
   return -VAR_2;
  }





  VAR_11 += (((s64) VAR_9) << VAR_14);






  if (VAR_5 >= VAR_14)
   break;
 }

 *VAR_7 = VAR_11;
 return (0);
}
