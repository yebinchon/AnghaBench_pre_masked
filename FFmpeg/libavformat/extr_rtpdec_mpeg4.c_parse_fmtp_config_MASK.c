
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * extradata; } ;
typedef TYPE_1__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,char const*) ;

__attribute__((used)) static int FUNC_4(AVCodecParameters *VAR_1, const char *VAR_2)
{

    int VAR_3 = FUNC_3(((void*)0), VAR_2);
    FUNC_1(&VAR_1->extradata);
    if (FUNC_2(VAR_1, VAR_3))
        return FUNC_0(VAR_0);
    FUNC_3(VAR_1->extradata, VAR_2);
    return 0;
}
