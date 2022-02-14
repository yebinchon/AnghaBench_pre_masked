
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ id; int name; } ;
typedef TYPE_1__ AVCodecDescriptor ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ,...) ;
 TYPE_1__ const* FUNC_1 (scalar_t__) ;
 TYPE_1__ const* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__ const*) ;

int FUNC_4(int VAR_1, char **VAR_2)
{
    const AVCodecDescriptor *VAR_3 = ((void*)0), *VAR_4;

    while ((VAR_4 = FUNC_3(VAR_3))) {
        if (VAR_3 && VAR_3->id >= VAR_4->id) {
            FUNC_0(((void*)0), VAR_0, "Unsorted codec_descriptors '%s' and '%s'.\n", VAR_3->name, VAR_4->name);
            return 1;
        }

        if (FUNC_1(VAR_4->id) != VAR_4) {
            FUNC_0(((void*)0), VAR_0, "avcodec_descriptor_get() failed with '%s'.\n", VAR_4->name);
            return 1;
        }

        if (FUNC_2(VAR_4->name) != VAR_4) {
            FUNC_0(((void*)0), VAR_0, "avcodec_descriptor_get_by_name() failed with '%s'.\n", VAR_4->name);
            return 1;
        }

        VAR_3 = VAR_4;
    }

    return 0;
}
