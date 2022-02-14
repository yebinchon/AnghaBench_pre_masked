
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int range; int low; int outstanding_count; } ;
typedef TYPE_1__ CABACContext ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static inline void FUNC_1(CABACContext *VAR_0){
    while(VAR_0->range < 0x100){

        if(VAR_0->low<0x100){
            FUNC_0(VAR_0, 0);
        }else if(VAR_0->low<0x200){
            VAR_0->outstanding_count++;
            VAR_0->low -= 0x100;
        }else{
            FUNC_0(VAR_0, 1);
            VAR_0->low -= 0x200;
        }

        VAR_0->range+= VAR_0->range;
        VAR_0->low += VAR_0->low;
    }
}
