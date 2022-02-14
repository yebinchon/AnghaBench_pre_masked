
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_state {int dummy; } ;
struct TYPE_2__ {int fmode; scalar_t__ open_flags; } ;
struct nfs4_opendata {int c_res; int o_res; TYPE_1__ o_arg; } ;
typedef int fmode_t ;


 scalar_t__ FUNC_0 (struct nfs4_state*) ;
 int FUNC_1 (struct nfs4_state*) ;
 int FUNC_2 (struct nfs4_opendata*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct nfs4_state*,int ) ;
 int FUNC_5 (struct nfs4_opendata*) ;
 struct nfs4_state* FUNC_6 (struct nfs4_opendata*) ;

__attribute__((used)) static int FUNC_7(struct nfs4_opendata *VAR_0, fmode_t VAR_1, struct nfs4_state **VAR_2)
{
 struct nfs4_state *VAR_3;
 int VAR_4;

 VAR_0->o_arg.open_flags = 0;
 VAR_0->o_arg.fmode = VAR_1;
 FUNC_3(&VAR_0->o_res, 0, sizeof(VAR_0->o_res));
 FUNC_3(&VAR_0->c_res, 0, sizeof(VAR_0->c_res));
 FUNC_5(VAR_0);
 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4 != 0)
  return VAR_4;
 VAR_3 = FUNC_6(VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 FUNC_4(VAR_3, VAR_1);
 *VAR_2 = VAR_3;
 return 0;
}
