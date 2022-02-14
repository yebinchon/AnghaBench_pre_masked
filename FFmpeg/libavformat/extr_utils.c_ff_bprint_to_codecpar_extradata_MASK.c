
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct AVBPrint {int len; } ;
struct TYPE_3__ {char* extradata; int extradata_size; } ;
typedef TYPE_1__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct AVBPrint*,char**) ;
 int FUNC_2 (struct AVBPrint*) ;
 int FUNC_3 (char*) ;

int FUNC_4(AVCodecParameters *VAR_1, struct AVBPrint *VAR_2)
{
    int VAR_3;
    char *VAR_4;

    VAR_3 = FUNC_1(VAR_2, &VAR_4);
    if (VAR_3 < 0)
        return VAR_3;
    if (!FUNC_2(VAR_2)) {
        FUNC_3(VAR_4);
        return FUNC_0(VAR_0);
    }

    VAR_1->extradata = VAR_4;





    VAR_1->extradata_size = VAR_2->len;
    return 0;
}
