
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int payload_ref; } ;
struct TYPE_6__ {TYPE_1__ itut_t35; } ;
struct TYPE_7__ {int metadata_type; TYPE_2__ metadata; } ;
typedef TYPE_3__ AV1RawMetadata ;



 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(AV1RawMetadata *VAR_0)
{
    switch (VAR_0->metadata_type) {
    case 128:
        FUNC_0(&VAR_0->metadata.itut_t35.payload_ref);
        break;
    }
}
