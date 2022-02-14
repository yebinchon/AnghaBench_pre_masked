
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__* stree; } ;
struct dmap {int nfree; int * wmap; TYPE_1__ tree; } ;
struct bmap {int db_agl2size; int db_maxag; int* db_agfree; int db_nfree; TYPE_2__* db_ipbmap; } ;
typedef scalar_t__ s8 ;
typedef int s64 ;
typedef int dmtree_t ;
struct TYPE_4__ {int i_sb; } ;


 int FUNC_0 (struct bmap*) ;
 int FUNC_1 (struct bmap*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static void FUNC_12(struct bmap * VAR_7, struct dmap * VAR_8, s64 VAR_9,
   int VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 dmtree_t *VAR_19 = (dmtree_t *) & VAR_8->tree;
 int VAR_20;
 s8 *VAR_21;


 VAR_21 = VAR_8->tree.stree + VAR_4;




 VAR_11 = VAR_9 & (VAR_0 - 1);
 VAR_12 = VAR_11 >> VAR_3;


 FUNC_4(VAR_11 + VAR_10 <= VAR_0);
 for (VAR_13 = VAR_10; VAR_13 > 0; VAR_13 -= VAR_14, VAR_11 += VAR_14) {



  VAR_16 = VAR_11 & (VAR_2 - 1);
  VAR_14 = FUNC_11(VAR_13, VAR_2 - VAR_16);



  if (VAR_14 < VAR_2) {



   VAR_8->wmap[VAR_12] |= FUNC_5(VAR_6 << (VAR_2 - VAR_14)
            >> VAR_16);






   FUNC_7(VAR_19, VAR_12, VAR_1,
    FUNC_6((u8 *) & VAR_8->wmap[VAR_12]));

   VAR_12 += 1;
  } else {





   VAR_15 = VAR_13 >> VAR_3;
   FUNC_10(&VAR_8->wmap[VAR_12], (int) VAR_6, VAR_15 * 4);



   VAR_14 = VAR_15 << VAR_3;




   for (; VAR_15 > 0; VAR_15 -= VAR_17) {
    if (VAR_21[VAR_12] < VAR_1) {
     FUNC_8(VAR_7->db_ipbmap->i_sb,
        "dbAllocBits: leaf page "
        "corrupt");
     break;
    }






    VAR_20 = FUNC_11((int)VAR_21[VAR_12], FUNC_3(VAR_15));







    FUNC_7(VAR_19, VAR_12, VAR_20, VAR_5);


    VAR_17 = FUNC_2(VAR_20, VAR_1);
    VAR_12 += VAR_17;
   }
  }
 }


 FUNC_9(&VAR_8->nfree, -VAR_10);

 FUNC_0(VAR_7);





 VAR_18 = VAR_9 >> VAR_7->db_agl2size;
 if (VAR_18 > VAR_7->db_maxag)
  VAR_7->db_maxag = VAR_18;


 VAR_7->db_agfree[VAR_18] -= VAR_10;
 VAR_7->db_nfree -= VAR_10;

 FUNC_1(VAR_7);
}
