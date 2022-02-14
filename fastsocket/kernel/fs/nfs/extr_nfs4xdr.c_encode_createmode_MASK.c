
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int verifier; struct iattr* attrs; } ;
struct nfs_openargs {int createmode; int server; TYPE_1__ u; } ;
struct iattr {int ia_valid; } ;
typedef int __be32 ;






 int FUNC_0 (int const) ;
 int FUNC_1 (struct xdr_stream*,struct iattr*,int ) ;
 int FUNC_2 (struct xdr_stream*,int *) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static inline void FUNC_4(struct xdr_stream *VAR_0, const struct nfs_openargs *VAR_1)
{
 struct iattr VAR_2;
 __be32 *VAR_3;

 VAR_3 = FUNC_3(VAR_0, 4);
 switch(VAR_1->createmode) {
 case 128:
  *VAR_3 = FUNC_0(128);
  FUNC_1(VAR_0, VAR_1->u.attrs, VAR_1->server);
  break;
 case 129:
  *VAR_3 = FUNC_0(129);
  FUNC_1(VAR_0, VAR_1->u.attrs, VAR_1->server);
  break;
 case 131:
  *VAR_3 = FUNC_0(131);
  FUNC_2(VAR_0, &VAR_1->u.verifier);
  break;
 case 130:
  *VAR_3 = FUNC_0(130);
  FUNC_2(VAR_0, &VAR_1->u.verifier);
  VAR_2.ia_valid = 0;
  FUNC_1(VAR_0, &VAR_2, VAR_1->server);
 }
}
