
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
typedef scalar_t__ __be32 ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__* FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32 FUNC_3(struct xdr_stream *VAR_3, const uint32_t *VAR_4, __be32 **VAR_5)
{
 __be32 VAR_6[2];
 __be32 *VAR_7;

 VAR_6[0] = FUNC_0(VAR_4[0] & VAR_0);
 VAR_6[1] = FUNC_0(VAR_4[1] & VAR_1);
 if (VAR_6[1] != 0) {
  VAR_7 = FUNC_2(VAR_3, 16);
  if (FUNC_1(VAR_7 == ((void*)0)))
   return FUNC_0(VAR_2);
  *VAR_7++ = FUNC_0(2);
  *VAR_7++ = VAR_6[0];
  *VAR_7++ = VAR_6[1];
 } else if (VAR_6[0] != 0) {
  VAR_7 = FUNC_2(VAR_3, 12);
  if (FUNC_1(VAR_7 == ((void*)0)))
   return FUNC_0(VAR_2);
  *VAR_7++ = FUNC_0(1);
  *VAR_7++ = VAR_6[0];
 } else {
  VAR_7 = FUNC_2(VAR_3, 8);
  if (FUNC_1(VAR_7 == ((void*)0)))
   return FUNC_0(VAR_2);
  *VAR_7++ = FUNC_0(0);
 }
 *VAR_5 = VAR_7;
 return 0;
}
