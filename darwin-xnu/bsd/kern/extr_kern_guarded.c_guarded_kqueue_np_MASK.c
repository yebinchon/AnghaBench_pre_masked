
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct guarded_kqueue_np_args {int guardflags; int guard; } ;
struct gfp_crarg {int gca_attrs; scalar_t__ gca_guard; } ;
typedef int proc_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__*,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct gfp_crarg*,int *) ;

int
FUNC_2(proc_t VAR_4, struct guarded_kqueue_np_args *VAR_5, int32_t *VAR_6)
{
 if (((VAR_5->guardflags & VAR_2) != VAR_2) ||
     ((VAR_5->guardflags & ~VAR_1) != 0))
  return (VAR_0);

 int VAR_7;
 struct gfp_crarg VAR_8 = {
  .gca_attrs = VAR_5->guardflags
 };

 if ((VAR_7 = FUNC_0(VAR_5->guard,
     &(VAR_8.gca_guard), sizeof (VAR_8.gca_guard))) != 0)
  return (VAR_7);

 if (VAR_8.gca_guard == 0)
  return (VAR_0);

 return (FUNC_1(VAR_4, VAR_3, &VAR_8, VAR_6));
}
