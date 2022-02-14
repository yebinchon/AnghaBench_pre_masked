
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int sects; } ;
typedef TYPE_1__ KXLDSeg ;
typedef int KXLDSect ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static KXLDSect *
FUNC_2(const KXLDSeg *VAR_0, u_int VAR_1)
{
    FUNC_0(VAR_0);

    return *(KXLDSect **) FUNC_1(&VAR_0->sects, VAR_1);
}
