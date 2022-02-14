
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int temp_filename ;
typedef int int64_t ;
typedef int filename ;
struct TYPE_16__ {char* url; int (* io_open ) (TYPE_5__*,int **,char*,int ,int *) ;TYPE_1__** streams; TYPE_4__* priv_data; } ;
struct TYPE_15__ {scalar_t__ window_size; } ;
struct TYPE_14__ {size_t first_stream; int nb_fragments; int fragment_index; TYPE_2__** fragments; int last_ts; } ;
struct TYPE_13__ {int n; int duration; int start_time; } ;
struct TYPE_12__ {int id; } ;
typedef TYPE_3__ OutputStream ;
typedef TYPE_4__ HDSContext ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (char,float,char,char) ;
 int FUNC_2 (TYPE_5__*,int ,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_5__*,int **) ;
 int FUNC_9 (char*,char*,TYPE_5__*) ;
 int FUNC_10 (char*,int,char*,char*,int) ;
 int FUNC_11 (TYPE_5__*,int **,char*,int ,int *) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_2, OutputStream *VAR_3, int VAR_4)
{
    HDSContext *VAR_5 = VAR_2->priv_data;
    AVIOContext *VAR_6;
    char VAR_7[1024], VAR_8[1024];
    int VAR_9, VAR_10;
    int64_t VAR_11, VAR_12;
    int VAR_13 = 0, VAR_14;
    int VAR_15 = VAR_2->streams[VAR_3->first_stream]->id;
    int64_t VAR_16 = 0;
    if (VAR_5->window_size)
        VAR_13 = FUNC_0(VAR_3->nb_fragments - VAR_5->window_size, 0);
    VAR_14 = VAR_3->nb_fragments - VAR_13;
    if (VAR_4)
        VAR_16 = VAR_3->last_ts;
    else if (VAR_3->nb_fragments)
        VAR_16 = VAR_3->fragments[VAR_3->nb_fragments - 1]->start_time;

    FUNC_10(VAR_7, sizeof(VAR_7),
             "%s/stream%d.abst", VAR_2->url, VAR_15);
    FUNC_10(VAR_8, sizeof(VAR_8),
             "%s/stream%d.abst.tmp", VAR_2->url, VAR_15);
    VAR_10 = VAR_2->io_open(VAR_2, &VAR_6, VAR_8, VAR_0, ((void*)0));
    if (VAR_10 < 0) {
        FUNC_2(VAR_2, VAR_1, "Unable to open %s for writing\n", VAR_8);
        return VAR_10;
    }
    FUNC_5(VAR_6, 0);
    FUNC_7(VAR_6, FUNC_1('a','b','s','t'));
    FUNC_5(VAR_6, 0);
    FUNC_5(VAR_6, VAR_3->fragment_index - 1);
    FUNC_4(VAR_6, VAR_4 ? 0 : 0x20);
    FUNC_5(VAR_6, 1000);
    FUNC_6(VAR_6, VAR_16);
    FUNC_6(VAR_6, 0);
    FUNC_4(VAR_6, 0);
    FUNC_4(VAR_6, 0);
    FUNC_4(VAR_6, 0);
    FUNC_4(VAR_6, 0);
    FUNC_4(VAR_6, 0);
    FUNC_4(VAR_6, 1);
    VAR_11 = FUNC_3(VAR_6);
    FUNC_5(VAR_6, 0);
    FUNC_7(VAR_6, FUNC_1('a','s','r','t'));
    FUNC_5(VAR_6, 0);
    FUNC_4(VAR_6, 0);
    FUNC_5(VAR_6, 1);
    FUNC_5(VAR_6, 1);
    FUNC_5(VAR_6, VAR_4 ? (VAR_3->fragment_index - 1) : 0xffffffff);
    FUNC_12(VAR_6, VAR_11);
    FUNC_4(VAR_6, 1);
    VAR_12 = FUNC_3(VAR_6);
    FUNC_5(VAR_6, 0);
    FUNC_7(VAR_6, FUNC_1('a','f','r','t'));
    FUNC_5(VAR_6, 0);
    FUNC_5(VAR_6, 1000);
    FUNC_4(VAR_6, 0);
    FUNC_5(VAR_6, VAR_14);
    for (VAR_9 = VAR_13; VAR_9 < VAR_3->nb_fragments; VAR_9++) {
        FUNC_5(VAR_6, VAR_3->fragments[VAR_9]->n);
        FUNC_6(VAR_6, VAR_3->fragments[VAR_9]->start_time);
        FUNC_5(VAR_6, VAR_3->fragments[VAR_9]->duration);
    }
    FUNC_12(VAR_6, VAR_12);
    FUNC_12(VAR_6, 0);
    FUNC_8(VAR_2, &VAR_6);
    return FUNC_9(VAR_8, VAR_7, VAR_2);
}
