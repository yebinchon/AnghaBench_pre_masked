
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pix_fmt; } ;
typedef TYPE_1__ MXFDescriptor ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int *) ;

__attribute__((used)) static void FUNC_3(AVIOContext *VAR_1, MXFDescriptor *VAR_2)
{
    int VAR_3, VAR_4, VAR_5 = 0;
    char VAR_6[16] = {0};

    do {
        VAR_3 = FUNC_1(VAR_1);
        VAR_4 = FUNC_1(VAR_1);
        FUNC_0(((void*)0), VAR_0, "pixel layout: code %#x\n", VAR_3);

        if (VAR_5 <= 14) {
            VAR_6[VAR_5++] = VAR_3;
            VAR_6[VAR_5++] = VAR_4;
        } else
            break;
    } while (VAR_3 != 0);

    FUNC_2(VAR_6, &VAR_2->pix_fmt);
}
