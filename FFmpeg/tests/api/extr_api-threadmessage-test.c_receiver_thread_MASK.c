
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct receiver_data {int workload; int queue; int id; } ;
struct message {scalar_t__ magic; TYPE_2__* frame; } ;
struct TYPE_5__ {int * metadata; } ;
struct TYPE_4__ {int value; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (int *,int ,char*,int,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct message*,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;

__attribute__((used)) static void *FUNC_9(void *VAR_3)
{
    int VAR_4, VAR_5 = 0;
    struct receiver_data *VAR_6 = VAR_3;

    for (VAR_4 = 0; VAR_4 < VAR_6->workload; VAR_4++) {
        if (FUNC_8() % VAR_6->workload < VAR_6->workload / 10) {
            FUNC_3(((void*)0), VAR_1, "receiver #%d: flushing the queue, "
                   "discarding %d message(s)\n", VAR_6->id,
                   FUNC_5(VAR_6->queue));
            FUNC_4(VAR_6->queue);
        } else {
            struct message VAR_7;
            AVDictionary *VAR_8;
            AVDictionaryEntry *VAR_9;

            VAR_5 = FUNC_6(VAR_6->queue, &VAR_7, 0);
            if (VAR_5 < 0)
                break;
            FUNC_0(VAR_7.magic == VAR_2);
            VAR_8 = VAR_7.frame->metadata;
            VAR_9 = FUNC_1(VAR_8, "sig", ((void*)0), 0);
            FUNC_3(((void*)0), VAR_1, "got \"%s\" (%p)\n", VAR_9->value, VAR_7.frame);
            FUNC_2(&VAR_7.frame);
        }
    }

    FUNC_3(((void*)0), VAR_1, "consumed enough (%d), stop\n", VAR_4);
    FUNC_7(VAR_6->queue, VAR_5 < 0 ? VAR_5 : VAR_0);

    return ((void*)0);
}
