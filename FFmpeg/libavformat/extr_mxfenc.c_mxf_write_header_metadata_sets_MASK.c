
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {int value; } ;
struct TYPE_18__ {int nb_streams; int metadata; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_17__ {int metadata; } ;
struct TYPE_16__ {scalar_t__ track_instance_count; } ;
struct TYPE_15__ {int instance; struct TYPE_15__* ref; void* type; int name; int member_0; } ;
typedef TYPE_1__ MXFPackage ;
typedef TYPE_2__ MXFContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVDictionaryEntry ;


 void* VAR_0 ;
 void* VAR_1 ;
 TYPE_5__* FUNC_0 (int ,char*,int *,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2)
{
    MXFContext *VAR_3 = VAR_2->priv_data;
    AVDictionaryEntry *VAR_4 = ((void*)0);
    AVStream *VAR_5 = ((void*)0);
    int VAR_6;
    MXFPackage VAR_7[3] = {{0}};
    int VAR_8 = 2;
    VAR_7[0].type = VAR_0;
    VAR_7[1].type = VAR_1;
    VAR_7[1].instance = 1;
    VAR_7[0].ref = &VAR_7[1];


    if ((VAR_4 = FUNC_0(VAR_2->metadata, "material_package_name", ((void*)0), 0)))
       VAR_7[0].name = VAR_4->value;

    if ((VAR_4 = FUNC_0(VAR_2->metadata, "file_package_name", ((void*)0), 0))) {
        VAR_7[1].name = VAR_4->value;
    } else {

        for (VAR_6 = 0; VAR_6 < VAR_2->nb_streams; VAR_6++) {
            VAR_5 = VAR_2->streams[VAR_6];
            if ((VAR_4 = FUNC_0(VAR_5->metadata, "file_package_name", ((void*)0), 0))) {
                VAR_7[1].name = VAR_4->value;
                break;
            }
        }
    }

    VAR_4 = FUNC_0(VAR_2->metadata, "reel_name", ((void*)0), 0);
    if (VAR_4) {
        VAR_7[2].name = VAR_4->value;
        VAR_7[2].type = VAR_1;
        VAR_7[2].instance = 2;
        VAR_7[1].ref = &VAR_7[2];
        VAR_8 = 3;
    }

    FUNC_5(VAR_2);
    FUNC_3(VAR_2);
    FUNC_1(VAR_2, VAR_7, VAR_8);
    VAR_3->track_instance_count = 0;
    for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++)
        FUNC_4(VAR_2, &VAR_7[VAR_6]);
    FUNC_2(VAR_2);
    return 0;
}
