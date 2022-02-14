
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int help; int range; int low; } ;
struct TYPE_6__ {TYPE_1__ rc; } ;
typedef TYPE_2__ APEContext ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static inline int FUNC_1(APEContext *VAR_0, int VAR_1)
{
    FUNC_0(VAR_0);
    VAR_0->rc.help = VAR_0->rc.range / VAR_1;
    return VAR_0->rc.low / VAR_0->rc.help;
}
