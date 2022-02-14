
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {int pb; } ;
struct TYPE_9__ {int metadata; TYPE_1__* index_entries; int nb_index_entries; TYPE_2__* priv_data; } ;
struct TYPE_8__ {int pb; } ;
struct TYPE_7__ {int pos; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char*,int,int,int,char,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2, AVStream *VAR_3)
{
    MOVStreamContext *VAR_4 = VAR_3->priv_data;
    char VAR_5[VAR_0];
    int64_t VAR_6 = FUNC_4(VAR_4->pb);
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

    if (!VAR_3->nb_index_entries)
        return -1;

    FUNC_2(VAR_4->pb, VAR_3->index_entries->pos, VAR_1);
    FUNC_3(VAR_2->pb, 13);
    VAR_7 = FUNC_1(VAR_2->pb);
    VAR_8 = FUNC_1(VAR_2->pb);
    VAR_9 = FUNC_1(VAR_2->pb);
    VAR_11 = FUNC_1(VAR_2->pb);
    VAR_10 = FUNC_1(VAR_2->pb);
    FUNC_5(VAR_5, VAR_0, "%02d:%02d:%02d%c%02d",
             VAR_7, VAR_8, VAR_9, VAR_11 ? ';' : ':', VAR_10);
    FUNC_0(&VAR_3->metadata, "timecode", VAR_5, 0);

    FUNC_2(VAR_4->pb, VAR_6, VAR_1);
    return 0;
}
