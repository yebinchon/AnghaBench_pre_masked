
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* md5_hashctx; TYPE_1__* md5_hash; } ;
struct TYPE_6__ {int (* md5_final_func ) (unsigned char*,TYPE_2__*) ;} ;
typedef TYPE_2__ MD5_context ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (unsigned char*,TYPE_2__*) ;

CURLcode FUNC_2(MD5_context *VAR_1, unsigned char *VAR_2)
{
  (*VAR_1->md5_hash->md5_final_func)(VAR_2, VAR_1->md5_hashctx);

  FUNC_0(VAR_1->md5_hashctx);
  FUNC_0(VAR_1);

  return VAR_0;
}
