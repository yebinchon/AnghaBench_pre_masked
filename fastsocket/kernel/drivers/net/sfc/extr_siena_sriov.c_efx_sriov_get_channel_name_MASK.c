
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_channel {TYPE_1__* efx; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (char*,size_t,char*,char*) ;

__attribute__((used)) static void
FUNC_1(struct efx_channel *VAR_0, char *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_1, VAR_2, "%s-iov", VAR_0->efx->name);
}
