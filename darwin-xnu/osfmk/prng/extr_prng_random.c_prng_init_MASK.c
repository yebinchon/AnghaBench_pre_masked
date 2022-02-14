
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cckprng_ctx_t ;
struct TYPE_2__ {int (* init ) (int ,size_t,void const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,size_t,void const*) ;

__attribute__((used)) static int
FUNC_2(cckprng_ctx_t VAR_2, size_t VAR_3, const void * VAR_4)
{
 int VAR_5 = VAR_1->init(VAR_2, VAR_3, VAR_4);
 if (VAR_5 == VAR_0) {
  FUNC_0("prng_init");
 }
 return VAR_5;
}
