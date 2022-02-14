
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_9__ {int receive_report_size; } ;
struct TYPE_8__ {int size; int data; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_3, RTMPPacket *VAR_4)
{
    RTMPContext *VAR_5 = VAR_3->priv_data;

    if (VAR_4->size < 4) {
        FUNC_1(VAR_3, VAR_2,
               "Too short window acknowledgement size packet (%d)\n",
               VAR_4->size);
        return VAR_0;
    }

    VAR_5->receive_report_size = FUNC_0(VAR_4->data);
    if (VAR_5->receive_report_size <= 0) {
        FUNC_1(VAR_3, VAR_2, "Incorrect window acknowledgement size %d\n",
               VAR_5->receive_report_size);
        return VAR_0;
    }
    FUNC_1(VAR_3, VAR_1, "Window acknowledgement size = %d\n", VAR_5->receive_report_size);



    VAR_5->receive_report_size >>= 1;

    return 0;
}
