
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long* b; long l; } ;
typedef TYPE_1__ conv ;



long FUNC_0(long VAR_0)
{
 conv VAR_1;

 VAR_1.b[0] = VAR_0 & 0xff; VAR_0 >>= 8;
 VAR_1.b[1] = VAR_0 & 0xff; VAR_0 >>= 8;
 VAR_1.b[2] = VAR_0 & 0xff; VAR_0 >>= 8;
 VAR_1.b[3] = VAR_0 & 0xff; VAR_0 >>= 8;
 return VAR_1.l;
}
