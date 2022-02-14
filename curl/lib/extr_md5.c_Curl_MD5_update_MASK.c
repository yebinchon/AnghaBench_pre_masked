
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int md5_hashctx; TYPE_1__* md5_hash; } ;
struct TYPE_4__ {int (* md5_update_func ) (int ,unsigned char const*,unsigned int) ;} ;
typedef TYPE_2__ MD5_context ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char const*,unsigned int) ;

CURLcode FUNC_1(MD5_context *VAR_1,
                         const unsigned char *VAR_2,
                         unsigned int VAR_3)
{
  (*VAR_1->md5_hash->md5_update_func)(VAR_1->md5_hashctx, VAR_2, VAR_3);

  return VAR_0;
}
