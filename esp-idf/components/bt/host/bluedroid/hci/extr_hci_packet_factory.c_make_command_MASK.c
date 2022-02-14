
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int * data; } ;
typedef TYPE_1__ BT_HDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,size_t) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;

__attribute__((used)) static BT_HDR *FUNC_3(uint16_t VAR_1, size_t VAR_2, uint8_t **VAR_3)
{
    BT_HDR *VAR_4 = FUNC_2(VAR_0 + VAR_2);

    uint8_t *VAR_5 = VAR_4->data;
    FUNC_0(VAR_5, VAR_1);
    FUNC_1(VAR_5, VAR_2);

    if (VAR_3 != ((void*)0)) {
        *VAR_3 = VAR_5;
    }

    return VAR_4;
}
