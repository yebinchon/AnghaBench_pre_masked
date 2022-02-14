
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int *,void const*,size_t) ;
 int * FUNC_1 (struct xdr_stream*,size_t) ;

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_0, const void *VAR_1, size_t VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_3, VAR_1, VAR_2);
}
