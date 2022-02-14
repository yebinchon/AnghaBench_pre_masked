
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n_difchan; int difseg_size; } ;
typedef TYPE_1__ AVDVProfile ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static inline int FUNC_2(const AVDVProfile *VAR_0)
{
    int VAR_1 = VAR_0->n_difchan * VAR_0->difseg_size * 27;
    if (FUNC_0(VAR_0))
        VAR_1 -= 3 * 27;
    if (FUNC_1(VAR_0))
        VAR_1 -= 4 * 27;
    return VAR_1;
}
