
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct qstr {int name; int len; } ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ nfs4_stateid ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,int ,int ) ;
 int * FUNC_2 (struct xdr_stream*,scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct xdr_stream *VAR_2, const struct qstr *VAR_3, const nfs4_stateid *VAR_4)
{
 __be32 *VAR_5;

 VAR_5 = FUNC_2(VAR_2, 4+VAR_1);
 *VAR_5++ = FUNC_0(VAR_0);
 FUNC_3(VAR_5, VAR_4->data, VAR_1);
 FUNC_1(VAR_2, VAR_3->len, VAR_3->name);
}
