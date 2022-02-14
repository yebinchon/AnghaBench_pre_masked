
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * dir_attr; int * fattr; int * fh; } ;
struct TYPE_3__ {TYPE_2__* rpc_resp; int * rpc_argp; } ;
struct nfs3_createdata {TYPE_2__ res; int dir_attr; int fattr; int fh; TYPE_1__ msg; int arg; } ;


 int VAR_0 ;
 struct nfs3_createdata* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct nfs3_createdata *FUNC_2(void)
{
 struct nfs3_createdata *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);
 if (VAR_1 != ((void*)0)) {
  VAR_1->msg.rpc_argp = &VAR_1->arg;
  VAR_1->msg.rpc_resp = &VAR_1->res;
  VAR_1->res.fh = &VAR_1->fh;
  VAR_1->res.fattr = &VAR_1->fattr;
  VAR_1->res.dir_attr = &VAR_1->dir_attr;
  FUNC_1(VAR_1->res.fattr);
  FUNC_1(VAR_1->res.dir_attr);
 }
 return VAR_1;
}
