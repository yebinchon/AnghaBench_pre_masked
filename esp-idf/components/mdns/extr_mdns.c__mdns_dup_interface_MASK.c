
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t mdns_if_t ;
struct TYPE_6__ {TYPE_2__* interfaces; } ;
struct TYPE_5__ {TYPE_1__* pcbs; } ;
struct TYPE_4__ {int state; scalar_t__ pcb; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,size_t,int *,int ,int) ;
 int FUNC_1 (size_t,size_t) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (size_t,size_t) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static void FUNC_4(mdns_if_t VAR_3)
{
    uint8_t VAR_4;
    mdns_if_t VAR_5 = FUNC_2 (VAR_3);
    for (VAR_4=0; VAR_4<VAR_0; VAR_4++) {
        if (VAR_2->interfaces[VAR_5].pcbs[VAR_4].pcb) {

            if (VAR_2->interfaces[VAR_3].pcbs[VAR_4].pcb) {
                FUNC_1(VAR_3, VAR_4);
                FUNC_3(VAR_3, VAR_4);
            }
            VAR_2->interfaces[VAR_3].pcbs[VAR_4].state = VAR_1;
            FUNC_0(VAR_5, VAR_4, ((void*)0), 0, 1);
        }
    }
}
