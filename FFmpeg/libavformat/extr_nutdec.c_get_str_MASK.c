
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ eof_reached; } ;
typedef TYPE_1__ AVIOContext ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,size_t) ;
 unsigned int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(AVIOContext *VAR_1, char *VAR_2, unsigned int VAR_3)
{
    unsigned int VAR_4 = FUNC_3(VAR_1);

    if (VAR_4 && VAR_3)
        FUNC_2(VAR_1, VAR_2, FUNC_0(VAR_4, VAR_3));
    while (VAR_4 > VAR_3) {
        FUNC_1(VAR_1);
        VAR_4--;
        if (VAR_1->eof_reached)
            VAR_4 = VAR_3;
    }

    if (VAR_3)
        VAR_2[FUNC_0(VAR_4, VAR_3 - 1)] = 0;

    if (VAR_1->eof_reached)
        return VAR_0;
    if (VAR_3 == VAR_4)
        return -1;
    else
        return 0;
}
