
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ expected_readorder; scalar_t__ cache_size; TYPE_1__* dialogue_cache; TYPE_1__* last_added_dialogue; } ;
struct TYPE_8__ {int pb; TYPE_3__* priv_data; } ;
struct TYPE_7__ {scalar_t__ readorder; int * prev; int line; struct TYPE_7__* next; } ;
typedef TYPE_1__ DialogueLine ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int,scalar_t__,...) ;
 int FUNC_3 (int ,char*,int ,char*) ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_2, int VAR_3)
{
    int VAR_4 = 0;
    ASSContext *VAR_5 = VAR_2->priv_data;
    DialogueLine *VAR_6 = VAR_5->dialogue_cache;

    while (VAR_6 && (VAR_6->readorder == VAR_5->expected_readorder || VAR_3)) {
        DialogueLine *VAR_7 = VAR_6->next;
        if (VAR_6->readorder != VAR_5->expected_readorder) {
            FUNC_2(VAR_2, VAR_1, "ReadOrder gap found between %d and %d\n",
                   VAR_5->expected_readorder, VAR_6->readorder);
            VAR_5->expected_readorder = VAR_6->readorder;
        }
        FUNC_3(VAR_2->pb, "Dialogue: ", VAR_6->line, "\r\n");
        if (VAR_6 == VAR_5->last_added_dialogue)
            VAR_5->last_added_dialogue = VAR_7;
        FUNC_1(&VAR_6->line);
        FUNC_0(VAR_6);
        if (VAR_7)
            VAR_7->prev = ((void*)0);
        VAR_6 = VAR_5->dialogue_cache = VAR_7;
        VAR_5->expected_readorder++;
        VAR_4++;
    }
    VAR_5->cache_size -= VAR_4;
    if (VAR_4 > 1)
        FUNC_2(VAR_2, VAR_0, "wrote %d ASS lines, cached dialogues: %d, waiting for event id %d\n",
               VAR_4, VAR_5->cache_size, VAR_5->expected_readorder);
}
