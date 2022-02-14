
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int write_out_ptr; int out_buffer; } ;
struct TYPE_4__ {int outgoing_packet_seq; TYPE_2__ mms; } ;
typedef TYPE_1__ MMSTContext ;
typedef TYPE_2__ MMSContext ;
typedef int MMSCSPacketType ;


 int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(MMSTContext *VAR_0, MMSCSPacketType VAR_1)
{
    MMSContext *VAR_2 = &VAR_0->mms;
    VAR_2->write_out_ptr = VAR_2->out_buffer;

    FUNC_2(&VAR_2->write_out_ptr, 1);
    FUNC_2(&VAR_2->write_out_ptr, 0xb00bface);
    FUNC_2(&VAR_2->write_out_ptr, 0);
    FUNC_2(&VAR_2->write_out_ptr, FUNC_0('M','M','S',' '));
    FUNC_2(&VAR_2->write_out_ptr, 0);
    FUNC_2(&VAR_2->write_out_ptr, VAR_0->outgoing_packet_seq++);
    FUNC_3(&VAR_2->write_out_ptr, 0);
    FUNC_2(&VAR_2->write_out_ptr, 0);
    FUNC_1(&VAR_2->write_out_ptr, VAR_1);
    FUNC_1(&VAR_2->write_out_ptr, 3);
}
