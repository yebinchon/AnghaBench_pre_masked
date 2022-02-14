
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int f_flags; } ;
struct guarded_fileproc {int gf_attrs; int gf_guard; int gf_magic; TYPE_1__ gf_fileproc; } ;
struct gfp_crarg {int gca_attrs; int gca_guard; } ;
struct fileproc {int dummy; } ;


 int VAR_0 ;
 struct fileproc* FUNC_0 (struct guarded_fileproc*) ;
 int VAR_1 ;
 int FUNC_1 (struct guarded_fileproc*,int) ;
 struct guarded_fileproc* FUNC_2 (int) ;

__attribute__((used)) static struct fileproc *
FUNC_3(void *VAR_2)
{
 struct gfp_crarg *VAR_3 = VAR_2;
 struct guarded_fileproc *VAR_4;

 if ((VAR_4 = FUNC_2(sizeof (*VAR_4))) == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_4, sizeof (*VAR_4));
 VAR_4->gf_fileproc.f_flags = VAR_0;
 VAR_4->gf_magic = VAR_1;
 VAR_4->gf_guard = VAR_3->gca_guard;
 VAR_4->gf_attrs = VAR_3->gca_attrs;

 return (FUNC_0(VAR_4));
}
