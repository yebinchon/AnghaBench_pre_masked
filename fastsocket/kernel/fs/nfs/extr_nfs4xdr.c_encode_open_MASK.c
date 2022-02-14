
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int delegation; int delegation_type; } ;
struct nfs_openargs {int claim; TYPE_1__ u; int name; } ;
struct compound_hdr {int replen; int nops; } ;


 int FUNC_0 () ;





 scalar_t__ VAR_0 ;
 int FUNC_1 (struct xdr_stream*,int ,int *) ;
 int FUNC_2 (struct xdr_stream*,int *) ;
 int FUNC_3 (struct xdr_stream*) ;
 int FUNC_4 (struct xdr_stream*,int ) ;
 int FUNC_5 (struct xdr_stream*,int ) ;
 int FUNC_6 (struct xdr_stream*,struct nfs_openargs const*) ;
 int FUNC_7 (struct xdr_stream*,struct nfs_openargs const*) ;

__attribute__((used)) static void FUNC_8(struct xdr_stream *VAR_1, const struct nfs_openargs *VAR_2, struct compound_hdr *VAR_3)
{
 FUNC_6(VAR_1, VAR_2);
 FUNC_7(VAR_1, VAR_2);
 switch (VAR_2->claim) {
 case 129:
  FUNC_4(VAR_1, VAR_2->name);
  break;
 case 128:
  FUNC_5(VAR_1, VAR_2->u.delegation_type);
  break;
 case 132:
  FUNC_1(VAR_1, VAR_2->name, &VAR_2->u.delegation);
  break;
 case 130:
  FUNC_3(VAR_1);
  break;
 case 131:
  FUNC_2(VAR_1, &VAR_2->u.delegation);
  break;
 default:
  FUNC_0();
 }
 VAR_3->nops++;
 VAR_3->replen += VAR_0;
}
