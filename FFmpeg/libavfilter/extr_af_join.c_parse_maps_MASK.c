
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {char* map; int channel_layout; int inputs; TYPE_1__* channels; } ;
struct TYPE_6__ {int input; int in_channel; int in_channel_idx; } ;
typedef TYPE_2__ JoinContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_3__*,int ,char*,...) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_2)
{
    JoinContext *VAR_3 = VAR_2->priv;
    char VAR_4 = '|';
    char *VAR_5 = VAR_3->map;

    while (VAR_5 && *VAR_5) {
        char *VAR_6, *VAR_7, *VAR_8;
        uint64_t VAR_9 = 0, VAR_10 = 0;
        int VAR_11, VAR_12, VAR_13;

        VAR_7 = FUNC_4(VAR_5, VAR_4);
        if (VAR_7)
            *VAR_7++ = 0;


        if (!(VAR_6 = FUNC_4(VAR_5, '-'))) {
            FUNC_3(VAR_2, VAR_0, "Missing separator '-' in channel "
                   "map '%s'\n", VAR_5);
            return FUNC_0(VAR_1);
        }
        *VAR_6++ = 0;
        if (!(VAR_10 = FUNC_0(VAR_6))) { FUNC_3(VAR_2, VAR_0, "Invalid " "output" " channel: %s.\n", VAR_6); return FUNC_0(VAR_1); } if (FUNC_0(VAR_10) != 1) { FUNC_3(VAR_2, VAR_0, "Channel map describes more than one " "output" " channel.\n"); return FUNC_0(VAR_1); };
        if (!(VAR_10 & VAR_3->channel_layout)) {
            FUNC_3(VAR_2, VAR_0, "Output channel '%s' is not present in "
                   "requested channel layout.\n", VAR_6);
            return FUNC_0(VAR_1);
        }

        VAR_12 = FUNC_2(VAR_3->channel_layout,
                                                         VAR_10);
        if (VAR_3->channels[VAR_12].input >= 0) {
            FUNC_3(VAR_2, VAR_0, "Multiple maps for output channel "
                   "'%s'.\n", VAR_6);
            return FUNC_0(VAR_1);
        }


        VAR_11 = FUNC_5(VAR_5, &VAR_5, 0);
        if (VAR_11 < 0 || VAR_11 >= VAR_3->inputs) {
            FUNC_3(VAR_2, VAR_0, "Invalid input stream index: %d.\n",
                   VAR_11);
            return FUNC_0(VAR_1);
        }

        if (*VAR_5)
            VAR_5++;

        VAR_13 = FUNC_5(VAR_5, &VAR_8, 0);
        if (VAR_8 == VAR_5) {


            if (!(VAR_9 = FUNC_0(VAR_5))) { FUNC_3(VAR_2, VAR_0, "Invalid " "input" " channel: %s.\n", VAR_5); return FUNC_0(VAR_1); } if (FUNC_0(VAR_9) != 1) { FUNC_3(VAR_2, VAR_0, "Channel map describes more than one " "input" " channel.\n"); return FUNC_0(VAR_1); };
        }

        VAR_3->channels[VAR_12].input = VAR_11;
        if (VAR_9)
            VAR_3->channels[VAR_12].in_channel = VAR_9;
        else
            VAR_3->channels[VAR_12].in_channel_idx = VAR_13;

        VAR_5 = VAR_7;
    }
    return 0;
}
