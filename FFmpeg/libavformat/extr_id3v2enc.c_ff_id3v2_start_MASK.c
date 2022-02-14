
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int version; int size_pos; } ;
typedef TYPE_1__ ID3v2EncContext ;
typedef int AVIOContext ;


 int FUNC_0 (char const,char const,char const,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(ID3v2EncContext *VAR_0, AVIOContext *VAR_1, int VAR_2,
                    const char *VAR_3)
{
    VAR_0->version = VAR_2;

    FUNC_3(VAR_1, FUNC_0(VAR_3[0], VAR_3[1], VAR_3[2], VAR_2));
    FUNC_2(VAR_1, 0);
    FUNC_2(VAR_1, 0);


    VAR_0->size_pos = FUNC_1(VAR_1);
    FUNC_3(VAR_1, 0);
}
