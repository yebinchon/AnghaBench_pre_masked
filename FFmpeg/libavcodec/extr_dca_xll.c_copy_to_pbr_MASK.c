
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int pbr_length; int pbr_delay; scalar_t__ pbr_buffer; } ;
typedef TYPE_1__ DCAXllDecoder ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_3(DCAXllDecoder *VAR_4, uint8_t *VAR_5, int VAR_6, int VAR_7)
{
    if (VAR_6 > VAR_1)
        return FUNC_0(VAR_3);

    if (!VAR_4->pbr_buffer && !(VAR_4->pbr_buffer = FUNC_1(VAR_1 + VAR_0)))
        return FUNC_0(VAR_2);

    FUNC_2(VAR_4->pbr_buffer, VAR_5, VAR_6);
    VAR_4->pbr_length = VAR_6;
    VAR_4->pbr_delay = VAR_7;
    return 0;
}
