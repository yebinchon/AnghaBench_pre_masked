
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct MD5Context {int md5; } ;
typedef int md5 ;
struct TYPE_7__ {char* filename; int protocol_blacklist; int protocol_whitelist; int interrupt_callback; struct MD5Context* priv_data; } ;
typedef TYPE_1__ URLContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (char const*,char*,char const**) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__**,char const*,int ,int *,int *,int ,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int*,int) ;
 int FUNC_7 (int*,int,int,int ) ;
 int FUNC_8 (int*,int,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(URLContext *VAR_3)
{
    struct MD5Context *VAR_4 = VAR_3->priv_data;
    const char *VAR_5 = VAR_3->filename;
    uint8_t VAR_6[16], VAR_7[64];
    URLContext *VAR_8;
    int VAR_9, VAR_10 = 0;

    FUNC_2(VAR_4->md5, VAR_6);
    for (VAR_9 = 0; VAR_9 < sizeof(VAR_6); VAR_9++)
        FUNC_8(VAR_7 + VAR_9*2, 3, "%02x", VAR_6[VAR_9]);
    VAR_7[VAR_9*2] = '\n';

    FUNC_3(VAR_5, "md5:", &VAR_5);

    if (*VAR_5) {
        VAR_10 = FUNC_5(&VAR_8, VAR_5, VAR_0,
                                   &VAR_3->interrupt_callback, ((void*)0),
                                   VAR_3->protocol_whitelist, VAR_3->protocol_blacklist, VAR_3);
        if (VAR_10)
            return VAR_10;
        VAR_10 = FUNC_6(VAR_8, VAR_7, VAR_9*2+1);
        FUNC_4(VAR_8);
    } else {
        if (FUNC_7(VAR_7, 1, VAR_9*2+1, VAR_2) < VAR_9*2+1)
            VAR_10 = FUNC_0(VAR_1);
    }

    FUNC_1(&VAR_4->md5);

    return VAR_10;
}
