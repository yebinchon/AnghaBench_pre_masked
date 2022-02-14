
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int name ;
typedef int int64_t ;
struct TYPE_8__ {TYPE_1__* dar; } ;
struct TYPE_7__ {int * pb; TYPE_3__* priv_data; } ;
struct TYPE_6__ {void* den; void* num; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASFContext ;


 int FUNC_0 (int *,int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*,char*,int,int,int) ;
 void* FUNC_4 (int *,int,int) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_0, int64_t VAR_1)
{
    AVIOContext *VAR_2 = VAR_0->pb;
    ASFContext *VAR_3 = VAR_0->priv_data;
    int VAR_4, VAR_5, VAR_6;

    VAR_4 = FUNC_1(VAR_2);
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        int VAR_7, VAR_8, VAR_9;
        char VAR_10[1024];

        VAR_7 = FUNC_1(VAR_2);
        if (VAR_7 % 2)
            VAR_7 += 1;
        if ((VAR_6 = FUNC_0(VAR_2, VAR_7, VAR_10, sizeof(VAR_10))) < VAR_7)
            FUNC_2(VAR_2, VAR_7 - VAR_6);
        VAR_8 = FUNC_1(VAR_2);
        VAR_9 = FUNC_1(VAR_2);
        if (!VAR_8 && VAR_9 % 2)
            VAR_9 += 1;



        if (!FUNC_5(VAR_10, "AspectRatioX"))
            VAR_3->dar[0].num = FUNC_4(VAR_0->pb, VAR_8, 32);
        else if (!FUNC_5(VAR_10, "AspectRatioY"))
            VAR_3->dar[0].den = FUNC_4(VAR_0->pb, VAR_8, 32);
        else
            FUNC_3(VAR_0, VAR_10, VAR_8, VAR_9, 32);
    }

    return 0;
}
