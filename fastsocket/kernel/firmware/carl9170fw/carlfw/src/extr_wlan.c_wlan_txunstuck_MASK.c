
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* tx_queue; } ;
struct TYPE_6__ {TYPE_2__ wlan; } ;
struct TYPE_4__ {scalar_t__ head; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_1)
{
 FUNC_0(VAR_1, ((uint32_t) VAR_0.wlan.tx_queue[VAR_1].head) | 1);
}
