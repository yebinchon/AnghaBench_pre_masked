
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int text; } ;
typedef TYPE_5__ json_error_t ;
struct TYPE_11__ {int progress; } ;
struct TYPE_10__ {int error; int seconds; int paused; int minutes; int hours; int eta_seconds; int rate_avg; int rate_cur; int pass_count; int pass; int pass_id; int progress; } ;
struct TYPE_9__ {int title_count; int title_cur; int preview_count; int preview_cur; int progress; } ;
struct TYPE_12__ {TYPE_3__ muxing; TYPE_2__ working; TYPE_1__ scanning; } ;
struct TYPE_14__ {int state; TYPE_4__ param; int sequence_id; } ;
typedef TYPE_6__ hb_state_t ;
typedef int hb_dict_t ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (TYPE_5__*,int ,char*,char*,int ,...) ;

hb_dict_t* FUNC_5( hb_state_t * VAR_0)
{
    const char * VAR_1;
    hb_dict_t *VAR_2 = ((void*)0);
    json_error_t VAR_3;

    switch (VAR_0->state)
    {
    case 135:
        VAR_1 = "IDLE";
        break;
    case 131:
        VAR_1 = "SCANNING";
        break;
    case 132:
        VAR_1 = "SCANDONE";
        break;
    case 128:
        VAR_1 = "WORKING";
        break;
    case 133:
        VAR_1 = "PAUSED";
        break;
    case 130:
        VAR_1 = "SEARCHING";
        break;
    case 129:
        VAR_1 = "WORKDONE";
        break;
    case 134:
        VAR_1 = "MUXING";
        break;
    default:
        VAR_1 = "UNKNOWN";
        break;
    }

    switch (VAR_0->state)
    {
    case 135:
        VAR_2 = FUNC_4(&VAR_3, 0, "{s:o}",
                    "State", FUNC_3(VAR_1));
        break;
    case 131:
    case 132:
        VAR_2 = FUNC_4(&VAR_3, 0,
            "{s:o, s{s:o, s:o, s:o, s:o, s:o, s:o}}",
            "State", FUNC_3(VAR_1),
            "Scanning",
                "SequenceID", FUNC_2(VAR_0->sequence_id),
                "Progress", FUNC_1(VAR_0->param.scanning.progress),
                "Preview", FUNC_2(VAR_0->param.scanning.preview_cur),
                "PreviewCount", FUNC_2(VAR_0->param.scanning.preview_count),
                "Title", FUNC_2(VAR_0->param.scanning.title_cur),
                "TitleCount", FUNC_2(VAR_0->param.scanning.title_count));
        break;
    case 128:
    case 133:
    case 130:
        VAR_2 = FUNC_4(&VAR_3, 0,
            "{s:o, s{s:o, s:o, s:o, s:o, s:o, s:o,"
                   " s:o, s:o, s:o, s:o, s:o, s:o}}",
            "State", FUNC_3(VAR_1),
            "Working",
                "Progress", FUNC_1(VAR_0->param.working.progress),
                "PassID", FUNC_2(VAR_0->param.working.pass_id),
                "Pass", FUNC_2(VAR_0->param.working.pass),
                "PassCount", FUNC_2(VAR_0->param.working.pass_count),
                "Rate", FUNC_1(VAR_0->param.working.rate_cur),
                "RateAvg", FUNC_1(VAR_0->param.working.rate_avg),
                "ETASeconds", FUNC_2(VAR_0->param.working.eta_seconds),
                "Hours", FUNC_2(VAR_0->param.working.hours),
                "Minutes", FUNC_2(VAR_0->param.working.minutes),
                "Paused", FUNC_2(VAR_0->param.working.paused),
                "Seconds", FUNC_2(VAR_0->param.working.seconds),
                "SequenceID", FUNC_2(VAR_0->sequence_id));
        break;
    case 129:
        VAR_2 = FUNC_4(&VAR_3, 0,
            "{s:o, s{s:o, s:o}}",
            "State", FUNC_3(VAR_1),
            "WorkDone",
                "SequenceID", FUNC_2(VAR_0->sequence_id),
                "Error", FUNC_2(VAR_0->param.working.error));
        break;
    case 134:
        VAR_2 = FUNC_4(&VAR_3, 0,
            "{s:o, s{s:o}}",
            "State", FUNC_3(VAR_1),
            "Muxing",
                "Progress", FUNC_1(VAR_0->param.muxing.progress));
        break;
    default:
        VAR_2 = FUNC_4(&VAR_3, 0, "{s:o}",
                    "State", FUNC_3(VAR_1));
        FUNC_0("hb_state_to_dict: unrecognized state %d", VAR_0->state);
        break;
    }
    if (VAR_2 == ((void*)0))
    {
        FUNC_0("json pack failure: %s", VAR_3.text);
    }
    return VAR_2;
}
