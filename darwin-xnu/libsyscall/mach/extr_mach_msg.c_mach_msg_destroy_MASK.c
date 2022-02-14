
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int mach_port_t ;
typedef scalar_t__ mach_msg_type_number_t ;
struct TYPE_12__ {int disposition; int name; } ;
typedef TYPE_3__ mach_msg_port_descriptor_t ;
struct TYPE_13__ {scalar_t__ count; scalar_t__ address; int deallocate; int disposition; } ;
typedef TYPE_4__ mach_msg_ool_ports_descriptor_t ;
struct TYPE_14__ {int size; int address; int deallocate; } ;
typedef TYPE_5__ mach_msg_ool_descriptor_t ;
struct TYPE_15__ {int msgh_bits; int msgh_voucher_port; int msgh_remote_port; } ;
typedef TYPE_6__ mach_msg_header_t ;
struct TYPE_11__ {int type; } ;
struct TYPE_16__ {TYPE_4__ ool_ports; TYPE_5__ out_of_line; TYPE_3__ port; TYPE_2__ type; } ;
typedef TYPE_7__ mach_msg_descriptor_t ;
typedef int mach_msg_bits_t ;
struct TYPE_10__ {scalar_t__ msgh_descriptor_count; } ;
struct TYPE_17__ {TYPE_1__ body; } ;
typedef TYPE_8__ mach_msg_base_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;




 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(mach_msg_header_t *VAR_1)
{
    mach_msg_bits_t VAR_2 = VAR_1->msgh_bits;






    FUNC_3(VAR_1->msgh_remote_port, FUNC_0(VAR_2));
    FUNC_3(VAR_1->msgh_voucher_port, FUNC_1(VAR_2));

    if (VAR_2 & VAR_0) {
 mach_msg_base_t *VAR_3;
 mach_msg_type_number_t VAR_4, VAR_5;
 mach_msg_descriptor_t *VAR_6;

     VAR_3 = (mach_msg_base_t *) VAR_1;
 VAR_4 = VAR_3->body.msgh_descriptor_count;

     VAR_6 = (mach_msg_descriptor_t *) (VAR_3 + 1);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {

     switch (VAR_6->type.type) {

     case 128: {
      mach_msg_port_descriptor_t *VAR_7;




      VAR_7 = &VAR_6->port;
      FUNC_3(VAR_7->name, VAR_7->disposition);
      VAR_6 = (mach_msg_descriptor_t *)(VAR_7 + 1);
      break;
     }

     case 131: {
      mach_msg_ool_descriptor_t *VAR_8;




      VAR_8 = &VAR_6->out_of_line;
      if (VAR_8->deallocate) {
          FUNC_2((vm_offset_t)VAR_8->address,
      VAR_8->size);
      }
      VAR_6 = (mach_msg_descriptor_t *)(VAR_8 + 1);
      break;
     }

     case 129: {
      mach_msg_ool_descriptor_t *VAR_9;




      VAR_9 = &VAR_6->out_of_line;
      VAR_6 = (mach_msg_descriptor_t *)(VAR_9 + 1);
      break;
     }

     case 130: {
      mach_port_t *VAR_10;
      mach_msg_ool_ports_descriptor_t *VAR_11;
      mach_msg_type_number_t VAR_12;




      VAR_11 = &VAR_6->ool_ports;
      VAR_10 = (mach_port_t *) VAR_11->address;
      for (VAR_12 = 0; VAR_12 < VAR_11->count; VAR_12++, VAR_10++) {
          FUNC_3(*VAR_10, VAR_11->disposition);
      }




      if (VAR_11->deallocate) {
          FUNC_2((vm_offset_t)VAR_11->address,
     VAR_11->count * sizeof(mach_port_t));
      }
      VAR_6 = (mach_msg_descriptor_t *)(VAR_11 + 1);
      break;
     }
     }
 }
    }
}
