
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int key ;
typedef int iv ;
struct TYPE_8__ {int sequence; } ;
typedef TYPE_1__ VariantStream ;
struct TYPE_9__ {char* iv; char* key_string; char* key; int (* io_open ) (TYPE_2__*,int **,int *,int ,int *) ;int * key_file; int * key_uri; int * iv_string; int * key_basename; int * key_url; int * url; struct TYPE_9__* priv_data; } ;
typedef TYPE_2__ HLSContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (char*,int *,int,int ) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*,int **,int *,int ,int *) ;

__attribute__((used)) static int FUNC_14(AVFormatContext *VAR_6, VariantStream *VAR_7)
{
    HLSContext *VAR_8 = VAR_6->priv_data;
    int VAR_9;
    int VAR_10;
    AVIOContext *VAR_11;
    uint8_t VAR_12[VAR_4];

    VAR_10 = FUNC_12(VAR_6->url) + 4 + 1;
    VAR_8->key_basename = FUNC_3(VAR_10);
    if (!VAR_8->key_basename)
        return FUNC_0(VAR_3);

    FUNC_5(VAR_8->key_basename, VAR_6->url, VAR_10);
    FUNC_4(VAR_8->key_basename, ".key", VAR_10);

    if (VAR_8->key_url) {
        FUNC_5(VAR_8->key_file, VAR_8->key_url, sizeof(VAR_8->key_file));
        FUNC_5(VAR_8->key_uri, VAR_8->key_url, sizeof(VAR_8->key_uri));
    } else {
        FUNC_5(VAR_8->key_file, VAR_8->key_basename, sizeof(VAR_8->key_file));
        FUNC_5(VAR_8->key_uri, VAR_8->key_basename, sizeof(VAR_8->key_uri));
    }

    if (!*VAR_8->iv_string) {
        uint8_t VAR_13[16] = { 0 };
        char VAR_14[33];

        if (!VAR_8->iv) {
            FUNC_1(VAR_13 + 8, VAR_7->sequence);
        } else {
            FUNC_10(VAR_13, VAR_8->iv, sizeof(VAR_13));
        }
        FUNC_9(VAR_14, VAR_13, sizeof(VAR_13), 0);
        VAR_14[32] = '\0';
        FUNC_10(VAR_8->iv_string, VAR_14, sizeof(VAR_8->iv_string));
    }

    if (!*VAR_8->key_uri) {
        FUNC_2(VAR_8, VAR_1, "no key URI specified in key info file\n");
        return FUNC_0(VAR_2);
    }

    if (!*VAR_8->key_file) {
        FUNC_2(VAR_8, VAR_1, "no key file specified in key info file\n");
        return FUNC_0(VAR_2);
    }

    if (!*VAR_8->key_string) {
        if (!VAR_8->key) {
            if ((VAR_9 = FUNC_11(VAR_12, sizeof(VAR_12))) < 0) {
                FUNC_2(VAR_6, VAR_1, "Cannot generate a strong random key\n");
                return VAR_9;
            }
        } else {
            FUNC_10(VAR_12, VAR_8->key, sizeof(VAR_12));
        }

        FUNC_9(VAR_8->key_string, VAR_12, sizeof(VAR_12), 0);
        if ((VAR_9 = VAR_6->io_open(VAR_6, &VAR_11, VAR_8->key_file, VAR_0, ((void*)0))) < 0)
            return VAR_9;
        FUNC_7(VAR_11, 0, VAR_5);
        FUNC_8(VAR_11, VAR_12, VAR_4);
        FUNC_6(VAR_11);
    }
    return 0;
}
