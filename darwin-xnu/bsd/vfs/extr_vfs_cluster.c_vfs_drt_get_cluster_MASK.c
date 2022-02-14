
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct vfs_drt_clustermap {int scm_modulus; int scm_lastclean; int scm_buckets; int scm_iskips; } ;
typedef scalar_t__ off_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vfs_drt_clustermap*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct vfs_drt_clustermap*,int) ;
 scalar_t__ FUNC_2 (struct vfs_drt_clustermap*,int) ;
 scalar_t__ FUNC_3 (struct vfs_drt_clustermap*,int,int) ;
 scalar_t__ FUNC_4 (struct vfs_drt_clustermap*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,struct vfs_drt_clustermap*,int,scalar_t__) ;
 int FUNC_6 (void**,scalar_t__,int,int *,int ) ;
 int FUNC_7 (struct vfs_drt_clustermap*) ;
 int FUNC_8 (struct vfs_drt_clustermap*,int ,int,int,int,int ) ;

__attribute__((used)) static kern_return_t
FUNC_9(void **VAR_6, off_t *VAR_7, u_int *VAR_8)
{
 struct vfs_drt_clustermap *VAR_9;
 u_int64_t VAR_10;
 u_int VAR_11;
 u_int32_t VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;


 if ((VAR_6 == ((void*)0)) || (*VAR_6 == ((void*)0)))
  return(VAR_3);
 VAR_9 = *VAR_6;


 for (VAR_10 = 0, VAR_12 = 0; VAR_12 < VAR_9->scm_modulus; VAR_10 += (VAR_0 * VAR_5), VAR_12++) {
         VAR_13 = FUNC_0(VAR_9, VAR_10);

         if (FUNC_4(VAR_9, VAR_13) || (FUNC_2(VAR_9, VAR_13) == 0))
   continue;


  VAR_15 = -1;

  for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
          if (FUNC_3(VAR_9, VAR_13, VAR_14)) {
           VAR_15 = VAR_14;
    break;
   }
  }
  if (VAR_15 == -1) {

          FUNC_5("vfs_drt: entry summary count > 0 but no bits set in map, cmap = %p, index = %d, count = %lld",
         VAR_9, VAR_13, FUNC_2(VAR_9, VAR_13));
  }
  for (VAR_16 = 0; VAR_14 < VAR_0; VAR_14++, VAR_16++) {
   if (!FUNC_3(VAR_9, VAR_13, VAR_14))
           break;
  }


  VAR_10 = FUNC_1(VAR_9, VAR_13) + (VAR_5 * VAR_15);
  VAR_11 = VAR_16 * VAR_5;
  FUNC_6(VAR_6, VAR_10, VAR_11, ((void*)0), 0);
  VAR_9->scm_lastclean = VAR_13;


  *VAR_7 = (off_t)VAR_10;
  *VAR_8 = VAR_11;

  FUNC_8(VAR_9, VAR_1, (int)VAR_10, (int)VAR_11, 0, 0);
  return(VAR_4);
 }





 FUNC_8(VAR_9, VAR_2,
        VAR_9->scm_modulus,
        VAR_9->scm_buckets,
        VAR_9->scm_lastclean,
        VAR_9->scm_iskips);

 FUNC_7(VAR_9);
 *VAR_6 = ((void*)0);

 return(VAR_3);
}
