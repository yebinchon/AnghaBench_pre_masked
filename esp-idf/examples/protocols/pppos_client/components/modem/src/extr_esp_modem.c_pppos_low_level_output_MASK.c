
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ppp_pcb ;
struct TYPE_3__ {int (* send_data ) (TYPE_1__*,char const*,int ) ;} ;
typedef TYPE_1__ modem_dte_t ;


 int FUNC_0 (TYPE_1__*,char const*,int ) ;

__attribute__((used)) static uint32_t FUNC_1(ppp_pcb *VAR_0, uint8_t *VAR_1, uint32_t VAR_2, void *VAR_3)
{
    modem_dte_t *VAR_4 = (modem_dte_t *)VAR_3;
    return VAR_4->send_data(VAR_4, (const char *)VAR_1, VAR_2);
}
