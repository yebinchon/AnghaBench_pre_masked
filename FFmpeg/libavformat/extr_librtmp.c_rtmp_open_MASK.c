
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_13__ {char* filename; int is_streamed; TYPE_4__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_12__ {int sb_socket; } ;
struct TYPE_14__ {TYPE_1__ m_sb; } ;
struct TYPE_15__ {char* app; char* tcurl; char* pageurl; char* flashver; char* conn; char* playpath; char* subscribe; char* client_buffer_time; char* swfurl; char* swfverify; char* temp_filename; int buffer_size; scalar_t__ live; TYPE_3__ rtmp; } ;
typedef TYPE_3__ RTMP ;
typedef TYPE_4__ LibRTMPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (char**) ;
 int FUNC_10 () ;
 char* FUNC_11 (int) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*,char*,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_14 (int ,int ,int ,int*,int) ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,char*) ;

__attribute__((used)) static int FUNC_18(URLContext *VAR_13, const char *VAR_14, int VAR_15)
{
    LibRTMPContext *VAR_16 = VAR_13->priv_data;
    RTMP *VAR_17 = &VAR_16->rtmp;
    int VAR_18 = 0, VAR_19;
    char *VAR_20 = VAR_13->filename;
    int VAR_21 = FUNC_16(VAR_13->filename) + 1;

    switch (FUNC_10()) {
    default:
    case 131: VAR_19 = VAR_4; break;
    case 132: VAR_19 = VAR_7; break;
    case 128: VAR_19 = VAR_9; break;
    case 130: VAR_19 = VAR_8; break;
    case 129: VAR_19 = VAR_5; break;
    case 133: VAR_19 = VAR_6; break;
    }
    FUNC_7(VAR_19);
    FUNC_6(VAR_12);

    if (VAR_16->app) VAR_21 += FUNC_16(VAR_16->app) + sizeof(" app=");
    if (VAR_16->tcurl) VAR_21 += FUNC_16(VAR_16->tcurl) + sizeof(" tcUrl=");
    if (VAR_16->pageurl) VAR_21 += FUNC_16(VAR_16->pageurl) + sizeof(" pageUrl=");
    if (VAR_16->flashver) VAR_21 += FUNC_16(VAR_16->flashver) + sizeof(" flashver=");

    if (VAR_16->conn) {
        char *VAR_22, *VAR_23 = VAR_16->conn;
        int VAR_24 = 0;

        while (VAR_23) {
            VAR_24++;
            VAR_23 += FUNC_17(VAR_23, " ");
            if (!*VAR_23)
                break;
            VAR_22 = FUNC_15(VAR_23, ' ');
            if (VAR_22)
                VAR_23 = VAR_22 + 1;
            else
                break;
        }
        VAR_21 += VAR_24 * sizeof(" conn=");
        VAR_21 += FUNC_16(VAR_16->conn);
    }

    if (VAR_16->playpath)
        VAR_21 += FUNC_16(VAR_16->playpath) + sizeof(" playpath=");
    if (VAR_16->live)
        VAR_21 += sizeof(" live=1");
    if (VAR_16->subscribe)
        VAR_21 += FUNC_16(VAR_16->subscribe) + sizeof(" subscribe=");

    if (VAR_16->client_buffer_time)
        VAR_21 += FUNC_16(VAR_16->client_buffer_time) + sizeof(" buffer=");

    if (VAR_16->swfurl || VAR_16->swfverify) {
        VAR_21 += sizeof(" swfUrl=");

        if (VAR_16->swfverify)
            VAR_21 += FUNC_16(VAR_16->swfverify) + sizeof(" swfVfy=1");
        else
            VAR_21 += FUNC_16(VAR_16->swfurl);
    }

    if (!(VAR_16->temp_filename = VAR_20 = FUNC_11(VAR_21)))
        return FUNC_0(VAR_3);

    FUNC_13(VAR_20, VAR_13->filename, VAR_21);
    if (VAR_16->app) {
        FUNC_12(VAR_20, " app=", VAR_21);
        FUNC_12(VAR_20, VAR_16->app, VAR_21);
    }
    if (VAR_16->tcurl) {
        FUNC_12(VAR_20, " tcUrl=", VAR_21);
        FUNC_12(VAR_20, VAR_16->tcurl, VAR_21);
    }
    if (VAR_16->pageurl) {
        FUNC_12(VAR_20, " pageUrl=", VAR_21);
        FUNC_12(VAR_20, VAR_16->pageurl, VAR_21);
    }
    if (VAR_16->swfurl) {
        FUNC_12(VAR_20, " swfUrl=", VAR_21);
        FUNC_12(VAR_20, VAR_16->swfurl, VAR_21);
    }
    if (VAR_16->flashver) {
        FUNC_12(VAR_20, " flashVer=", VAR_21);
        FUNC_12(VAR_20, VAR_16->flashver, VAR_21);
    }
    if (VAR_16->conn) {
        char *VAR_25, *VAR_26 = VAR_16->conn;
        while (VAR_26) {
            FUNC_12(VAR_20, " conn=", VAR_21);
            VAR_26 += FUNC_17(VAR_26, " ");
            if (!*VAR_26)
                break;
            VAR_25 = FUNC_15(VAR_26, ' ');
            if (VAR_25)
                *VAR_25 = '\0';
            FUNC_12(VAR_20, VAR_26, VAR_21);

            if (VAR_25)
                VAR_26 = VAR_25 + 1;
            else
                break;
        }
    }
    if (VAR_16->playpath) {
        FUNC_12(VAR_20, " playpath=", VAR_21);
        FUNC_12(VAR_20, VAR_16->playpath, VAR_21);
    }
    if (VAR_16->live)
        FUNC_12(VAR_20, " live=1", VAR_21);
    if (VAR_16->subscribe) {
        FUNC_12(VAR_20, " subscribe=", VAR_21);
        FUNC_12(VAR_20, VAR_16->subscribe, VAR_21);
    }
    if (VAR_16->client_buffer_time) {
        FUNC_12(VAR_20, " buffer=", VAR_21);
        FUNC_12(VAR_20, VAR_16->client_buffer_time, VAR_21);
    }
    if (VAR_16->swfurl || VAR_16->swfverify) {
        FUNC_12(VAR_20, " swfUrl=", VAR_21);

        if (VAR_16->swfverify) {
            FUNC_12(VAR_20, VAR_16->swfverify, VAR_21);
            FUNC_12(VAR_20, " swfVfy=1", VAR_21);
        } else {
            FUNC_12(VAR_20, VAR_16->swfurl, VAR_21);
        }
    }

    FUNC_5(VAR_17);
    if (!FUNC_8(VAR_17, VAR_20)) {
        VAR_18 = VAR_1;
        goto fail;
    }

    if (VAR_15 & VAR_2)
        FUNC_4(VAR_17);

    if (!FUNC_2(VAR_17, ((void*)0)) || !FUNC_3(VAR_17, 0)) {
        VAR_18 = VAR_1;
        goto fail;
    }
    VAR_13->is_streamed = 1;
    return 0;
fail:
    FUNC_9(&VAR_16->temp_filename);
    if (VAR_18)
        FUNC_1(VAR_17);

    return VAR_18;
}
