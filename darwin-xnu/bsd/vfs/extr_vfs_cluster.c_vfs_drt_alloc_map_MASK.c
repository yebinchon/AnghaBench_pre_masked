
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct vfs_drt_clustermap {int scm_modulus; scalar_t__ scm_iskips; scalar_t__ scm_lastclean; scalar_t__ scm_buckets; int scm_magic; } ;
typedef scalar_t__ kern_return_t ;


 int FUNC_0 (struct vfs_drt_clustermap*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vfs_drt_clustermap*,int) ;
 int FUNC_2 (struct vfs_drt_clustermap*,int,struct vfs_drt_clustermap*,int) ;
 int FUNC_3 (struct vfs_drt_clustermap*,int) ;
 scalar_t__ FUNC_4 (struct vfs_drt_clustermap*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (struct vfs_drt_clustermap*,int) ;
 int FUNC_6 (struct vfs_drt_clustermap*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int ,int *,int ,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct vfs_drt_clustermap*) ;
 scalar_t__ FUNC_10 (struct vfs_drt_clustermap**,int ,int*,int) ;
 int FUNC_11 (struct vfs_drt_clustermap*,int ,int,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static kern_return_t
FUNC_12(struct vfs_drt_clustermap **VAR_12)
{
 struct vfs_drt_clustermap *VAR_13, *VAR_14;
 kern_return_t VAR_15;
 u_int64_t VAR_16;
 u_int32_t VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;

 VAR_14 = ((void*)0);
 if (VAR_12 != ((void*)0))
  VAR_14 = *VAR_12;




 if (VAR_14 == ((void*)0)) {
  VAR_18 = VAR_4;
 } else {

  VAR_19 = 0;
  for (VAR_17 = 0; VAR_17 < VAR_14->scm_modulus; VAR_17++) {
   if (!FUNC_5(VAR_14, VAR_17) &&
       (FUNC_4(VAR_14, VAR_17) != 0))
    VAR_19++;
  }




  if (VAR_14->scm_modulus == VAR_4) {




   if ((VAR_19 > (VAR_4 - 5)) &&
       (VAR_11 >= VAR_2)) {
    VAR_18 = VAR_3;
   } else {
    VAR_18 = VAR_4;
   }
  } else {

   VAR_18 = VAR_3;






   if (VAR_19 >= VAR_3)
    return(VAR_8);
  }
 }





 VAR_15 = FUNC_7(VAR_10, (vm_offset_t *)&VAR_13,
     (VAR_18 == VAR_4) ? VAR_7 : VAR_5, VAR_9);
 if (VAR_15 != VAR_8)
  return(VAR_15);
 VAR_13->scm_magic = VAR_6;
 VAR_13->scm_modulus = VAR_18;
 VAR_13->scm_buckets = 0;
 VAR_13->scm_lastclean = 0;
 VAR_13->scm_iskips = 0;
 for (VAR_17 = 0; VAR_17 < VAR_13->scm_modulus; VAR_17++) {
         FUNC_1(VAR_13, VAR_17);
  FUNC_6(VAR_13, VAR_17);
  FUNC_0(VAR_13, VAR_17);
 }




 VAR_21 = 0;
 if (VAR_14 != ((void*)0)) {
  for (VAR_17 = 0; VAR_17 < VAR_14->scm_modulus; VAR_17++) {

   if (FUNC_5(VAR_14, VAR_17) ||
       (FUNC_4(VAR_14, VAR_17) == 0))
    continue;

   VAR_16 = FUNC_3(VAR_14, VAR_17);
   VAR_15 = FUNC_10(&VAR_13, VAR_16, &VAR_20, 1);
   if (VAR_15 != VAR_8) {

    FUNC_8("vfs_drt: new cluster map mysteriously too small");
    VAR_20 = 0;
   }

   FUNC_2(VAR_14, VAR_17, VAR_13, VAR_20);
   VAR_21++;
  }
 }


 FUNC_11(VAR_13, VAR_0, VAR_21, 0, 0, 0);






 *VAR_12 = VAR_13;
 if (VAR_14 != ((void*)0)) {

  FUNC_11(VAR_14, VAR_1,
         VAR_14->scm_modulus,
         VAR_14->scm_buckets,
         VAR_14->scm_lastclean,
         VAR_14->scm_iskips);

  FUNC_9(VAR_14);
 }
 return(VAR_8);
}
