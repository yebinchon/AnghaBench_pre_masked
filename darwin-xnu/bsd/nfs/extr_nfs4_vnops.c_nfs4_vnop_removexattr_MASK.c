
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnop_removexattr_args {int a_context; int a_name; int a_vp; } ;
struct TYPE_2__ {int nfsa_flags; } ;
struct nfsmount {TYPE_1__ nm_fsattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct nfsmount* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_3 (struct nfsmount*) ;

int
FUNC_4(
 struct vnop_removexattr_args *VAR_5)






{
 struct nfsmount *VAR_6 = FUNC_1(VAR_5->a_vp);
 int VAR_7;

 if (FUNC_3(VAR_6))
  return (VAR_3);
 if (!(VAR_6->nm_fsattr.nfsa_flags & VAR_4))
  return (VAR_2);

 VAR_7 = FUNC_2(FUNC_0(VAR_5->a_vp), ((void*)0), VAR_5->a_name, VAR_5->a_context);
 if (VAR_7 == VAR_1)
  VAR_7 = VAR_0;
 return (VAR_7);
}
