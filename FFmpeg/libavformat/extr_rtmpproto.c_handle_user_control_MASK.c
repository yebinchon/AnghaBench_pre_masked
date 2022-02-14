
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_14__ {scalar_t__ swfsize; } ;
struct TYPE_13__ {int size; int data; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_3, RTMPPacket *VAR_4)
{
    RTMPContext *VAR_5 = VAR_3->priv_data;
    int VAR_6, VAR_7;

    if (VAR_4->size < 2) {
        FUNC_1(VAR_3, VAR_1, "Too short user control packet (%d)\n",
               VAR_4->size);
        return VAR_0;
    }

    VAR_6 = FUNC_0(VAR_4->data);
    if (VAR_6 == 6) {
        if ((VAR_7 = FUNC_2(VAR_3, VAR_5, VAR_4)) < 0)
            return VAR_7;
    } else if (VAR_6 == 26) {
        if (VAR_5->swfsize) {
            if ((VAR_7 = FUNC_3(VAR_3, VAR_5)) < 0)
                return VAR_7;
        } else {
            FUNC_1(VAR_3, VAR_2, "Ignoring SWFVerification request.\n");
        }
    }

    return 0;
}
