
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_4__ {char* subtitle_header; int subtitle_header_size; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*,int,char*,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_2)
{
    int VAR_3 = FUNC_3(VAR_2);
    char *VAR_4;
    uint8_t *VAR_5;

    if (VAR_3 < 0)
        return VAR_3;

    VAR_5 = FUNC_5(VAR_2->subtitle_header, "\r\n[Events]\r\n");
    if (!VAR_5)
        return VAR_0;

    VAR_4 = FUNC_1("%.*s%s%s",
        (int)(VAR_5 - VAR_2->subtitle_header), VAR_2->subtitle_header,
        "Style: "
        "Teletext,"
        "Monospace,11,"
        "&Hffffff,&Hffffff,&H0,&H0,"
        "0,0,0,0,"
        "160,100,"
        "0,0,"
        "3,0.1,0,"
        "5,1,1,1,"
        "0\r\n"
        "Style: "
        "Subtitle,"
        "Monospace,16,"
        "&Hffffff,&Hffffff,&H0,&H0,"
        "0,0,0,0,"
        "100,100,"
        "0,0,"
        "1,1,1,"
        "8,48,48,20,"
        "0\r\n"
        , VAR_5);

    if (!VAR_4)
        return FUNC_0(VAR_1);

    FUNC_2(VAR_2->subtitle_header);
    VAR_2->subtitle_header = VAR_4;
    VAR_2->subtitle_header_size = FUNC_4(VAR_4);
    return 0;
}
