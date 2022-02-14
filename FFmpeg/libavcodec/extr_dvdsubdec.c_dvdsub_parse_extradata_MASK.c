
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int extradata_size; int extradata; scalar_t__ priv_data; } ;
typedef int DVDSubContext ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,char*,int*,int*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_1)
{
    DVDSubContext *VAR_2 = (DVDSubContext*) VAR_1->priv_data;
    char *VAR_3, *VAR_4;
    int VAR_5 = 1;

    if (!VAR_1->extradata || !VAR_1->extradata_size)
        return 1;

    VAR_3 = VAR_4 = FUNC_2(VAR_1->extradata_size+1);
    if (!VAR_4)
        return FUNC_0(VAR_0);
    FUNC_4(VAR_4, VAR_1->extradata, VAR_1->extradata_size);
    VAR_4[VAR_1->extradata_size] = '\0';

    for(;;) {
        int VAR_6 = FUNC_7(VAR_4, "\n\r");
        if (VAR_6==0 && *VAR_4==0)
            break;

        if (FUNC_8("palette:", VAR_4, 8) == 0) {
            FUNC_5(VAR_2, VAR_4 + 8);
        } else if (FUNC_8("size:", VAR_4, 5) == 0) {
            int VAR_7, VAR_8;
            if (FUNC_6(VAR_4 + 5, "%dx%d", &VAR_7, &VAR_8) == 2) {
               VAR_5 = FUNC_3(VAR_1, VAR_7, VAR_8);
               if (VAR_5 < 0)
                   goto fail;
            }
        }

        VAR_4 += VAR_6;
        VAR_4 += FUNC_9(VAR_4, "\n\r");
    }

fail:
    FUNC_1(VAR_3);
    return VAR_5;
}
