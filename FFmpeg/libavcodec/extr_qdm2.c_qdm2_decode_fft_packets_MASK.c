
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int fft_coefs_index; int* fft_coefs_min_index; int sub_packets_B; int sub_sampling; int* fft_coefs_max_index; int * fft_level_exp; TYPE_1__* sub_packet_list_B; } ;
struct TYPE_7__ {int type; int size; int data; } ;
struct TYPE_6__ {TYPE_2__* packet; } ;
typedef TYPE_2__ QDM2SubPacket ;
typedef TYPE_3__ QDM2Context ;
typedef int GetBitContext ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_3__*,int,int *,int) ;

__attribute__((used)) static void FUNC_3(QDM2Context *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    GetBitContext VAR_9;

    if (!VAR_1->sub_packet_list_B[0].packet)
        return;


    VAR_1->fft_coefs_index = 0;
    for (VAR_2 = 0; VAR_2 < 5; VAR_2++)
        VAR_1->fft_coefs_min_index[VAR_2] = -1;


    for (VAR_2 = 0, VAR_5 = 256; VAR_2 < VAR_1->sub_packets_B; VAR_2++) {
        QDM2SubPacket *VAR_10 = ((void*)0);


        for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_1->sub_packets_B; VAR_3++) {
            VAR_6 = VAR_1->sub_packet_list_B[VAR_3].packet->type;
            if (VAR_6 > VAR_4 && VAR_6 < VAR_5) {
                VAR_4 = VAR_6;
                VAR_10 = VAR_1->sub_packet_list_B[VAR_3].packet;
            }
        }

        VAR_5 = VAR_4;


        if (!VAR_10)
            return;

        if (VAR_2 == 0 &&
            (VAR_10->type < 16 || VAR_10->type >= 48 ||
             VAR_0[VAR_10->type - 16]))
            return;


        FUNC_1(&VAR_9, VAR_10->data, VAR_10->size * 8);

        if (VAR_10->type >= 32 && VAR_10->type < 48 && !VAR_0[VAR_10->type - 16])
            VAR_8 = 1;
        else
            VAR_8 = 0;

        VAR_7 = VAR_10->type;

        if ((VAR_7 >= 17 && VAR_7 < 24) || (VAR_7 >= 33 && VAR_7 < 40)) {
            int VAR_11 = VAR_1->sub_sampling + 5 - (VAR_7 & 15);

            if (VAR_11 >= 0 && VAR_11 < 4)
                FUNC_2(VAR_1, VAR_11, &VAR_9, VAR_8);
        } else if (VAR_7 == 31) {
            for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
                FUNC_2(VAR_1, VAR_3, &VAR_9, VAR_8);
        } else if (VAR_7 == 46) {
            for (VAR_3 = 0; VAR_3 < 6; VAR_3++)
                VAR_1->fft_level_exp[VAR_3] = FUNC_0(&VAR_9, 6);
            for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
                FUNC_2(VAR_1, VAR_3, &VAR_9, VAR_8);
        }
    }


    for (VAR_2 = 0, VAR_3 = -1; VAR_2 < 5; VAR_2++)
        if (VAR_1->fft_coefs_min_index[VAR_2] >= 0) {
            if (VAR_3 >= 0)
                VAR_1->fft_coefs_max_index[VAR_3] = VAR_1->fft_coefs_min_index[VAR_2];
            VAR_3 = VAR_2;
        }
    if (VAR_3 >= 0)
        VAR_1->fft_coefs_max_index[VAR_3] = VAR_1->fft_coefs_index;
}
