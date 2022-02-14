
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__** streams; } ;
struct TYPE_14__ {TYPE_2__** streams; } ;
struct TYPE_13__ {scalar_t__ stream_index; scalar_t__ size; int * data; } ;
struct TYPE_12__ {int time_base; } ;
struct TYPE_11__ {int time_base; } ;
typedef TYPE_3__ AVPacket ;
typedef int AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ,int *) ;
 int VAR_2 ;
 int FUNC_7 (int ,char*,char*) ;
 TYPE_5__* VAR_3 ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static int FUNC_8(AVFrame *VAR_7)
{
    int VAR_8 = 0;
    AVPacket VAR_9;

    FUNC_2(&VAR_9);
    VAR_9.data = ((void*)0);
    VAR_9.size = 0;

    if ((VAR_8 = FUNC_6(VAR_2, VAR_7)) < 0) {
        FUNC_7(VAR_5, "Error during encoding. Error code: %s\n", FUNC_1(VAR_8));
        goto end;
    }
    while (1) {
        VAR_8 = FUNC_5(VAR_2, &VAR_9);
        if (VAR_8)
            break;

        VAR_9.stream_index = 0;
        FUNC_4(&VAR_9, VAR_3->streams[VAR_6]->time_base,
                             VAR_4->streams[0]->time_base);
        VAR_8 = FUNC_3(VAR_4, &VAR_9);
        if (VAR_8 < 0) {
            FUNC_7(VAR_5, "Error during writing data to output file. "
                    "Error code: %s\n", FUNC_1(VAR_8));
            return -1;
        }
    }

end:
    if (VAR_8 == VAR_0)
        return 0;
    VAR_8 = ((VAR_8 == FUNC_0(VAR_1)) ? 0:-1);
    return VAR_8;
}
