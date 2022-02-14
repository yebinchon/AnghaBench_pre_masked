
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_stream_s {int * workspace; } ;
struct zlib_ctx {struct z_stream_s comp_stream; } ;
struct nlattr {int dummy; } ;
struct crypto_pcomp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct crypto_pcomp*) ;
 struct zlib_ctx* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr**,int ,void*,unsigned int,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (size_t) ;
 int FUNC_7 (struct zlib_ctx*) ;
 int FUNC_8 (struct z_stream_s*,int ,int ,int ,int ,int ) ;
 size_t FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct crypto_pcomp *VAR_14, void *VAR_15,
          unsigned int VAR_16)
{
 struct zlib_ctx *VAR_17 = FUNC_1(FUNC_0(VAR_14));
 struct z_stream_s *VAR_18 = &VAR_17->comp_stream;
 struct nlattr *VAR_19[VAR_5 + 1];
 size_t VAR_20;
 int VAR_21;

 VAR_21 = FUNC_4(VAR_19, VAR_5, VAR_15, VAR_16, ((void*)0));
 if (VAR_21)
  return VAR_21;

 FUNC_7(VAR_17);

 VAR_20 = FUNC_9();
 VAR_18->workspace = FUNC_6(VAR_20);
 if (!VAR_18->workspace)
  return -VAR_2;

 FUNC_2(VAR_18->workspace, 0, VAR_20);
 VAR_21 = FUNC_8(VAR_18,
    VAR_19[VAR_4]
     ? FUNC_3(VAR_19[VAR_4])
     : VAR_10,
    VAR_19[VAR_7]
     ? FUNC_3(VAR_19[VAR_7])
     : VAR_12,
    VAR_19[VAR_9]
     ? FUNC_3(VAR_19[VAR_9])
     : VAR_3,
    VAR_19[VAR_6]
     ? FUNC_3(VAR_19[VAR_6])
     : VAR_0,
    VAR_19[VAR_8]
     ? FUNC_3(VAR_19[VAR_8])
     : VAR_11);
 if (VAR_21 != VAR_13) {
  FUNC_5(VAR_18->workspace);
  VAR_18->workspace = ((void*)0);
  return -VAR_1;
 }

 return 0;
}
