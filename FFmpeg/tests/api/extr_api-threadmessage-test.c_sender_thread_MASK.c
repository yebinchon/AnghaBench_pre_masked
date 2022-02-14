
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sender_data {int workload; int queue; int id; } ;
struct message {TYPE_1__* frame; int magic; } ;
struct TYPE_4__ {int width; int height; int format; int * metadata; } ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_1 (char*,int,int,int ) ;
 int FUNC_2 (int **,char*,char*,int ) ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *,int ,char*,int ,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct message*,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 () ;

__attribute__((used)) static void *FUNC_12(void *VAR_6)
{
    int VAR_7, VAR_8 = 0;
    struct sender_data *VAR_9 = VAR_6;

    FUNC_7(((void*)0), VAR_2, "sender #%d: workload=%d\n", VAR_9->id, VAR_9->workload);
    for (VAR_7 = 0; VAR_7 < VAR_9->workload; VAR_7++) {
        if (FUNC_11() % VAR_9->workload < VAR_9->workload / 10) {
            FUNC_7(((void*)0), VAR_2, "sender #%d: flushing the queue\n", VAR_9->id);
            FUNC_8(VAR_9->queue);
        } else {
            char *VAR_10;
            AVDictionary *VAR_11 = ((void*)0);
            struct message VAR_12 = {
                .magic = VAR_5,
                .frame = FUNC_4(),
            };

            if (!VAR_12.frame) {
                VAR_8 = FUNC_0(VAR_4);
                break;
            }


            VAR_10 = FUNC_1("frame %d/%d from sender %d",
                              VAR_7 + 1, VAR_9->workload, VAR_9->id);
            if (!VAR_10) {
                FUNC_5(&VAR_12.frame);
                VAR_8 = FUNC_0(VAR_4);
                break;
            }
            VAR_8 = FUNC_2(&VAR_11, "sig", VAR_10, VAR_1);
            if (VAR_8 < 0) {
                FUNC_5(&VAR_12.frame);
                break;
            }
            VAR_12.frame->metadata = VAR_11;


            VAR_12.frame->format = VAR_3;
            VAR_12.frame->width = 320;
            VAR_12.frame->height = 240;
            VAR_8 = FUNC_6(VAR_12.frame, 32);
            if (VAR_8 < 0) {
                FUNC_5(&VAR_12.frame);
                break;
            }


            FUNC_7(((void*)0), VAR_2, "sender #%d: sending my work (%d/%d frame:%p)\n",
                   VAR_9->id, VAR_7 + 1, VAR_9->workload, VAR_12.frame);
            VAR_8 = FUNC_9(VAR_9->queue, &VAR_12, 0);
            if (VAR_8 < 0) {
                FUNC_5(&VAR_12.frame);
                break;
            }
        }
    }
    FUNC_7(((void*)0), VAR_2, "sender #%d: my work is done here (%s)\n",
           VAR_9->id, FUNC_3(VAR_8));
    FUNC_10(VAR_9->queue, VAR_8 < 0 ? VAR_8 : VAR_0);
    return ((void*)0);
}
