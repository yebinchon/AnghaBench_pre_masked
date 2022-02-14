
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_file_lock {int nfl_flags; scalar_t__ nfl_owner; scalar_t__ nfl_type; scalar_t__ nfl_start; scalar_t__ nfl_end; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(struct nfs_file_lock *VAR_3, struct nfs_file_lock *VAR_4, int *VAR_5)
{

 if ((VAR_3->nfl_flags & VAR_1) || (VAR_4->nfl_flags & VAR_1))
  return (0);

 if ((VAR_3->nfl_owner == VAR_4->nfl_owner) &&
     ((VAR_3->nfl_flags & VAR_2) == (VAR_4->nfl_flags & VAR_2))) {
  if (VAR_5 && (VAR_3->nfl_type != VAR_4->nfl_type) &&
      (VAR_3->nfl_start > VAR_4->nfl_start) &&
      (VAR_3->nfl_end < VAR_4->nfl_end))
   *VAR_5 = 1;
  return (0);
 }

 if ((VAR_3->nfl_start > VAR_4->nfl_end) || (VAR_3->nfl_end < VAR_4->nfl_start))
  return (0);

 if ((VAR_3->nfl_type != VAR_0) && (VAR_4->nfl_type != VAR_0))
  return (0);

 return (1);
}
