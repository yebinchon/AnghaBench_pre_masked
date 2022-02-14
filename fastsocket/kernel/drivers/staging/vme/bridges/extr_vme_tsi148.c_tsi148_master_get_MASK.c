
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vme_width_t ;
typedef int vme_cycle_t ;
typedef int vme_address_t ;
struct vme_master_resource {int lock; } ;


 int FUNC_0 (struct vme_master_resource*,int*,unsigned long long*,unsigned long long*,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3( struct vme_master_resource *VAR_0, int *VAR_1,
 unsigned long long *VAR_2, unsigned long long *VAR_3,
 vme_address_t *VAR_4, vme_cycle_t *VAR_5, vme_width_t *VAR_6)
{
 int VAR_7;

 FUNC_1(&(VAR_0->lock));

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
  VAR_5, VAR_6);

 FUNC_2(&(VAR_0->lock));

 return VAR_7;
}
