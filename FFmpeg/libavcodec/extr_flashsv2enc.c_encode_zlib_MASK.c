
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ sl_begin; scalar_t__ sl_end; } ;
typedef TYPE_1__ Block ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(Block * VAR_1, uint8_t * VAR_2, unsigned long *VAR_3, int VAR_4)
{
    int VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_1->sl_begin, VAR_1->sl_end - VAR_1->sl_begin, VAR_4);
    return VAR_5 == VAR_0 ? 0 : -1;
}
