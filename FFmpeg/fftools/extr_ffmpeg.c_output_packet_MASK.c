
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nb_bitstream_filters; int index; int file_index; int * bsf_ctx; } ;
typedef TYPE_1__ OutputStream ;
typedef int OutputFile ;
typedef int AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ,char*,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_6(OutputFile *VAR_4, AVPacket *VAR_5,
                          OutputStream *VAR_6, int VAR_7)
{
    int VAR_8 = 0;


    if (VAR_6->nb_bitstream_filters) {
        int VAR_9;

        VAR_8 = FUNC_2(VAR_6->bsf_ctx[0], VAR_7 ? ((void*)0) : VAR_5);
        if (VAR_8 < 0)
            goto finish;

        VAR_7 = 0;
        VAR_9 = 1;
        while (VAR_9) {

            VAR_8 = FUNC_1(VAR_6->bsf_ctx[VAR_9 - 1], VAR_5);
            if (VAR_8 == FUNC_0(VAR_2)) {
                VAR_8 = 0;
                VAR_9--;
                continue;
            } else if (VAR_8 == VAR_0) {
                VAR_7 = 1;
            } else if (VAR_8 < 0)
                goto finish;


            if (VAR_9 < VAR_6->nb_bitstream_filters) {
                VAR_8 = FUNC_2(VAR_6->bsf_ctx[VAR_9], VAR_7 ? ((void*)0) : VAR_5);
                if (VAR_8 < 0)
                    goto finish;
                VAR_9++;
                VAR_7 = 0;
            } else if (VAR_7)
                goto finish;
            else
                FUNC_5(VAR_4, VAR_5, VAR_6, 0);
        }
    } else if (!VAR_7)
        FUNC_5(VAR_4, VAR_5, VAR_6, 0);

finish:
    if (VAR_8 < 0 && VAR_8 != VAR_0) {
        FUNC_3(((void*)0), VAR_1, "Error applying bitstream filters to an output "
               "packet for stream #%d:%d.\n", VAR_6->file_index, VAR_6->index);
        if(VAR_3)
            FUNC_4(1);
    }
}
