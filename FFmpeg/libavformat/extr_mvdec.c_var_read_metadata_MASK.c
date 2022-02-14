
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int metadata; int pb; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,char*,int ) ;
 char* FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_1, const char *VAR_2, int VAR_3)
{
    char *VAR_4 = FUNC_1(VAR_1->pb, VAR_3);
    if (VAR_4)
        FUNC_0(&VAR_1->metadata, VAR_2, VAR_4, VAR_0);
}
