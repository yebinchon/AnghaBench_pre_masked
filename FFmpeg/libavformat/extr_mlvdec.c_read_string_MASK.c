
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int metadata; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,char*,unsigned int) ;
 int FUNC_4 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_1, AVIOContext *VAR_2, const char *VAR_3, unsigned VAR_4)
{
    char * VAR_5 = FUNC_2(VAR_4 + 1);
    if (!VAR_5) {
        FUNC_4(VAR_2, VAR_4);
        return;
    }

    FUNC_3(VAR_2, VAR_5, VAR_4);
    if (!VAR_5[0]) {
        FUNC_1(VAR_5);
        return;
    }

    VAR_5[VAR_4] = 0;
    FUNC_0(&VAR_1->metadata, VAR_3, VAR_5, VAR_0);
}
