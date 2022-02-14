
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {TYPE_5__* sub_descriptors_refs; TYPE_5__* extradata; } ;
struct TYPE_17__ {TYPE_5__* structural_components_refs; } ;
struct TYPE_16__ {TYPE_5__* stream_offset_entries; TYPE_5__* flag_entries; TYPE_5__* temporal_offset_entries; } ;
struct TYPE_15__ {int type; } ;
struct TYPE_14__ {TYPE_5__* comment_refs; TYPE_5__* name; TYPE_5__* tracks_refs; } ;
struct TYPE_13__ {TYPE_5__* structural_components_refs; } ;
struct TYPE_12__ {TYPE_5__* value; TYPE_5__* name; } ;
struct TYPE_11__ {TYPE_5__* name; } ;
typedef TYPE_1__ MXFTrack ;
typedef TYPE_2__ MXFTaggedValue ;
typedef TYPE_3__ MXFSequence ;
typedef TYPE_4__ MXFPackage ;
typedef TYPE_5__ MXFMetadataSet ;
typedef TYPE_6__ MXFIndexTableSegment ;
typedef TYPE_7__ MXFEssenceGroup ;
typedef TYPE_8__ MXFDescriptor ;
 int FUNC_0 (TYPE_5__**) ;

__attribute__((used)) static void FUNC_1(MXFMetadataSet **VAR_0, int VAR_1)
{
    MXFIndexTableSegment *VAR_2;
    switch ((*VAR_0)->type) {
    case 136:
        FUNC_0(&((MXFDescriptor *)*VAR_0)->extradata);
        break;
    case 132:
        FUNC_0(&((MXFDescriptor *)*VAR_0)->sub_descriptors_refs);
        break;
    case 131:
        FUNC_0(&((MXFSequence *)*VAR_0)->structural_components_refs);
        break;
    case 135:
        FUNC_0(&((MXFEssenceGroup *)*VAR_0)->structural_components_refs);
        break;
    case 130:
    case 133:
        FUNC_0(&((MXFPackage *)*VAR_0)->tracks_refs);
        FUNC_0(&((MXFPackage *)*VAR_0)->name);
        FUNC_0(&((MXFPackage *)*VAR_0)->comment_refs);
        break;
    case 129:
        FUNC_0(&((MXFTaggedValue *)*VAR_0)->name);
        FUNC_0(&((MXFTaggedValue *)*VAR_0)->value);
        break;
    case 128:
        FUNC_0(&((MXFTrack *)*VAR_0)->name);
        break;
    case 134:
        VAR_2 = (MXFIndexTableSegment *)*VAR_0;
        FUNC_0(&VAR_2->temporal_offset_entries);
        FUNC_0(&VAR_2->flag_entries);
        FUNC_0(&VAR_2->stream_offset_entries);
    default:
        break;
    }
    if (VAR_1)
    FUNC_0(VAR_0);
}
