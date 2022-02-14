
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ nfs4_stateid ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,int ,int ) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static inline void FUNC_3(struct xdr_stream *VAR_2, const nfs4_stateid *VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_2(VAR_2, 4);
 *VAR_4 = FUNC_0(VAR_0);
 FUNC_1(VAR_2, VAR_3->data, VAR_1);
}
