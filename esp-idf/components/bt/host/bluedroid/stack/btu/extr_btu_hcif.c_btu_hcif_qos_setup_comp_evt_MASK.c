
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_3__ {int delay_variation; int latency; int peak_bandwidth; int token_rate; int service_type; int qos_flags; } ;
typedef TYPE_1__ FLOW_SPEC ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4 (UINT8 *VAR_0)
{
    UINT8 VAR_1;
    UINT16 VAR_2;
    FLOW_SPEC VAR_3;

    FUNC_2 (VAR_1, VAR_0);
    FUNC_0 (VAR_2, VAR_0);
    FUNC_2 (VAR_3.qos_flags, VAR_0);
    FUNC_2 (VAR_3.service_type, VAR_0);
    FUNC_1 (VAR_3.token_rate, VAR_0);
    FUNC_1 (VAR_3.peak_bandwidth, VAR_0);
    FUNC_1 (VAR_3.latency, VAR_0);
    FUNC_1 (VAR_3.delay_variation, VAR_0);

    FUNC_3(VAR_1, VAR_2, &VAR_3);
}
