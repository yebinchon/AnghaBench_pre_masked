
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int path ;
typedef int host ;
typedef int h_url ;
typedef int auth ;
struct TYPE_6__ {int protocol_blacklist; int protocol_whitelist; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {char* name; char* description; char* url; char* genre; char* content_type; char* user_agent; char* pass; int hd; scalar_t__ legacy_icecast; scalar_t__ public; } ;
typedef TYPE_2__ IcecastContext ;
typedef int AVDictionary ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int *,char**) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int **,char*,char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char**) ;
 int FUNC_9 (TYPE_1__*,int ,char*) ;
 void* FUNC_10 (char*) ;
 int FUNC_11 (int *,int ,char*,int,char*,int,int*,char*,int,char const*) ;
 int FUNC_12 (int *,char*,char*) ;
 int FUNC_13 (char*,int,char*,char*,char*,int,char*,char*) ;
 int FUNC_14 (int *,char*,int ,int *,int **,int ,int ,TYPE_1__*) ;
 int FUNC_15 (char*,int,char*,char*,char*) ;
 char* FUNC_16 (char*,char) ;
 scalar_t__ FUNC_17 (char*,char*) ;

__attribute__((used)) static int FUNC_18(URLContext *VAR_9, const char *VAR_10, int VAR_11)
{
    IcecastContext *VAR_12 = VAR_9->priv_data;


    AVDictionary *VAR_13 = ((void*)0);


    char VAR_14[1024], VAR_15[1024], VAR_16[1024], VAR_17[1024];
    char *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
    int VAR_20, VAR_21;
    AVBPrint VAR_22;

    if (VAR_11 & VAR_0)
        return FUNC_0(VAR_8);

    FUNC_3(&VAR_22, 0, VAR_2);


    FUNC_12(&VAR_22, "Ice-Name", VAR_12->name);
    FUNC_12(&VAR_22, "Ice-Description", VAR_12->description);
    FUNC_12(&VAR_22, "Ice-URL", VAR_12->url);
    FUNC_12(&VAR_22, "Ice-Genre", VAR_12->genre);
    FUNC_12(&VAR_22, "Ice-Public", VAR_12->public ? "1" : "0");
    if (!FUNC_4(&VAR_22)) {
        VAR_21 = FUNC_0(VAR_7);
        goto cleanup;
    }
    FUNC_2(&VAR_22, &VAR_18);


    FUNC_6(&VAR_13, "method", VAR_12->legacy_icecast ? "SOURCE" : "PUT", 0);
    FUNC_6(&VAR_13, "auth_type", "basic", 0);
    FUNC_6(&VAR_13, "headers", VAR_18, 0);
    FUNC_6(&VAR_13, "chunked_post", "0", 0);
    FUNC_6(&VAR_13, "send_expect_100", VAR_12->legacy_icecast ? "-1" : "1", 0);
    if (FUNC_1(VAR_12->content_type))
        FUNC_6(&VAR_13, "content_type", VAR_12->content_type, 0);
    else
        FUNC_6(&VAR_13, "content_type", "audio/mpeg", 0);
    if (FUNC_1(VAR_12->user_agent))
        FUNC_6(&VAR_13, "user_agent", VAR_12->user_agent, 0);


    FUNC_11(((void*)0), 0, VAR_16, sizeof(VAR_16), VAR_15, sizeof(VAR_15),
                 &VAR_20, VAR_17, sizeof(VAR_17), VAR_10);


    if (VAR_16[0]) {
        char *VAR_23 = FUNC_16(VAR_16, ':');
        if (VAR_23) {
            *VAR_23 = 0;
            VAR_23++;
            if (VAR_12->pass) {
                FUNC_7(VAR_12->pass);
                FUNC_9(VAR_9, VAR_4, "Overwriting -password <pass> with URI password!\n");
            }
            if (!(VAR_12->pass = FUNC_10(VAR_23))) {
                VAR_21 = FUNC_0(VAR_7);
                goto cleanup;
            }
        }
        if (!(VAR_19 = FUNC_10(VAR_16))) {
            VAR_21 = FUNC_0(VAR_7);
            goto cleanup;
        }
    }


    FUNC_15(VAR_16, sizeof(VAR_16),
             "%s:%s",
             VAR_19 ? VAR_19 : VAR_5,
             VAR_12->pass ? VAR_12->pass : "");


    if (!VAR_17[0] || FUNC_17(VAR_17, "/") == 0) {
        FUNC_9(VAR_9, VAR_3, "No mountpoint (path) specified!\n");
        VAR_21 = FUNC_0(VAR_6);
        goto cleanup;
    }


    FUNC_13(VAR_14, sizeof(VAR_14), "http", VAR_16, VAR_15, VAR_20, "%s", VAR_17);

    VAR_21 = FUNC_14(&VAR_12->hd, VAR_14, VAR_1, ((void*)0),
                               &VAR_13, VAR_9->protocol_whitelist, VAR_9->protocol_blacklist, VAR_9);

cleanup:
    FUNC_8(&VAR_19);
    FUNC_8(&VAR_18);
    FUNC_5(&VAR_13);

    return VAR_21;
}
