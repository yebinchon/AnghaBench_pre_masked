
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nsm_args {int dummy; } ;


 int FUNC_0 (struct xdr_stream*,struct nsm_args const*) ;
 int FUNC_1 (struct xdr_stream*,struct nsm_args const*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_0, const struct nsm_args *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (FUNC_2(VAR_2 != 0))
  return VAR_2;
 return FUNC_1(VAR_0, VAR_1);
}
