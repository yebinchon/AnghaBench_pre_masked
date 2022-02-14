
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
struct timespec {int dummy; } ;
typedef int __be32 ;


 int const VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct timespec const*) ;

__attribute__((used)) static __be32 FUNC_1(struct xdr_stream *VAR_1, const uint32_t *VAR_2, const struct timespec *VAR_3)
{
 if (!(VAR_2[1] & VAR_0))
  return 0;
 return FUNC_0(VAR_1,VAR_3);
}
