
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {double time; int flags; struct TYPE_10__* next; void* arg; void* command; } ;
struct TYPE_9__ {char* name; TYPE_4__* command_queue; TYPE_1__* filter; } ;
struct TYPE_8__ {int nb_filters; TYPE_3__** filters; } ;
struct TYPE_7__ {char* name; } ;
typedef TYPE_2__ AVFilterGraph ;
typedef TYPE_3__ AVFilterContext ;
typedef TYPE_4__ AVFilterCommand ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int) ;
 void* FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*) ;

int FUNC_4(AVFilterGraph *VAR_2, const char *VAR_3, const char *VAR_4, const char *VAR_5, int VAR_6, double VAR_7)
{
    int VAR_8;

    if(!VAR_2)
        return 0;

    for (VAR_8 = 0; VAR_8 < VAR_2->nb_filters; VAR_8++) {
        AVFilterContext *VAR_9 = VAR_2->filters[VAR_8];
        if(VAR_9 && (!FUNC_3(VAR_3, "all") || !FUNC_3(VAR_3, VAR_9->name) || !FUNC_3(VAR_3, VAR_9->filter->name))){
            AVFilterCommand **VAR_10 = &VAR_9->command_queue, *VAR_11;
            while (*VAR_10 && (*VAR_10)->time <= VAR_7)
                VAR_10 = &(*VAR_10)->next;
            VAR_11 = *VAR_10;
            *VAR_10 = FUNC_1(sizeof(AVFilterCommand));
            if (!*VAR_10)
                return FUNC_0(VAR_1);

            (*VAR_10)->command = FUNC_2(VAR_4);
            (*VAR_10)->arg = FUNC_2(VAR_5);
            (*VAR_10)->time = VAR_7;
            (*VAR_10)->flags = VAR_6;
            (*VAR_10)->next = VAR_11;
            if(VAR_6 & VAR_0)
                return 0;
        }
    }

    return 0;
}
