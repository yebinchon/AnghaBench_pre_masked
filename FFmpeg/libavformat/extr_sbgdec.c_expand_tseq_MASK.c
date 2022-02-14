
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ t; } ;
struct sbg_script_tseq {int lock; int fade; TYPE_1__ ts; int name; int name_len; } ;
struct sbg_script_event {int elements; int nb_elements; int fade; scalar_t__ ts; } ;
struct sbg_script_definition {char type; int elements; int nb_elements; int name; int name_len; } ;
struct sbg_script {int nb_def; int nb_events; int events; struct sbg_script_tseq* block_tseq; struct sbg_script_definition* def; } ;
typedef int int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sbg_script_event* FUNC_1 (void**,int,int *,int*) ;
 int FUNC_2 (void*,int ,char*,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_3, struct sbg_script *VAR_4, int *VAR_5,
                       int64_t VAR_6, struct sbg_script_tseq *VAR_7)
{
    int VAR_8, VAR_9;
    struct sbg_script_definition *VAR_10;
    struct sbg_script_tseq *VAR_11;
    struct sbg_script_event *VAR_12;

    if (VAR_7->lock++) {
        FUNC_2(VAR_3, VAR_0, "Recursion loop on \"%.*s\"\n",
               VAR_7->name_len, VAR_7->name);
        return FUNC_0(VAR_1);
    }
    VAR_6 += VAR_7->ts.t;
    for (VAR_8 = 0; VAR_8 < VAR_4->nb_def; VAR_8++) {
        if (VAR_4->def[VAR_8].name_len == VAR_7->name_len &&
            !FUNC_3(VAR_4->def[VAR_8].name, VAR_7->name, VAR_7->name_len))
            break;
    }
    if (VAR_8 >= VAR_4->nb_def) {
        FUNC_2(VAR_3, VAR_0, "Tone-set \"%.*s\" not defined\n",
               VAR_7->name_len, VAR_7->name);
        return FUNC_0(VAR_1);
    }
    VAR_10 = &VAR_4->def[VAR_8];
    if (VAR_10->type == 'B') {
        VAR_11 = VAR_4->block_tseq + VAR_10->elements;
        for (VAR_8 = 0; VAR_8 < VAR_10->nb_elements; VAR_8++) {
            VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_11[VAR_8]);
            if (VAR_9 < 0)
                return VAR_9;
        }
    } else {
        VAR_12 = FUNC_1((void **)&VAR_4->events, sizeof(*VAR_12),
                              &VAR_4->nb_events, VAR_5);
        if (!VAR_12)
            return FUNC_0(VAR_2);
        VAR_12->ts = VAR_7->ts.t;
        VAR_12->elements = VAR_10->elements;
        VAR_12->nb_elements = VAR_10->nb_elements;
        VAR_12->fade = VAR_7->fade;
    }
    VAR_7->lock--;
    return 0;
}
