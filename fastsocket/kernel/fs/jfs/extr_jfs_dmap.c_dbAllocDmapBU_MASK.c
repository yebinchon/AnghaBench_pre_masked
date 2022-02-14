
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmaptree {scalar_t__* stree; } ;
struct dmap {int nfree; int * wmap; int tree; } ;
struct bmap {int db_agl2size; int db_maxag; int* db_agfree; int db_nfree; } ;
typedef scalar_t__ s8 ;
typedef int s64 ;


 int FUNC_0 (struct bmap*) ;
 int FUNC_1 (struct bmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bmap*,int,scalar_t__,int,int ) ;
 int FUNC_5 (struct bmap*,struct dmap*,int,int) ;
 int FUNC_6 (struct dmap*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct bmap * VAR_6, struct dmap * VAR_7, s64 VAR_8,
    int VAR_9)
{
 int VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 s8 VAR_18, *VAR_19;
 struct dmaptree *VAR_20 = (struct dmaptree *) & VAR_7->tree;




 VAR_18 = VAR_20->stree[VAR_5];


 VAR_19 = VAR_20->stree + VAR_3;




 VAR_11 = VAR_8 & (VAR_0 - 1);
 VAR_12 = VAR_11 >> VAR_2;


 FUNC_2(VAR_11 + VAR_9 <= VAR_0);
 for (VAR_13 = VAR_9; VAR_13 > 0; VAR_13 -= VAR_14, VAR_11 += VAR_14) {



  VAR_16 = VAR_11 & (VAR_1 - 1);
  VAR_14 = FUNC_9(VAR_13, VAR_1 - VAR_16);



  if (VAR_14 < VAR_1) {



   VAR_7->wmap[VAR_12] |= FUNC_3(VAR_4 << (VAR_1 - VAR_14)
            >> VAR_16);

   VAR_12++;
  } else {





   VAR_15 = VAR_13 >> VAR_2;
   FUNC_8(&VAR_7->wmap[VAR_12], (int) VAR_4, VAR_15 * 4);


   VAR_14 = VAR_15 << VAR_2;
   VAR_12 += VAR_15;
  }
 }


 FUNC_7(&VAR_7->nfree, -VAR_9);


 FUNC_6(VAR_7);

 FUNC_0(VAR_6);





 VAR_17 = VAR_8 >> VAR_6->db_agl2size;
 if (VAR_17 > VAR_6->db_maxag)
  VAR_6->db_maxag = VAR_17;


 VAR_6->db_agfree[VAR_17] -= VAR_9;
 VAR_6->db_nfree -= VAR_9;

 FUNC_1(VAR_6);


 if (VAR_20->stree[VAR_5] == VAR_18)
  return (0);





 if ((VAR_10 = FUNC_4(VAR_6, VAR_8, VAR_20->stree[VAR_5], 1, 0)))
  FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9);

 return (VAR_10);
}
