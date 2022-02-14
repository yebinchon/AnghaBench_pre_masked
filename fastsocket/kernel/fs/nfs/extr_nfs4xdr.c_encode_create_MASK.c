
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_6__ {int specdata1; int specdata2; } ;
struct TYPE_5__ {int len; int pages; } ;
struct TYPE_7__ {TYPE_2__ device; TYPE_1__ symlink; } ;
struct nfs4_create_arg {int ftype; int server; int attrs; TYPE_4__* name; TYPE_3__ u; } ;
struct compound_hdr {int replen; int nops; } ;
typedef void* __be32 ;
struct TYPE_8__ {int name; int len; } ;





 int VAR_0 ;
 void* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct xdr_stream*,int ,int ) ;
 int FUNC_2 (struct xdr_stream*,int ,int ) ;
 void** FUNC_3 (struct xdr_stream*,int) ;
 int FUNC_4 (struct xdr_stream*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct xdr_stream *VAR_2, const struct nfs4_create_arg *VAR_3, struct compound_hdr *VAR_4)
{
 __be32 *VAR_5;

 VAR_5 = FUNC_3(VAR_2, 8);
 *VAR_5++ = FUNC_0(VAR_0);
 *VAR_5 = FUNC_0(VAR_3->ftype);

 switch (VAR_3->ftype) {
 case 128:
  VAR_5 = FUNC_3(VAR_2, 4);
  *VAR_5 = FUNC_0(VAR_3->u.symlink.len);
  FUNC_4(VAR_2, VAR_3->u.symlink.pages, 0, VAR_3->u.symlink.len);
  break;

 case 130: case 129:
  VAR_5 = FUNC_3(VAR_2, 8);
  *VAR_5++ = FUNC_0(VAR_3->u.device.specdata1);
  *VAR_5 = FUNC_0(VAR_3->u.device.specdata2);
  break;

 default:
  break;
 }

 FUNC_2(VAR_2, VAR_3->name->len, VAR_3->name->name);
 VAR_4->nops++;
 VAR_4->replen += VAR_1;

 FUNC_1(VAR_2, VAR_3->attrs, VAR_3->server);
}
