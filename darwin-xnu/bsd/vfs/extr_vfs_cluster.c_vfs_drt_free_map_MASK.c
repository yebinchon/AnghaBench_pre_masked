
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct vfs_drt_clustermap {scalar_t__ scm_modulus; } ;
typedef int kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_1(struct vfs_drt_clustermap *VAR_5)
{
 FUNC_0(VAR_4, (vm_offset_t)VAR_5,
    (VAR_5->scm_modulus == VAR_0) ? VAR_2 : VAR_1);
 return(VAR_3);
}
