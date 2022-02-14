
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int* sf_idx; } ;
typedef TYPE_1__ SingleChannelElement ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const SingleChannelElement *VAR_1,
    const uint8_t *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    return VAR_4 >= (VAR_3 - VAR_0)
        && VAR_4 <= (VAR_3 + VAR_0)
        && VAR_1->sf_idx[VAR_2[VAR_5]] >= (VAR_4 - VAR_0)
        && VAR_1->sf_idx[VAR_2[VAR_5]] <= (VAR_4 + VAR_0);
}
