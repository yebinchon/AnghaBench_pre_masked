
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mms_hd; scalar_t__ in_buffer; } ;
struct TYPE_4__ {int header_packet_id; TYPE_2__ mms; } ;
typedef TYPE_1__ MMSTContext ;
typedef TYPE_2__ MMSContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,char*,...) ;

__attribute__((used)) static void FUNC_2(MMSTContext *VAR_1)
{
    MMSContext *VAR_2 = &VAR_1->mms;
    FUNC_1(VAR_2->mms_hd, VAR_0, "Stream changing!\n");


    VAR_1->header_packet_id= FUNC_0(VAR_2->in_buffer + 40 + 7);
    FUNC_1(VAR_2->mms_hd, VAR_0, "Changed header prefix to 0x%x", VAR_1->header_packet_id);
}
