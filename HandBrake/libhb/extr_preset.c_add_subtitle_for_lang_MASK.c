
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int* used; int one_burned; int burn_first; int make_default; scalar_t__ burn_foreign; scalar_t__ burn_bd; scalar_t__ burn_dvd; scalar_t__ one; } ;
typedef TYPE_2__ subtitle_behavior_t ;
typedef int hb_value_array_t ;
struct TYPE_11__ {int list_subtitle; } ;
typedef TYPE_3__ hb_title_t ;
struct TYPE_9__ {scalar_t__ default_track; } ;
struct TYPE_12__ {scalar_t__ source; int name; TYPE_1__ config; } ;
typedef TYPE_4__ hb_subtitle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int,int ,int,int ) ;
 int FUNC_1 (TYPE_3__*,char const*,int) ;
 int FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(hb_value_array_t *VAR_2, hb_title_t *VAR_3,
                                  int VAR_4, const char *VAR_5,
                                  subtitle_behavior_t *VAR_6)
{
    int VAR_7;
    for (VAR_7 = FUNC_1(VAR_3, VAR_5, 0);
         VAR_7 >= 0;
         VAR_7 = VAR_6->one ? -1 : FUNC_1(VAR_3, VAR_5, VAR_7 + 1))
    {
        if (VAR_6->used[VAR_7])
        {
            if (VAR_6->one)
                break;
            continue;
        }
        int VAR_8, VAR_9;
        hb_subtitle_t *VAR_10;
        VAR_10 = FUNC_3(VAR_3->list_subtitle, VAR_7);
        VAR_8 = !VAR_6->one_burned &&
               ((VAR_10->source == VAR_1 && VAR_6->burn_dvd) ||
                (VAR_10->source == VAR_0 && VAR_6->burn_bd) ||
                !FUNC_4(VAR_10->source, VAR_4) ||
                VAR_6->burn_first || VAR_6->burn_foreign);



        VAR_9 = (!VAR_8 && VAR_6->make_default) ||
                       (!FUNC_2(VAR_2) &&
                        VAR_10->config.default_track);
        VAR_6->burn_first &= !VAR_8;
        VAR_6->one_burned |= VAR_8;
        VAR_6->used[VAR_7] = 1;
        FUNC_0(VAR_2, VAR_7, VAR_9, 0 , VAR_8, VAR_10->name);
    }
}
