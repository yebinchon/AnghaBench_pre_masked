
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int queue; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gint ;
struct TYPE_6__ {int pass_count; scalar_t__ pass_id; int seconds; double rate_cur; double progress; int minutes; int hours; int rate_avg; int pass; int unique_id; } ;
typedef TYPE_2__ ghb_instance_status_t ;
typedef int gchar ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 int * FUNC_3 (int ,int,int,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;

__attribute__((used)) static gchar*
FUNC_6(signal_user_data_t *VAR_1, ghb_instance_status_t *VAR_2)
{
    gchar *VAR_3, *VAR_4, *VAR_5;
    gint VAR_6;
    gint VAR_7;

    VAR_6 = FUNC_4(VAR_1->queue);
    VAR_7 = FUNC_5(VAR_1->queue, VAR_2->unique_id, ((void*)0));
    if (VAR_6 > 1)
    {
        VAR_4 = FUNC_3(FUNC_0("job %d of %d, "), VAR_7+1, VAR_6);
    }
    else
    {
        VAR_4 = FUNC_2("");
    }
    if (VAR_2->pass_count > 1)
    {
        if (VAR_2->pass_id == VAR_0)
        {
            VAR_3 = FUNC_3(FUNC_0("pass %d (subtitle scan) of %d, "),
                VAR_2->pass, VAR_2->pass_count);
        }
        else
        {
            VAR_3 = FUNC_3(FUNC_0("pass %d of %d, "),
                VAR_2->pass, VAR_2->pass_count);
        }
    }
    else
    {
        VAR_3 = FUNC_2("");
    }
    if(VAR_2->seconds > -1)
    {
        if (VAR_2->rate_cur > 0.0)
        {
            VAR_5= FUNC_3(
                FUNC_0("Encoding: %s%s%.2f %%"
                " (%.2f fps, avg %.2f fps, ETA %02dh%02dm%02ds)"),
                *VAR_4, *VAR_3,
                100.0 * VAR_2->progress,
                VAR_2->rate_cur, VAR_2->rate_avg, VAR_2->hours,
                VAR_2->minutes, VAR_2->seconds );
        }
        else
        {
            VAR_5= FUNC_3(
                FUNC_0("Encoding: %s%s%.2f %%"
                " (ETA %02dh%02dm%02ds)"),
                *VAR_4, *VAR_3,
                100.0 * VAR_2->progress,
                VAR_2->hours, VAR_2->minutes, VAR_2->seconds );
        }
    }
    else
    {
        VAR_5= FUNC_3(
            FUNC_0("Encoding: %s%s%.2f %%"),
            *VAR_4, *VAR_3,
            100.0 * VAR_2->progress );
    }
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
    return VAR_5;
}
