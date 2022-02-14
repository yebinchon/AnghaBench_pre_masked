
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nb_programs; TYPE_1__** programs; } ;
struct TYPE_5__ {unsigned int id; int pcr_pid; int pmt_version; } ;
typedef TYPE_1__ AVProgram ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*,unsigned int,int,int,int,unsigned int) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_1, unsigned int VAR_2,
                                   unsigned int VAR_3, int VAR_4)
{
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_1->nb_programs; VAR_5++) {
        AVProgram *VAR_6 = VAR_1->programs[VAR_5];
        if (VAR_6->id == VAR_2) {
            int VAR_7 = VAR_6->pcr_pid,
                VAR_8 = VAR_6->pmt_version;
            VAR_6->pcr_pid = VAR_3;
            VAR_6->pmt_version = VAR_4;

            if (VAR_8 != -1 && VAR_8 != VAR_4) {
                FUNC_0(VAR_1, VAR_0,
                       "detected PMT change (program=%d, version=%d/%d, pcr_pid=0x%x/0x%x)\n",
                       VAR_2, VAR_8, VAR_4, VAR_7, VAR_3);
            }
            break;
        }
    }
}
