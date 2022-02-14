
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs_setaclargs {int acl_len; int acl_pgbase; int acl_pages; } ;
struct compound_hdr {int replen; int nops; } ;
typedef void* __be32 ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 void** FUNC_1 (struct xdr_stream*,int) ;
 int FUNC_2 (void**,int ,int) ;
 int FUNC_3 (struct xdr_stream*,int ,int ,int) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int
FUNC_4(struct xdr_stream *VAR_6, struct nfs_setaclargs *VAR_7, struct compound_hdr *VAR_8)
{
 __be32 *VAR_9;

 VAR_9 = FUNC_1(VAR_6, 4+VAR_2);
 *VAR_9++ = FUNC_0(VAR_3);
 FUNC_2(VAR_9, VAR_5.data, VAR_2);
 VAR_9 = FUNC_1(VAR_6, 2*4);
 *VAR_9++ = FUNC_0(1);
 *VAR_9 = FUNC_0(VAR_1);
 if (VAR_7->acl_len % 4)
  return -VAR_0;
 VAR_9 = FUNC_1(VAR_6, 4);
 *VAR_9 = FUNC_0(VAR_7->acl_len);
 FUNC_3(VAR_6, VAR_7->acl_pages, VAR_7->acl_pgbase, VAR_7->acl_len);
 VAR_8->nops++;
 VAR_8->replen += VAR_4;
 return 0;
}
