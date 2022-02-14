
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* vol; } ;
struct TYPE_5__ {TYPE_1__ mix; } ;
typedef TYPE_2__ IXJ ;



__attribute__((used)) static int FUNC_0(long VAR_0, IXJ *VAR_1)
{
 int VAR_2 = (VAR_0 & 0x1F00) >> 8;
        return VAR_1->mix.vol[VAR_2];
}
