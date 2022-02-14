
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0, int64_t VAR_1)
{
    AVIOContext *VAR_2 = VAR_0->pb;
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

    VAR_3 = FUNC_0(VAR_2);
    VAR_4 = FUNC_0(VAR_2);
    VAR_5 = FUNC_0(VAR_2);
    VAR_6 = FUNC_0(VAR_2);
    VAR_7 = FUNC_0(VAR_2);
    FUNC_2(VAR_0, "title", 0, VAR_3, 32);
    FUNC_2(VAR_0, "author", 0, VAR_4, 32);
    FUNC_2(VAR_0, "copyright", 0, VAR_5, 32);
    FUNC_2(VAR_0, "comment", 0, VAR_6, 32);
    FUNC_1(VAR_2, VAR_7);

    return 0;
}
