
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* protocol_blacklist; void* protocol_whitelist; void* format_whitelist; void* codec_whitelist; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 void* FUNC_3 (void*) ;

int FUNC_4(AVFormatContext *VAR_2, const AVFormatContext *VAR_3)
{
    FUNC_1(!VAR_2->codec_whitelist &&
               !VAR_2->format_whitelist &&
               !VAR_2->protocol_whitelist &&
               !VAR_2->protocol_blacklist);
    VAR_2-> codec_whitelist = FUNC_3(VAR_3->codec_whitelist);
    VAR_2->format_whitelist = FUNC_3(VAR_3->format_whitelist);
    VAR_2->protocol_whitelist = FUNC_3(VAR_3->protocol_whitelist);
    VAR_2->protocol_blacklist = FUNC_3(VAR_3->protocol_blacklist);
    if ( (VAR_3-> codec_whitelist && !VAR_2-> codec_whitelist)
        || (VAR_3-> format_whitelist && !VAR_2-> format_whitelist)
        || (VAR_3->protocol_whitelist && !VAR_2->protocol_whitelist)
        || (VAR_3->protocol_blacklist && !VAR_2->protocol_blacklist)) {
        FUNC_2(VAR_2, VAR_0, "Failed to duplicate black/whitelist\n");
        return FUNC_0(VAR_1);
    }
    return 0;
}
