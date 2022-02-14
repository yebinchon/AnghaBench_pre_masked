
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_7__ {int n; void* duration; void* start_time; int file; } ;
struct TYPE_6__ {int nb_fragments; int fragments_size; int fragment_index; TYPE_2__** fragments; } ;
typedef TYPE_1__ OutputStream ;
typedef TYPE_2__ Fragment ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__***,int,int) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_4(OutputStream *VAR_1, const char *VAR_2,
                        int64_t VAR_3, int64_t VAR_4)
{
    Fragment *VAR_5;
    if (VAR_4 == 0)
        VAR_4 = 1;
    if (VAR_1->nb_fragments >= VAR_1->fragments_size) {
        int VAR_6;
        VAR_1->fragments_size = (VAR_1->fragments_size + 1) * 2;
        if ((VAR_6 = FUNC_2(&VAR_1->fragments, VAR_1->fragments_size,
                                     sizeof(*VAR_1->fragments))) < 0) {
            VAR_1->fragments_size = 0;
            VAR_1->nb_fragments = 0;
            return VAR_6;
        }
    }
    VAR_5 = FUNC_1(sizeof(*VAR_5));
    if (!VAR_5)
        return FUNC_0(VAR_0);
    FUNC_3(VAR_5->file, VAR_2, sizeof(VAR_5->file));
    VAR_5->start_time = VAR_3;
    VAR_5->duration = VAR_4;
    VAR_5->n = VAR_1->fragment_index;
    VAR_1->fragments[VAR_1->nb_fragments++] = VAR_5;
    VAR_1->fragment_index++;
    return 0;
}
