
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int ;
struct vfs_drt_clustermap {int dummy; } ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vfs_drt_clustermap*,int,int) ;
 int FUNC_2 (struct vfs_drt_clustermap*,int) ;
 int FUNC_3 (struct vfs_drt_clustermap*,int,int) ;
 int FUNC_4 (struct vfs_drt_clustermap*,int,int) ;
 scalar_t__ FUNC_5 (struct vfs_drt_clustermap*,int,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (char*,struct vfs_drt_clustermap*,int,int) ;
 scalar_t__ FUNC_9 (struct vfs_drt_clustermap**) ;
 scalar_t__ FUNC_10 (struct vfs_drt_clustermap**,int,int*,int ) ;
 int FUNC_11 (struct vfs_drt_clustermap*,int,int,int,int,int ) ;

__attribute__((used)) static kern_return_t
FUNC_12(
 void **VAR_6,
 u_int64_t VAR_7,
 u_int VAR_8,
 u_int *VAR_9,
 int VAR_10)
{
 struct vfs_drt_clustermap *VAR_11, **VAR_12;
 kern_return_t VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_12 = (struct vfs_drt_clustermap **)VAR_6;
 VAR_11 = *VAR_12;

 FUNC_11(VAR_11, VAR_3 | VAR_1, (int)VAR_7, (int)VAR_8, VAR_10, 0);

 if (VAR_9 != ((void*)0))
         *VAR_9 = 0;


 if (VAR_11 == ((void*)0)) {

  if (!VAR_10) {
   FUNC_11(VAR_11, VAR_3 | VAR_0, 1, 0, 0, 0);
   return(VAR_4);
  }
  VAR_13 = FUNC_9(VAR_12);
  if (VAR_13 != VAR_4) {
   FUNC_11(VAR_11, VAR_3 | VAR_0, 2, 0, 0, 0);
   return(VAR_13);
  }
 }
 VAR_18 = 0;




 while (VAR_8 > 0) {






  VAR_13 = FUNC_10(VAR_12, VAR_7, &VAR_15, 0);
  VAR_11 = *VAR_12;

  if (VAR_13 != VAR_4) {
          if (VAR_9 != ((void*)0))
           *VAR_9 = VAR_18;
   FUNC_11(VAR_11, VAR_3 | VAR_0, 3, (int)VAR_8, 0, 0);

   return(VAR_13);
  }





  VAR_16 = (VAR_7 - FUNC_0(VAR_7)) / VAR_5;
  VAR_17 = FUNC_7((VAR_8 / VAR_5), (VAR_2 - VAR_16));




  VAR_19 = FUNC_2(VAR_11, VAR_15);
  for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++) {
   if (VAR_10) {
    if (!FUNC_5(VAR_11, VAR_15, VAR_16 + VAR_14)) {
            if (VAR_19 >= VAR_2)
             FUNC_8("ecount >= DRT_BITVECTOR_PAGES, cmap = %p, index = %d, bit = %d", VAR_11, VAR_15, VAR_16+VAR_14);
     FUNC_3(VAR_11, VAR_15, VAR_16 + VAR_14);
     VAR_19++;
     VAR_18++;
    }
   } else {
    if (FUNC_5(VAR_11, VAR_15, VAR_16 + VAR_14)) {
            if (VAR_19 <= 0)
             FUNC_8("ecount <= 0, cmap = %p, index = %d, bit = %d", VAR_11, VAR_15, VAR_16+VAR_14);
            FUNC_6(VAR_19 > 0);
     FUNC_1(VAR_11, VAR_15, VAR_16 + VAR_14);
     VAR_19--;
     VAR_18++;
    }
   }
  }
  FUNC_4(VAR_11, VAR_15, VAR_19);

  VAR_7 += VAR_17 * VAR_5;
  VAR_8 -= VAR_17 * VAR_5;
 }
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_18;

 FUNC_11(VAR_11, VAR_3 | VAR_0, 0, VAR_18, 0, 0);

 return(VAR_4);
}
