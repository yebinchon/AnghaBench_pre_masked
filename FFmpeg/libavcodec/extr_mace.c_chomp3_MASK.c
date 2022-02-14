
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_4__ {int level; } ;
typedef TYPE_1__ ChannelData ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_3(ChannelData *VAR_0, int16_t *VAR_1, uint8_t VAR_2, int VAR_3)
{

    int16_t VAR_4 = FUNC_2(VAR_0, VAR_2, VAR_3);

    VAR_4 = FUNC_1(VAR_4 + VAR_0->level);

    VAR_0->level = VAR_4 - (VAR_4 >> 3);
    *VAR_1 = FUNC_0(VAR_4);
}
