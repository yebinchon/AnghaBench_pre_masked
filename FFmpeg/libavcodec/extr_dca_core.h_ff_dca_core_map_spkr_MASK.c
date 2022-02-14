
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int ch_mask; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline int FUNC_0(DCACoreDecoder *VAR_6, int VAR_7)
{
    if (VAR_6->ch_mask & (1U << VAR_7))
        return VAR_7;
    if (VAR_7 == VAR_1 && (VAR_6->ch_mask & VAR_2))
        return VAR_0;
    if (VAR_7 == VAR_5 && (VAR_6->ch_mask & VAR_3))
        return VAR_4;
    return -1;
}
