
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int chacha20poly1305_ctx ;
struct TYPE_2__ {int (* encrypt ) (int ,int *,size_t,void const*,void*) ;} ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,size_t,void const*,void*) ;

int FUNC_3(chacha20poly1305_ctx *VAR_0, size_t VAR_1, const void *VAR_2, void *VAR_3)
{
    return FUNC_0()->encrypt(FUNC_1(), VAR_0, VAR_1, VAR_2, VAR_3);
}
