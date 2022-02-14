
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int low; int outstanding_count; scalar_t__ range; } ;
typedef TYPE_1__ CABACContext ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(CABACContext *VAR_0, int VAR_1){
    VAR_0->low += VAR_0->low;

    if(VAR_1){
        VAR_0->low += VAR_0->range;
    }

    if(VAR_0->low<0x200){
        FUNC_0(VAR_0, 0);
    }else if(VAR_0->low<0x400){
        VAR_0->outstanding_count++;
        VAR_0->low -= 0x200;
    }else{
        FUNC_0(VAR_0, 1);
        VAR_0->low -= 0x400;
    }
}
