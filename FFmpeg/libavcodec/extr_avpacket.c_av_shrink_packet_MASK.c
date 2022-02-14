
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ AVPacket ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ) ;

void FUNC_1(AVPacket *VAR_1, int VAR_2)
{
    if (VAR_1->size <= VAR_2)
        return;
    VAR_1->size = VAR_2;
    FUNC_0(VAR_1->data + VAR_2, 0, VAR_0);
}
