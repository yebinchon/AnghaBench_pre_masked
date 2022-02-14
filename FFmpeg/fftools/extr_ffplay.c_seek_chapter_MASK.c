
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {TYPE_1__* ic; } ;
typedef TYPE_2__ VideoState ;
struct TYPE_9__ {int time_base; int start; } ;
struct TYPE_7__ {int nb_chapters; TYPE_3__** chapters; } ;
typedef TYPE_3__ AVChapter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ,int ,int ) ;
 int FUNC_2 (int *,int ,char*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(VideoState *VAR_3, int VAR_4)
{
    int64_t VAR_5 = FUNC_4(VAR_3) * VAR_1;
    int VAR_6;

    if (!VAR_3->ic->nb_chapters)
        return;


    for (VAR_6 = 0; VAR_6 < VAR_3->ic->nb_chapters; VAR_6++) {
        AVChapter *VAR_7 = VAR_3->ic->chapters[VAR_6];
        if (FUNC_1(VAR_5, VAR_2, VAR_7->start, VAR_7->time_base) < 0) {
            VAR_6--;
            break;
        }
    }

    VAR_6 += VAR_4;
    VAR_6 = FUNC_0(VAR_6, 0);
    if (VAR_6 >= VAR_3->ic->nb_chapters)
        return;

    FUNC_2(((void*)0), VAR_0, "Seeking to chapter %d.\n", VAR_6);
    FUNC_5(VAR_3, FUNC_3(VAR_3->ic->chapters[VAR_6]->start, VAR_3->ic->chapters[VAR_6]->time_base,
                                 VAR_2), 0, 0);
}
