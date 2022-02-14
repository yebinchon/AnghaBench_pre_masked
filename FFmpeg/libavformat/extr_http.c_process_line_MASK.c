
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int flags; scalar_t__ is_streamed; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_12__ {int end_header; char* method; int willclose; char* http_code; scalar_t__ filesize; int seekable; int is_akamai; int is_mediagateway; void* icy_metaint; int cookie_dict; void* mime_type; int proxy_auth_state; int auth_state; scalar_t__ chunksize; int http_version; void* resource; scalar_t__ is_connected_server; } ;
typedef TYPE_2__ HTTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (TYPE_1__*,int ,char*,...) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 void* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (TYPE_1__*,char*,char*) ;
 int FUNC_10 (int *,char*,char*) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (TYPE_1__*,char*) ;
 int FUNC_13 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_14 (TYPE_2__*,char*,int *) ;
 int FUNC_15 (TYPE_2__*,char*,char*) ;
 int FUNC_16 (TYPE_2__*,char*) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*,char*,int) ;
 char* FUNC_19 (char*,char**,int) ;
 void* FUNC_20 (char*,int *,int) ;

__attribute__((used)) static int FUNC_21(URLContext *VAR_7, char *VAR_8, int VAR_9,
                        int *VAR_10)
{
    HTTPContext *VAR_11 = VAR_7->priv_data;
    const char *VAR_12 = VAR_7->flags & VAR_0 ? "POST" : "GET";
    char *VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18;
    int VAR_19;


    if (VAR_8[0] == '\0') {
        VAR_11->end_header = 1;
        return 0;
    }

    VAR_14 = VAR_8;
    if (VAR_9 == 0) {
        if (VAR_11->is_connected_server) {

            VAR_16 = VAR_14;
            while (*VAR_14 && !FUNC_3(*VAR_14))
                VAR_14++;
            *(VAR_14++) = '\0';
            FUNC_4(VAR_7, VAR_2, "Received method: %s\n", VAR_16);
            if (VAR_11->method) {
                if (FUNC_5(VAR_11->method, VAR_16)) {
                    FUNC_4(VAR_7, VAR_1, "Received and expected HTTP method do not match. (%s expected, %s received)\n",
                           VAR_11->method, VAR_16);
                    return FUNC_11(400, FUNC_0(VAR_4));
                }
            } else {

                FUNC_4(VAR_7, VAR_2, "Autodetected %s HTTP method\n", VAR_12);
                if (FUNC_5(VAR_12, VAR_16)) {
                    FUNC_4(VAR_7, VAR_1, "Received and autodetected HTTP method did not match "
                           "(%s autodetected %s received)\n", VAR_12, VAR_16);
                    return FUNC_11(400, FUNC_0(VAR_4));
                }
                if (!(VAR_11->method = FUNC_6(VAR_16)))
                    return FUNC_0(VAR_5);
            }


            while (FUNC_3(*VAR_14))
                VAR_14++;
            VAR_17 = VAR_14;
            while (*VAR_14 && !FUNC_3(*VAR_14))
                VAR_14++;
            *(VAR_14++) = '\0';
            FUNC_4(VAR_7, VAR_2, "Requested resource: %s\n", VAR_17);
            if (!(VAR_11->resource = FUNC_6(VAR_17)))
                return FUNC_0(VAR_5);


            while (FUNC_3(*VAR_14))
                VAR_14++;
            VAR_18 = VAR_14;
            while (*VAR_14 && !FUNC_3(*VAR_14))
                VAR_14++;
            *VAR_14 = '\0';
            if (FUNC_7(VAR_18, "HTTP/", 5)) {
                FUNC_4(VAR_7, VAR_1, "Malformed HTTP version string.\n");
                return FUNC_11(400, FUNC_0(VAR_4));
            }
            FUNC_4(VAR_7, VAR_2, "HTTP version string: %s\n", VAR_18);
        } else {
            if (FUNC_7(VAR_14, "HTTP/1.0", 8) == 0)
                VAR_11->willclose = 1;
            while (*VAR_14 != '/' && *VAR_14 != '\0')
                VAR_14++;
            while (*VAR_14 == '/')
                VAR_14++;
            FUNC_2(&VAR_11->http_version);
            VAR_11->http_version = FUNC_8(VAR_14, 3);
            while (!FUNC_3(*VAR_14) && *VAR_14 != '\0')
                VAR_14++;
            while (FUNC_3(*VAR_14))
                VAR_14++;
            VAR_11->http_code = FUNC_19(VAR_14, &VAR_15, 10);

            FUNC_4(VAR_7, VAR_2, "http_code=%d\n", VAR_11->http_code);

            if ((VAR_19 = FUNC_9(VAR_7, VAR_11->http_code, VAR_15)) < 0)
                return VAR_19;
        }
    } else {
        while (*VAR_14 != '\0' && *VAR_14 != ':')
            VAR_14++;
        if (*VAR_14 != ':')
            return 1;

        *VAR_14 = '\0';
        VAR_13 = VAR_8;
        VAR_14++;
        while (FUNC_3(*VAR_14))
            VAR_14++;
        if (!FUNC_5(VAR_13, "Location")) {
            if ((VAR_19 = FUNC_16(VAR_11, VAR_14)) < 0)
                return VAR_19;
            *VAR_10 = 1;
        } else if (!FUNC_5(VAR_13, "Content-Length") &&
                   VAR_11->filesize == VAR_6) {
            VAR_11->filesize = FUNC_20(VAR_14, ((void*)0), 10);
        } else if (!FUNC_5(VAR_13, "Content-Range")) {
            FUNC_13(VAR_7, VAR_14);
        } else if (!FUNC_5(VAR_13, "Accept-Ranges") &&
                   !FUNC_18(VAR_14, "bytes", 5) &&
                   VAR_11->seekable == -1) {
            VAR_7->is_streamed = 0;
        } else if (!FUNC_5(VAR_13, "Transfer-Encoding") &&
                   !FUNC_7(VAR_14, "chunked", 7)) {
            VAR_11->filesize = VAR_6;
            VAR_11->chunksize = 0;
        } else if (!FUNC_5(VAR_13, "WWW-Authenticate")) {
            FUNC_10(&VAR_11->auth_state, VAR_13, VAR_14);
        } else if (!FUNC_5(VAR_13, "Authentication-Info")) {
            FUNC_10(&VAR_11->auth_state, VAR_13, VAR_14);
        } else if (!FUNC_5(VAR_13, "Proxy-Authenticate")) {
            FUNC_10(&VAR_11->proxy_auth_state, VAR_13, VAR_14);
        } else if (!FUNC_5(VAR_13, "Connection")) {
            if (!FUNC_17(VAR_14, "close"))
                VAR_11->willclose = 1;
        } else if (!FUNC_5(VAR_13, "Server")) {
            if (!FUNC_5(VAR_14, "AkamaiGHost")) {
                VAR_11->is_akamai = 1;
            } else if (!FUNC_7(VAR_14, "MediaGateway", 12)) {
                VAR_11->is_mediagateway = 1;
            }
        } else if (!FUNC_5(VAR_13, "Content-Type")) {
            FUNC_1(VAR_11->mime_type);
            VAR_11->mime_type = FUNC_6(VAR_14);
        } else if (!FUNC_5(VAR_13, "Set-Cookie")) {
            if (FUNC_14(VAR_11, VAR_14, &VAR_11->cookie_dict))
                FUNC_4(VAR_7, VAR_3, "Unable to parse '%s'\n", VAR_14);
        } else if (!FUNC_5(VAR_13, "Icy-MetaInt")) {
            VAR_11->icy_metaint = FUNC_20(VAR_14, ((void*)0), 10);
        } else if (!FUNC_7(VAR_13, "Icy-", 4)) {
            if ((VAR_19 = FUNC_15(VAR_11, VAR_13, VAR_14)) < 0)
                return VAR_19;
        } else if (!FUNC_5(VAR_13, "Content-Encoding")) {
            if ((VAR_19 = FUNC_12(VAR_7, VAR_14)) < 0)
                return VAR_19;
        }
    }
    return 1;
}
