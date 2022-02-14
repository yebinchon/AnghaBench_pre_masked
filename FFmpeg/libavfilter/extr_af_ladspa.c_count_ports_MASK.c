
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int PortCount; int * PortDescriptors; } ;
typedef int LADSPA_PortDescriptor ;
typedef TYPE_1__ LADSPA_Descriptor ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const LADSPA_Descriptor *VAR_0,
                        unsigned long *VAR_1, unsigned long *VAR_2)
{
    LADSPA_PortDescriptor VAR_3;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0->PortCount; VAR_4++) {
        VAR_3 = VAR_0->PortDescriptors[VAR_4];

        if (FUNC_0(VAR_3)) {
            if (FUNC_1(VAR_3)) {
                (*VAR_1)++;
            } else if (FUNC_2(VAR_3)) {
                (*VAR_2)++;
            }
        }
    }
}
