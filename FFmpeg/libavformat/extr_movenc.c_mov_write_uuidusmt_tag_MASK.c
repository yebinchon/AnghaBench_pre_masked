
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {char* value; } ;
struct TYPE_5__ {int flags; int metadata; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 int VAR_0 ;
 char* VAR_1 ;
 TYPE_2__* FUNC_0 (int ,char*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,char*,char*,int) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(AVIOContext *VAR_2, AVFormatContext *VAR_3)
{
    AVDictionaryEntry *VAR_4 = FUNC_0(VAR_3->metadata, "title", ((void*)0), 0);
    int64_t VAR_5, VAR_6;

    if (VAR_4) {
        VAR_5 = FUNC_1(VAR_2);
        FUNC_3(VAR_2, 0);
        FUNC_4(VAR_2, "uuid");
        FUNC_4(VAR_2, "USMT");
        FUNC_3(VAR_2, 0x21d24fce);
        FUNC_3(VAR_2, 0xbb88695c);
        FUNC_3(VAR_2, 0xfac9c740);

        VAR_6 = FUNC_1(VAR_2);
        FUNC_3(VAR_2, 0);
        FUNC_4(VAR_2, "MTDT");
        FUNC_2(VAR_2, 4);


        FUNC_2(VAR_2, 0x0C);
        FUNC_3(VAR_2, 0x0B);
        FUNC_2(VAR_2, FUNC_5("und"));
        FUNC_2(VAR_2, 0x0);
        FUNC_2(VAR_2, 0x021C);

        if (!(VAR_3->flags & VAR_0))
            FUNC_6(VAR_2, VAR_1, "eng", 0x04);
        FUNC_6(VAR_2, VAR_4->value, "eng", 0x01);
        FUNC_6(VAR_2, "2006/04/01 11:11:11", "und", 0x03);

        FUNC_7(VAR_2, VAR_6);
        return FUNC_7(VAR_2, VAR_5);
    }

    return 0;
}
