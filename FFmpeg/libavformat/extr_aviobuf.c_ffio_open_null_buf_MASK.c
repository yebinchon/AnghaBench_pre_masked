
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int write_packet; } ;
typedef TYPE_1__ AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**,int ) ;

int FUNC_1(AVIOContext **VAR_1)
{
    int VAR_2 = FUNC_0(VAR_1, 0);
    if (VAR_2 >= 0) {
        AVIOContext *VAR_3 = *VAR_1;
        VAR_3->write_packet = VAR_0;
    }
    return VAR_2;
}
