
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int * FUNC_2 (struct xdr_stream*,unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static __be32 FUNC_4(struct xdr_stream *VAR_1, unsigned int *VAR_2, const char **VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_2(VAR_1, 4);
 if (FUNC_3(VAR_4 == ((void*)0)))
  return FUNC_0(VAR_0);
 *VAR_2 = FUNC_1(*VAR_4);

 if (*VAR_2 != 0) {
  VAR_4 = FUNC_2(VAR_1, *VAR_2);
  if (FUNC_3(VAR_4 == ((void*)0)))
   return FUNC_0(VAR_0);
  *VAR_3 = (const char *)VAR_4;
 } else
  *VAR_3 = ((void*)0);

 return 0;
}
