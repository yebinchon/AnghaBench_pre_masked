
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum MXFMetadataSetType { ____Placeholder_MXFMetadataSetType } MXFMetadataSetType ;
struct TYPE_2__ {int duration; int pix_fmt; } ;
typedef int MXFMetadataSet ;
typedef TYPE_1__ MXFDescriptor ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static int FUNC_0(MXFMetadataSet *VAR_2, enum MXFMetadataSetType VAR_3)
{
    switch (VAR_3){
    case 128:
    case 129:
        ((MXFDescriptor*)VAR_2)->pix_fmt = VAR_1;
        ((MXFDescriptor*)VAR_2)->duration = VAR_0;
        break;
    default:
        break;
    }
    return 0;
}
