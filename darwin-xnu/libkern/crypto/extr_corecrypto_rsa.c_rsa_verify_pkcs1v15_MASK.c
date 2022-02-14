
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int key; } ;
typedef TYPE_1__ rsa_pub_ctx ;
struct TYPE_5__ {int (* ccrsa_verify_pkcs1v15_fn ) (int ,int const*,size_t,int const*,size_t,int const*,int*) ;} ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ,int const*,size_t,int const*,size_t,int const*,int*) ;

int FUNC_1(rsa_pub_ctx *VAR_1, const uint8_t *VAR_2,
                          size_t VAR_3, const uint8_t *VAR_4,
                          size_t VAR_5, const uint8_t *VAR_6,
                          bool *VAR_7) {
 return VAR_0->ccrsa_verify_pkcs1v15_fn(VAR_1->key,VAR_2,
   VAR_3,VAR_4,
   VAR_5,VAR_6,VAR_7);
}
