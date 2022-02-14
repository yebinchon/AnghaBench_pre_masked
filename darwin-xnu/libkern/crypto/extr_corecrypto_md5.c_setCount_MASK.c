
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
struct TYPE_3__ {void** count; } ;
typedef TYPE_1__ MD5_CTX ;



__attribute__((used)) static void FUNC_0(MD5_CTX *VAR_0, uint64_t VAR_1)
{
 VAR_0->count[0]=(uint32_t)(VAR_1>>32);
 VAR_0->count[1]=(uint32_t)VAR_1;
}
