
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32 FUNC_3(struct xdr_stream *VAR_1, uint32_t VAR_2, __be32 VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_2(VAR_1, 8);
 if (FUNC_1(VAR_4 == ((void*)0)))
  return FUNC_0(VAR_0);
 *VAR_4++ = FUNC_0(VAR_2);
 *VAR_4 = VAR_3;
 return 0;
}
