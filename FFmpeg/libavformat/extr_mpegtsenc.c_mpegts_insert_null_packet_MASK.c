
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int pb; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_1)
{
    uint8_t *VAR_2;
    uint8_t VAR_3[VAR_0];

    VAR_2 = VAR_3;
    *VAR_2++ = 0x47;
    *VAR_2++ = 0x00 | 0x1f;
    *VAR_2++ = 0xff;
    *VAR_2++ = 0x10;
    FUNC_1(VAR_2, 0x0FF, VAR_0 - (VAR_2 - VAR_3));
    FUNC_2(VAR_1);
    FUNC_0(VAR_1->pb, VAR_3, VAR_0);
}
