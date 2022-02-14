
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int minor; int major; } ;
struct TYPE_5__ {int level; int pb; int profile; TYPE_1__ ver; } ;
typedef TYPE_2__ VC2EncContext ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(VC2EncContext *VAR_0)
{
    FUNC_0(&VAR_0->pb, VAR_0->ver.major);
    FUNC_0(&VAR_0->pb, VAR_0->ver.minor);
    FUNC_0(&VAR_0->pb, VAR_0->profile);
    FUNC_0(&VAR_0->pb, VAR_0->level);
}
