
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; scalar_t__ type; } ;
typedef int MOVContext ;
typedef TYPE_1__ MOVAtom ;
typedef int AVIOContext ;


 scalar_t__ FUNC_0 (char,char,char,char) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,TYPE_1__) ;

__attribute__((used)) static int FUNC_5(MOVContext *VAR_0, AVIOContext *VAR_1, MOVAtom VAR_2)
{
    int VAR_3;

    if (VAR_2.size < 8)
        return 0;
    if (FUNC_1(VAR_1) != 0) {
        FUNC_3(VAR_1, VAR_2.size - 4);
        return 0;
    }
    VAR_2.type = FUNC_2(VAR_1);
    VAR_2.size -= 8;
    if (VAR_2.type != FUNC_0('m','d','a','t')) {
        FUNC_3(VAR_1, VAR_2.size);
        return 0;
    }
    VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
    return VAR_3;
}
