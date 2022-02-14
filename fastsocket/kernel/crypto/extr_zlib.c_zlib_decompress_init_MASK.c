
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_stream_s {int dummy; } ;
struct zlib_ctx {struct z_stream_s decomp_stream; } ;
struct crypto_pcomp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_pcomp*) ;
 struct zlib_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct z_stream_s*) ;

__attribute__((used)) static int FUNC_3(struct crypto_pcomp *VAR_2)
{
 int VAR_3;
 struct zlib_ctx *VAR_4 = FUNC_1(FUNC_0(VAR_2));
 struct z_stream_s *VAR_5 = &VAR_4->decomp_stream;

 VAR_3 = FUNC_2(VAR_5);
 if (VAR_3 != VAR_1)
  return -VAR_0;

 return 0;
}
