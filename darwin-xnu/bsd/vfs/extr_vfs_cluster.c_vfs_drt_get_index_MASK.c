
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
typedef scalar_t__ u_int32_t ;
struct vfs_drt_clustermap {scalar_t__ scm_modulus; scalar_t__ scm_lastclean; int scm_iskips; int scm_buckets; } ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct vfs_drt_clustermap*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct vfs_drt_clustermap*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct vfs_drt_clustermap*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct vfs_drt_clustermap*,scalar_t__) ;
 int FUNC_5 (struct vfs_drt_clustermap*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct vfs_drt_clustermap*,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (struct vfs_drt_clustermap*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (struct vfs_drt_clustermap**) ;
 scalar_t__ FUNC_9 (struct vfs_drt_clustermap*,scalar_t__,int*) ;
 int FUNC_10 (struct vfs_drt_clustermap*,int ,int,scalar_t__,int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_11(struct vfs_drt_clustermap **VAR_3, u_int64_t VAR_4, int *VAR_5, int VAR_6)
{
 struct vfs_drt_clustermap *VAR_7;
 kern_return_t VAR_8;
 u_int32_t VAR_9;
 u_int32_t VAR_10;

 VAR_7 = *VAR_3;


 VAR_8 = FUNC_9(VAR_7, VAR_4, VAR_5);
 if (VAR_8 == VAR_2)
  return(VAR_8);


 VAR_4 = FUNC_0(VAR_4);
 VAR_9 = FUNC_2(VAR_7, VAR_4);


 for (VAR_10 = 0; VAR_10 < VAR_7->scm_modulus; VAR_10++) {

  if (FUNC_7(VAR_7, VAR_9) || FUNC_3(VAR_7,VAR_9) == 0) {
   VAR_7->scm_buckets++;
   if (VAR_9 < VAR_7->scm_lastclean)
    VAR_7->scm_lastclean = VAR_9;
   FUNC_5(VAR_7, VAR_9, VAR_4);
   FUNC_6(VAR_7, VAR_9, 0);
   FUNC_1(VAR_7, VAR_9);
   *VAR_5 = VAR_9;
   FUNC_10(VAR_7, VAR_0, (int)VAR_4, VAR_10, 0, 0);
   return(VAR_2);
  }
  VAR_7->scm_iskips += VAR_10;
  VAR_9 = FUNC_4(VAR_7, VAR_9);
 }





 if (VAR_6)
  return(VAR_1);
 VAR_8 = FUNC_8(VAR_3);
 if (VAR_8 == VAR_2) {

  VAR_8 = FUNC_11(VAR_3, VAR_4, VAR_5, 1);
 }
 return(VAR_8);
}
