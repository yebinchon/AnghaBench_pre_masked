
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int comp; } ;
struct bfa_fcs_s {struct bfad_s* bfad; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct bfa_fcs_s *VAR_1 = VAR_0;
 struct bfad_s *VAR_2 = VAR_1->bfad;

 FUNC_0(&VAR_2->comp);
}
