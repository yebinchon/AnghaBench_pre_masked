
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct AVMD5 {int dummy; } ;
typedef int checksum ;
struct TYPE_3__ {int nb_samples; int * extended_data; int format; int channel_layout; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct AVMD5*) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct AVMD5 *VAR_1, AVFrame *VAR_2)
{
    int VAR_3 = FUNC_4(VAR_2->format);
    int VAR_4 = FUNC_1(VAR_2->channel_layout);
    int VAR_5 = VAR_3 ? VAR_4 : 1;
    int VAR_6 = FUNC_0(VAR_2->format);
    int VAR_7 = VAR_6 * VAR_2->nb_samples * (VAR_3 ? 1 : VAR_4);
    int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        uint8_t VAR_10[16];

        FUNC_2(VAR_1);
        FUNC_3(VAR_10, VAR_2->extended_data[VAR_8], VAR_7);

        FUNC_5(VAR_0, "plane %d: 0x", VAR_8);
        for (VAR_9 = 0; VAR_9 < sizeof(VAR_10); VAR_9++)
            FUNC_5(VAR_0, "%02X", VAR_10[VAR_9]);
        FUNC_5(VAR_0, "\n");
    }
    FUNC_5(VAR_0, "\n");

    return 0;
}
