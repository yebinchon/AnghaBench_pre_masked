
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int cmd ;
struct TYPE_12__ {TYPE_1__* priv_data; } ;
struct TYPE_11__ {scalar_t__ status_code; } ;
struct TYPE_10__ {scalar_t__ server_type; int control_uri; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ RTSPMessageHeader ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned char**) ;
 int FUNC_1 (TYPE_3__*,int ,char*,unsigned char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (TYPE_3__*,char*,int ,char*,TYPE_2__*,unsigned char**) ;
 int FUNC_5 (TYPE_3__*,char const*) ;
 int FUNC_6 (char*,int,char*) ;

int FUNC_7(AVFormatContext *VAR_4, RTSPMessageHeader *VAR_5)
{
    RTSPState *VAR_6 = VAR_4->priv_data;
    char VAR_7[1024];
    unsigned char *VAR_8 = ((void*)0);
    int VAR_9;


    FUNC_6(VAR_7, sizeof(VAR_7),
             "Accept: application/sdp\r\n");
    if (VAR_6->server_type == VAR_2) {




        FUNC_2(VAR_7,
                   "Require: com.real.retain-entity-for-setup\r\n",
                   sizeof(VAR_7));
    }
    FUNC_4(VAR_4, "DESCRIBE", VAR_6->control_uri, VAR_7, VAR_5, &VAR_8);
    if (VAR_5->status_code != VAR_3) {
        FUNC_0(&VAR_8);
        return FUNC_3(VAR_5->status_code, VAR_0);
    }
    if (!VAR_8)
        return VAR_0;

    FUNC_1(VAR_4, VAR_1, "SDP:\n%s\n", VAR_8);

    VAR_9 = FUNC_5(VAR_4, (const char *)VAR_8);
    FUNC_0(&VAR_8);
    if (VAR_9 < 0)
        return VAR_9;

    return 0;
}
