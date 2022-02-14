
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bfa_s {int dummy; } ;
struct bfa_fcpim_s {int path_tov; } ;


 struct bfa_fcpim_s* FUNC_0 (struct bfa_s*) ;
 int VAR_0 ;

void
FUNC_1(struct bfa_s *VAR_1, u16 VAR_2)
{
 struct bfa_fcpim_s *VAR_3 = FUNC_0(VAR_1);

 VAR_3->path_tov = VAR_2 * 1000;
 if (VAR_3->path_tov > VAR_0)
  VAR_3->path_tov = VAR_0;
}
