
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
typedef int u_int ;
struct proc {int dummy; } ;
struct gfp_crarg {scalar_t__ gca_guard; int gca_attrs; } ;
struct fileproc {int dummy; } ;
typedef scalar_t__ guardid_t ;
typedef int crarg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gfp_crarg*,int) ;
 int FUNC_1 (struct proc*,struct fileproc**,int*,int ,int ,struct gfp_crarg*) ;
 int VAR_3 ;

int
FUNC_2(struct proc *VAR_4, struct fileproc **VAR_5, int *VAR_6,
    vfs_context_t VAR_7, const guardid_t *VAR_8, u_int VAR_9)
{
 struct gfp_crarg VAR_10;

 if (((VAR_9 & VAR_2) != VAR_2) ||
     ((VAR_9 & ~VAR_1) != 0) || (*VAR_8 == 0))
  return (VAR_0);

 FUNC_0(&VAR_10, sizeof (VAR_10));
 VAR_10.gca_guard = *VAR_8;
 VAR_10.gca_attrs = VAR_9;

 return (FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_3,
     &VAR_10));
}
