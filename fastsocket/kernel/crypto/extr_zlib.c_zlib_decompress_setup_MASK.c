
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_stream_s {int * workspace; } ;
struct zlib_ctx {int decomp_windowBits; struct z_stream_s decomp_stream; } ;
struct nlattr {int dummy; } ;
struct crypto_pcomp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct crypto_pcomp*) ;
 struct zlib_ctx* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,void*,unsigned int,int *) ;
 int FUNC_6 (struct zlib_ctx*) ;
 int FUNC_7 (struct z_stream_s*,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct crypto_pcomp *VAR_7, void *VAR_8,
     unsigned int VAR_9)
{
 struct zlib_ctx *VAR_10 = FUNC_1(FUNC_0(VAR_7));
 struct z_stream_s *VAR_11 = &VAR_10->decomp_stream;
 struct nlattr *VAR_12[VAR_4 + 1];
 int VAR_13 = 0;

 VAR_13 = FUNC_5(VAR_12, VAR_4, VAR_8, VAR_9, ((void*)0));
 if (VAR_13)
  return VAR_13;

 FUNC_6(VAR_10);

 VAR_10->decomp_windowBits = VAR_12[VAR_5]
     ? FUNC_4(VAR_12[VAR_5])
     : VAR_0;

 VAR_11->workspace = FUNC_3(FUNC_8(), VAR_3);
 if (!VAR_11->workspace)
  return -VAR_2;

 VAR_13 = FUNC_7(VAR_11, VAR_10->decomp_windowBits);
 if (VAR_13 != VAR_6) {
  FUNC_2(VAR_11->workspace);
  VAR_11->workspace = ((void*)0);
  return -VAR_1;
 }

 return 0;
}
