
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfs_drt_clustermap {int scm_lastclean; int scm_iskips; int scm_buckets; int scm_modulus; } ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vfs_drt_clustermap*) ;
 int FUNC_1 (struct vfs_drt_clustermap*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_2(void **VAR_3, int VAR_4)
{
 struct vfs_drt_clustermap *VAR_5;


 if ((VAR_3 == ((void*)0)) || (*VAR_3 == ((void*)0)))
  return(VAR_1);
 VAR_5 = *VAR_3;

 switch (VAR_4) {
 case 0:

  FUNC_1(VAR_5, VAR_0,
         VAR_5->scm_modulus,
         VAR_5->scm_buckets,
         VAR_5->scm_lastclean,
         VAR_5->scm_iskips);

  FUNC_0(VAR_5);
  *VAR_3 = ((void*)0);
         break;

 case 1:
         VAR_5->scm_lastclean = 0;
         break;
 }
 return(VAR_2);
}
