
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int value ;
typedef int key ;
typedef int int64_t ;
struct TYPE_3__ {int metadata; int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*,int) ;
 unsigned int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_1, int64_t VAR_2)
{
    AVIOContext *VAR_3 = VAR_1->pb;
    unsigned int VAR_4;
    unsigned int VAR_5 = FUNC_3(VAR_3);
    for (VAR_4 = 0; VAR_4 < VAR_5 && !FUNC_1(VAR_3); VAR_4++) {
        char VAR_6[32];
        char VAR_7[1024];
        FUNC_2(VAR_3, VAR_0, VAR_6, sizeof(VAR_6));
        FUNC_2(VAR_3, VAR_0, VAR_7, sizeof(VAR_7));
        FUNC_0(&VAR_1->metadata, VAR_6, VAR_7, 0);
    }
}
