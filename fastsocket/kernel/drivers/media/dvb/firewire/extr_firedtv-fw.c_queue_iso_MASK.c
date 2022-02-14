
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_iso_packet {int payload_length; int interrupt; int header_length; scalar_t__ skip; } ;
struct firedtv_receive_context {int interrupt_packet; int buffer; int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct fw_iso_packet*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct firedtv_receive_context *VAR_3, int VAR_4)
{
 struct fw_iso_packet VAR_5;

 VAR_5.payload_length = VAR_2;
 VAR_5.interrupt = !(++VAR_3->interrupt_packet & (VAR_0 - 1));
 VAR_5.skip = 0;
 VAR_5.header_length = VAR_1;

 return FUNC_0(VAR_3->context, &VAR_5, &VAR_3->buffer,
        VAR_4 * VAR_2);
}
