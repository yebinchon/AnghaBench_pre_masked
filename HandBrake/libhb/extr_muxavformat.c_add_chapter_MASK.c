
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_9__ {int time_base; TYPE_1__* oc; } ;
typedef TYPE_2__ hb_mux_object_t ;
struct TYPE_10__ {int id; int metadata; void* end; void* start; int time_base; } ;
struct TYPE_8__ {int nb_chapters; TYPE_3__** chapters; } ;
typedef TYPE_3__ AVChapter ;


 int FUNC_0 (int *,char*,char*,int ) ;
 TYPE_3__* FUNC_1 (int) ;
 TYPE_3__** FUNC_2 (TYPE_3__**,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(hb_mux_object_t *VAR_0, int64_t VAR_1, int64_t VAR_2, char * VAR_3)
{
    AVChapter *VAR_4;
    AVChapter **VAR_5;
    int VAR_6 = VAR_0->oc->nb_chapters;

    VAR_6++;
    VAR_5 = FUNC_2(VAR_0->oc->chapters, VAR_6 * sizeof(AVChapter*));
    if (VAR_5 == ((void*)0))
    {
        FUNC_3("chapter array: malloc failure");
        return -1;
    }

    VAR_4 = FUNC_1(sizeof(AVChapter));
    if (VAR_4 == ((void*)0))
    {
        FUNC_3("chapter: malloc failure");
        return -1;
    }

    VAR_0->oc->chapters = VAR_5;
    VAR_0->oc->chapters[VAR_6-1] = VAR_4;
    VAR_0->oc->nb_chapters = VAR_6;

    VAR_4->id = VAR_6;
    VAR_4->time_base = VAR_0->time_base;




    VAR_4->start = VAR_1;
    VAR_4->end = VAR_2;
    FUNC_0(&VAR_4->metadata, "title", VAR_3, 0);

    return 0;
}
