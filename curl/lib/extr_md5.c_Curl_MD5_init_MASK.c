
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* md5_hashctx; TYPE_1__ const* md5_hash; } ;
struct TYPE_6__ {int md5_ctxtsize; int (* md5_init_func ) (void*) ;} ;
typedef TYPE_1__ MD5_params ;
typedef TYPE_2__ MD5_context ;


 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*) ;

MD5_context *FUNC_3(const MD5_params *VAR_0)
{
  MD5_context *VAR_1;


  VAR_1 = FUNC_1(sizeof(*VAR_1));

  if(!VAR_1)
    return VAR_1;

  VAR_1->md5_hashctx = FUNC_1(VAR_0->md5_ctxtsize);

  if(!VAR_1->md5_hashctx) {
    FUNC_0(VAR_1);
    return ((void*)0);
  }

  VAR_1->md5_hash = VAR_0;

  (*VAR_0->md5_init_func)(VAR_1->md5_hashctx);

  return VAR_1;
}
