
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cckprng_ctx_t ;
struct TYPE_2__ {int (* generate ) (int ,size_t,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,size_t,void*) ;

__attribute__((used)) static int
FUNC_2(cckprng_ctx_t VAR_2, size_t VAR_3, void * VAR_4)
{
 int VAR_5 = VAR_1->generate(VAR_2, VAR_3, VAR_4);
 if (VAR_5 == VAR_0) {
  FUNC_0("prng_generate");
 }
 return VAR_5;
}
