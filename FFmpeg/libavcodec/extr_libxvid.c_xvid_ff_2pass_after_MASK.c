
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int quant; int kblks; int mblks; int ublks; int length; int hlength; } ;
struct TYPE_5__ {int type; TYPE_1__ stats; } ;
typedef TYPE_2__ xvid_plg_data_t ;
struct xvid_context {char* twopassbuffer; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,char*,char,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct xvid_context *VAR_1,
                               xvid_plg_data_t *VAR_2)
{
    char *VAR_3 = VAR_1->twopassbuffer;
    const char *VAR_4 = " ipbs";
    char VAR_5;


    if (!VAR_3)
        return VAR_0;


    if (VAR_2->type < 5 && VAR_2->type > 0)
        VAR_5 = VAR_4[VAR_2->type];
    else
        return VAR_0;

    FUNC_2(FUNC_0(VAR_3), FUNC_1(VAR_3),
             "%c %d %d %d %d %d %d\n",
             VAR_5, VAR_2->stats.quant, VAR_2->stats.kblks,
             VAR_2->stats.mblks, VAR_2->stats.ublks,
             VAR_2->stats.length, VAR_2->stats.hlength);

    return 0;
}
