
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vnop_mknod_args {int * a_vpp; TYPE_1__* a_vap; int a_cnp; int a_dvp; int a_context; } ;
struct nfsmount {int nm_vers; } ;
typedef int * nfsnode_t ;
struct TYPE_3__ {int va_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;




 int FUNC_2 (int ) ;
 struct nfsmount* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,TYPE_1__*,int ,int *,int **) ;
 scalar_t__ FUNC_5 (struct nfsmount*) ;
 int VAR_3 ;
 int FUNC_6 (int,int ) ;

int
FUNC_7(
 struct vnop_mknod_args *VAR_4)







{
 nfsnode_t VAR_5 = ((void*)0);
 struct nfsmount *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_4->a_dvp);
 if (FUNC_5(VAR_6))
  return (VAR_2);

 if (!FUNC_1(VAR_4->a_vap, VAR_3))
  return (VAR_0);
 switch (VAR_4->a_vap->va_type) {
 case 131:
 case 130:
 case 129:
 case 128:
  break;
 default:
  return (VAR_1);
 }

 VAR_7 = FUNC_4(VAR_4->a_context, FUNC_2(VAR_4->a_dvp), VAR_4->a_cnp, VAR_4->a_vap,
   FUNC_6(VAR_4->a_vap->va_type, VAR_6->nm_vers), ((void*)0), &VAR_5);
 if (!VAR_7)
  *VAR_4->a_vpp = FUNC_0(VAR_5);
 return (VAR_7);
}
