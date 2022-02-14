
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct crypto_pcomp {int dummy; } ;
struct TYPE_5__ {int count; int vecs; } ;
struct TYPE_8__ {int count; int vecs; } ;
struct TYPE_6__ {TYPE_1__ decomp; TYPE_4__ comp; } ;
struct TYPE_7__ {TYPE_2__ pcomp; } ;
struct alg_test_desc {TYPE_3__ suite; } ;


 scalar_t__ FUNC_0 (struct crypto_pcomp*) ;
 int FUNC_1 (struct crypto_pcomp*) ;
 struct crypto_pcomp* FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (struct crypto_pcomp*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (struct crypto_pcomp*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(const struct alg_test_desc *VAR_0, const char *VAR_1,
     u32 VAR_2, u32 VAR_3)
{
 struct crypto_pcomp *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_4("alg: pcomp: Failed to load transform for %s: %ld\n",
         VAR_1, FUNC_1(VAR_4));
  return FUNC_1(VAR_4);
 }

 VAR_5 = FUNC_5(VAR_4, VAR_0->suite.pcomp.comp.vecs,
    VAR_0->suite.pcomp.decomp.vecs,
    VAR_0->suite.pcomp.comp.count,
    VAR_0->suite.pcomp.decomp.count);

 FUNC_3(VAR_4);
 return VAR_5;
}
