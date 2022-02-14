
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int url; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ,char const*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_2, AVIOContext **VAR_3, const char *VAR_4,
                          int VAR_5, AVDictionary **VAR_6)
{
    FUNC_1(VAR_2, VAR_0,
           "A HLS playlist item '%s' referred to an external file '%s'. "
           "Opening this file was forbidden for security reasons\n",
           VAR_2->url, VAR_4);
    return FUNC_0(VAR_1);
}
