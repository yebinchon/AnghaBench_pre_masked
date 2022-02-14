
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int tagged_value_count; } ;
typedef TYPE_1__ MXFContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,char const*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_2, const char* VAR_3, const char* VAR_4)
{
    MXFContext *VAR_5 = VAR_2->priv_data;
    AVIOContext *VAR_6 = VAR_2->pb;
    int VAR_7 = FUNC_3(VAR_3);
    int VAR_8 = 13 + FUNC_3(VAR_4);

    if (!VAR_7 || VAR_8 == 13)
        return 1;

    FUNC_6(VAR_6, 0x013f00);
    FUNC_2(VAR_6, 24 + VAR_7 + VAR_8);


    FUNC_4(VAR_6, 16, 0x3C0A);
    FUNC_7(VAR_6, VAR_0, VAR_5->tagged_value_count);


    FUNC_5(VAR_6, 0x5001, VAR_3);


    FUNC_4(VAR_6, VAR_8, 0x5003);
    FUNC_1(VAR_6, VAR_1, 17);
    FUNC_0(VAR_6, VAR_4);

    VAR_5->tagged_value_count++;
    return 0;
}
