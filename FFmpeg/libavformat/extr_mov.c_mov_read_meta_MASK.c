
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int size; } ;
typedef int MOVContext ;
typedef TYPE_1__ MOVAtom ;
typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int *,TYPE_1__) ;

__attribute__((used)) static int FUNC_5(MOVContext *VAR_2, AVIOContext *VAR_3, MOVAtom VAR_4)
{
    while (VAR_4.size > 8) {
        uint32_t VAR_5;
        if (FUNC_1(VAR_3))
            return VAR_0;
        VAR_5 = FUNC_2(VAR_3);
        VAR_4.size -= 4;
        if (VAR_5 == FUNC_0('h','d','l','r')) {
            FUNC_3(VAR_3, -8, VAR_1);
            VAR_4.size += 8;
            return FUNC_4(VAR_2, VAR_3, VAR_4);
        }
    }
    return 0;
}
