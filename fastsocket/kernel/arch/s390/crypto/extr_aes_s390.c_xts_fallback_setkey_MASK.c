
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct s390_xts_ctx {TYPE_2__* fallback; } ;
struct crypto_tfm {int crt_flags; } ;
struct TYPE_3__ {int crt_flags; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (TYPE_2__*,int const*,unsigned int) ;
 struct s390_xts_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_2, const u8 *VAR_3,
       unsigned int VAR_4)
{
 struct s390_xts_ctx *VAR_5 = FUNC_1(VAR_2);
 unsigned int VAR_6;

 VAR_5->fallback->base.crt_flags &= ~VAR_0;
 VAR_5->fallback->base.crt_flags |= (VAR_2->crt_flags &
   VAR_0);

 VAR_6 = FUNC_0(VAR_5->fallback, VAR_3, VAR_4);
 if (VAR_6) {
  VAR_2->crt_flags &= ~VAR_1;
  VAR_2->crt_flags |= (VAR_5->fallback->base.crt_flags &
    VAR_1);
 }
 return VAR_6;
}
