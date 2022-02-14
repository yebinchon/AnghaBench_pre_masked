
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_9__ {int nb_streams; TYPE_3__* priv_data; } ;
struct TYPE_8__ {TYPE_2__* tracks; } ;
struct TYPE_6__ {scalar_t__ size; int data; } ;
struct TYPE_7__ {scalar_t__ tag; TYPE_1__ cover_image; int st; } ;
typedef TYPE_2__ MOVTrack ;
typedef TYPE_3__ MOVMuxContext ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_6(AVIOContext *VAR_0, AVFormatContext *VAR_1)
{
    MOVMuxContext *VAR_2 = VAR_1->priv_data;
    int64_t VAR_3 = 0;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1->nb_streams; VAR_4++) {
        MOVTrack *VAR_5 = &VAR_2->tracks[VAR_4];

        if (!FUNC_4(VAR_5->st) || VAR_5->cover_image.size <= 0)
            continue;

        if (!VAR_3) {
            VAR_3 = FUNC_0(VAR_0);
            FUNC_1(VAR_0, 0);
            FUNC_3(VAR_0, "covr");
        }
        FUNC_1(VAR_0, 16 + VAR_5->cover_image.size);
        FUNC_3(VAR_0, "data");
        FUNC_1(VAR_0, VAR_5->tag);
        FUNC_1(VAR_0 , 0);
        FUNC_2(VAR_0, VAR_5->cover_image.data, VAR_5->cover_image.size);
    }

    return VAR_3 ? FUNC_5(VAR_0, VAR_3) : 0;
}
