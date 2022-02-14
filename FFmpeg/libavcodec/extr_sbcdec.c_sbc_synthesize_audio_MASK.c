
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbc_frame {int subbands; int channels; int blocks; } ;
struct sbc_decoder_state {int dummy; } ;
typedef int AVFrame ;


 int FUNC_0 (struct sbc_decoder_state*,struct sbc_frame*,int,int,int *) ;
 int FUNC_1 (struct sbc_decoder_state*,struct sbc_frame*,int,int,int *) ;

__attribute__((used)) static void FUNC_2(struct sbc_decoder_state *VAR_0,
                                 struct sbc_frame *VAR_1, AVFrame *VAR_2)
{
    int VAR_3, VAR_4;

    switch (VAR_1->subbands) {
    case 4:
        for (VAR_3 = 0; VAR_3 < VAR_1->channels; VAR_3++)
            for (VAR_4 = 0; VAR_4 < VAR_1->blocks; VAR_4++)
                FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4, VAR_2);
        break;

    case 8:
        for (VAR_3 = 0; VAR_3 < VAR_1->channels; VAR_3++)
            for (VAR_4 = 0; VAR_4 < VAR_1->blocks; VAR_4++)
                FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4, VAR_2);
        break;
    }
}
