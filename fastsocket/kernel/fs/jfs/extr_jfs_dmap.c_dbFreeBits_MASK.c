
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dmap {int nfree; int * wmap; int tree; } ;
struct bmap {int db_agl2size; int db_nfree; int* db_agfree; int db_agsize; int db_maxag; int db_numag; int db_mapsize; size_t db_agpref; } ;
typedef int s64 ;
typedef int dmtree_t ;


 int FUNC_0 (struct bmap*) ;
 int FUNC_1 (struct bmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct bmap * VAR_6, struct dmap * VAR_7, s64 VAR_8,
         int VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 dmtree_t *VAR_18 = (dmtree_t *) & VAR_7->tree;
 int VAR_19 = 0;
 int VAR_20;




 VAR_10 = VAR_8 & (VAR_0 - 1);
 VAR_11 = VAR_10 >> VAR_3;



 FUNC_5(VAR_10 + VAR_9 <= VAR_0);
 for (VAR_12 = VAR_9; VAR_12 > 0; VAR_12 -= VAR_13, VAR_10 += VAR_13) {



  VAR_15 = VAR_10 & (VAR_2 - 1);
  VAR_13 = FUNC_11(VAR_12, VAR_2 - VAR_15);



  if (VAR_13 < VAR_2) {



   VAR_7->wmap[VAR_11] &=
       FUNC_6(~(VAR_5 << (VAR_2 - VAR_13)
       >> VAR_15));



   VAR_19 = FUNC_7(VAR_18, VAR_11,
        FUNC_8((u8 *) & VAR_7->wmap[VAR_11]));
   if (VAR_19)
    return VAR_19;

   VAR_11 += 1;
  } else {




   VAR_14 = VAR_12 >> VAR_3;
   FUNC_10(&VAR_7->wmap[VAR_11], 0, VAR_14 * 4);



   VAR_13 = VAR_14 << VAR_3;




   for (; VAR_14 > 0; VAR_14 -= VAR_16) {





    VAR_20 =
        FUNC_11(FUNC_3
     (VAR_11, VAR_4, VAR_1),
     FUNC_4(VAR_14));



    VAR_19 = FUNC_7(VAR_18, VAR_11, VAR_20);
    if (VAR_19)
     return VAR_19;



    VAR_16 = FUNC_2(VAR_20, VAR_1);
    VAR_11 += VAR_16;
   }
  }
 }



 FUNC_9(&VAR_7->nfree, VAR_9);

 FUNC_0(VAR_6);




 VAR_17 = VAR_8 >> VAR_6->db_agl2size;
 VAR_6->db_nfree += VAR_9;
 VAR_6->db_agfree[VAR_17] += VAR_9;






 if ((VAR_6->db_agfree[VAR_17] == VAR_6->db_agsize && VAR_17 == VAR_6->db_maxag) ||
     (VAR_17 == VAR_6->db_numag - 1 &&
      VAR_6->db_agfree[VAR_17] == (VAR_6-> db_mapsize & (VAR_0 - 1)))) {
  while (VAR_6->db_maxag > 0) {
   VAR_6->db_maxag -= 1;
   if (VAR_6->db_agfree[VAR_6->db_maxag] !=
       VAR_6->db_agsize)
    break;
  }





  if (VAR_6->db_agpref > VAR_6->db_maxag)
   VAR_6->db_agpref = VAR_6->db_maxag;
 }

 FUNC_1(VAR_6);

 return 0;
}
