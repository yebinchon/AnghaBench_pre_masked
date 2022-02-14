
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val_handle; } ;
struct peer_chr {TYPE_1__ chr; } ;
struct peer {int conn_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int VAR_4 ;
 struct peer_chr* FUNC_4 (struct peer const*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(const struct peer *VAR_5)
{
    const struct peer_chr *VAR_6;
    int VAR_7;


    VAR_6 = FUNC_4(VAR_5,
                             FUNC_0(VAR_1),
                             FUNC_0(VAR_0));
    if (VAR_6 == ((void*)0)) {
        FUNC_1(VAR_3, "Error: Peer doesn't support the Supported New "
                    "Alert Category characteristic\n");
        goto err;
    }

    VAR_7 = FUNC_3(VAR_5->conn_handle, VAR_6->chr.val_handle,
                        VAR_4, ((void*)0));
    if (VAR_7 != 0) {
        FUNC_1(VAR_3, "Error: Failed to read characteristic; rc=%d\n",
                    VAR_7);
        goto err;
    }

    return;
err:

    FUNC_2(VAR_5->conn_handle, VAR_2);
}
