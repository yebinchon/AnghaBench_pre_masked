
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eof_reached; } ;
typedef TYPE_1__ AVIOContext ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(AVIOContext *VAR_0)
{
    if(!VAR_0)
        return 0;
    if(VAR_0->eof_reached){
        VAR_0->eof_reached=0;
        FUNC_0(VAR_0);
    }
    return VAR_0->eof_reached;
}
