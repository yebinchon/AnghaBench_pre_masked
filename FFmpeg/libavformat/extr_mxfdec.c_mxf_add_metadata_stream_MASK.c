
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_23__ {int metadata; int id; TYPE_1__* codecpar; } ;
struct TYPE_22__ {int id; } ;
struct TYPE_21__ {int fc; } ;
struct TYPE_20__ {int package_uid; int package_ul; } ;
struct TYPE_19__ {int source_package_uid; int source_package_ul; } ;
struct TYPE_18__ {TYPE_2__* sequence; scalar_t__* name; int track_id; } ;
struct TYPE_17__ {int structural_components_count; int data_definition_ul; int * structural_components_refs; } ;
struct TYPE_16__ {int codec_id; int codec_type; } ;
typedef TYPE_3__ MXFTrack ;
typedef TYPE_4__ MXFStructuralComponent ;
typedef TYPE_5__ MXFPackage ;
typedef TYPE_6__ MXFContext ;
typedef TYPE_7__ MXFCodecUL ;
typedef TYPE_8__ AVStream ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,scalar_t__*,int ) ;
 scalar_t__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*) ;
 TYPE_8__* FUNC_4 (int ,int *) ;
 int VAR_4 ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,char*,TYPE_5__*) ;
 TYPE_7__* FUNC_7 (int ,int *) ;
 TYPE_4__* FUNC_8 (TYPE_6__*,int *) ;

__attribute__((used)) static int FUNC_9(MXFContext *VAR_5, MXFTrack *VAR_6)
{
    MXFStructuralComponent *VAR_7 = ((void*)0);
    const MXFCodecUL *VAR_8 = ((void*)0);
    MXFPackage VAR_9;
    AVStream *VAR_10;
    int VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_6->sequence->structural_components_count; VAR_11++) {
        VAR_7 = FUNC_8(VAR_5, &VAR_6->sequence->structural_components_refs[VAR_11]);
        if (!VAR_7)
            continue;
        break;
    }
    if (!VAR_7)
        return 0;

    VAR_10 = FUNC_4(VAR_5->fc, ((void*)0));
    if (!VAR_10) {
        FUNC_3(VAR_5->fc, VAR_2, "could not allocate metadata stream\n");
        return FUNC_0(VAR_3);
    }

    VAR_10->codecpar->codec_type = VAR_0;
    VAR_10->codecpar->codec_id = VAR_1;
    VAR_10->id = VAR_6->track_id;

    FUNC_5(&VAR_9.package_ul, VAR_7->source_package_ul, 16);
    FUNC_5(&VAR_9.package_uid, VAR_7->source_package_uid, 16);
    FUNC_6(&VAR_10->metadata, "file_package_umid", &VAR_9);
    if (VAR_6->name && VAR_6->name[0])
        FUNC_1(&VAR_10->metadata, "track_name", VAR_6->name, 0);

    VAR_8 = FUNC_7(VAR_4, &VAR_6->sequence->data_definition_ul);
    FUNC_1(&VAR_10->metadata, "data_type", FUNC_2(VAR_8->id), 0);
    return 0;
}
