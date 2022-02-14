
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,char const*,scalar_t__ const) ;
 int * FUNC_3 (struct xdr_stream*,scalar_t__ const) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_2, const char *VAR_3)
{
 const u32 VAR_4 = FUNC_0(VAR_3);
 __be32 *VAR_5;

 if (FUNC_1(VAR_4 > VAR_1))
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_2, sizeof(u32) + VAR_4);
 if (FUNC_1(VAR_5 == ((void*)0)))
  return -VAR_0;
 FUNC_2(VAR_5, VAR_3, VAR_4);

 return 0;
}
