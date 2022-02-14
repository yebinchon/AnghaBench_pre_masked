
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int low; int help; int range; } ;
struct TYPE_5__ {TYPE_1__ rc; } ;
typedef TYPE_2__ APEContext ;



__attribute__((used)) static inline void FUNC_0(APEContext *VAR_0, int VAR_1, int VAR_2)
{
    VAR_0->rc.low -= VAR_0->rc.help * VAR_2;
    VAR_0->rc.range = VAR_0->rc.help * VAR_1;
}
