
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* interfaces; } ;
struct TYPE_5__ {TYPE_1__* pcbs; } ;
struct TYPE_4__ {scalar_t__ pcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static bool FUNC_0(void){
    int VAR_3, VAR_4;
    for (VAR_3=0; VAR_3<VAR_0; VAR_3++) {
        for (VAR_4=0; VAR_4<VAR_1; VAR_4++) {
            if(VAR_2->interfaces[VAR_3].pcbs[VAR_4].pcb){
                return 1;
            }
        }
    }
    return 0;
}
