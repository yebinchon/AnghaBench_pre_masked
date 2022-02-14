
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_netobj {int len; int data; } ;
struct TYPE_2__ {int len; int data; } ;
struct nfs4_stateowner {int so_ref; TYPE_1__ so_owner; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct nfs4_stateowner* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct nfs4_stateowner*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline struct nfs4_stateowner *
FUNC_5(struct xdr_netobj *VAR_2)
{
 struct nfs4_stateowner *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_1, VAR_0))) {
  if ((VAR_3->so_owner.data = FUNC_0(VAR_2->len, VAR_0))) {
   FUNC_4(VAR_3->so_owner.data, VAR_2->data, VAR_2->len);
   VAR_3->so_owner.len = VAR_2->len;
   FUNC_3(&VAR_3->so_ref);
   return VAR_3;
  }
  FUNC_2(VAR_1, VAR_3);
 }
 return ((void*)0);
}
