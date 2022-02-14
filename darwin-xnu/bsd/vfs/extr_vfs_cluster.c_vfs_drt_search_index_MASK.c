
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
typedef scalar_t__ u_int32_t ;
struct vfs_drt_clustermap {scalar_t__ scm_modulus; } ;
typedef int kern_return_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct vfs_drt_clustermap*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct vfs_drt_clustermap*,int) ;
 int FUNC_3 (struct vfs_drt_clustermap*,int) ;
 scalar_t__ FUNC_4 (struct vfs_drt_clustermap*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static kern_return_t
FUNC_5(struct vfs_drt_clustermap *VAR_2, u_int64_t VAR_3, int *VAR_4)
{
 int VAR_5;
 u_int32_t VAR_6;

 VAR_3 = FUNC_0(VAR_3);
 VAR_5 = FUNC_1(VAR_2, VAR_3);


 for (VAR_6 = 0; VAR_6 < VAR_2->scm_modulus; VAR_6++) {




  if (FUNC_4(VAR_2, VAR_5))
   break;




  if (FUNC_2(VAR_2, VAR_5) == VAR_3) {
   *VAR_4 = VAR_5;
   return(VAR_1);
  }




  VAR_5 = FUNC_3(VAR_2, VAR_5);
 }



 return(VAR_0);
}
