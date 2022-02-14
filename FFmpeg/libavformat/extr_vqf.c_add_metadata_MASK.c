
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int metadata; int pb; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,char*,int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_2, uint32_t VAR_3,
                         unsigned int VAR_4, unsigned int VAR_5)
{
    int VAR_6 = FUNC_1(VAR_4, VAR_5);
    char *VAR_7, VAR_8[5] = {0};

    if (VAR_6 == VAR_1)
        return;

    VAR_7 = FUNC_3(VAR_6+1);
    if (!VAR_7)
        return;
    FUNC_4(VAR_2->pb, VAR_7, VAR_6);
    VAR_7[VAR_6] = 0;
    FUNC_0(VAR_8, VAR_3);
    FUNC_2(&VAR_2->metadata, VAR_8, VAR_7, VAR_0);
}
