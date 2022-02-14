
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ mach_vm_size_t ;
typedef int mach_vm_address_t ;
struct TYPE_8__ {unsigned int nbytes; scalar_t__ address; } ;
typedef TYPE_2__ kdp_readmem_req_t ;
struct TYPE_7__ {int is_reply; int len; } ;
struct TYPE_9__ {TYPE_1__ hdr; int error; scalar_t__ data; } ;
typedef TYPE_3__ kdp_readmem_reply_t ;
struct TYPE_10__ {TYPE_3__ readmem_reply; TYPE_2__ readmem_req; } ;
typedef TYPE_4__ kdp_pkt_t ;
typedef int caddr_t ;
typedef int boolean_t ;
struct TYPE_11__ {unsigned short reply_port; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 TYPE_6__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static boolean_t
FUNC_3(
    kdp_pkt_t *VAR_5,
    int *VAR_6,
    unsigned short *VAR_7
)
{
    kdp_readmem_req_t *VAR_8 = &VAR_5->readmem_req;
    size_t VAR_9 = *VAR_6;
    kdp_readmem_reply_t *VAR_10 = &VAR_5->readmem_reply;
    mach_vm_size_t VAR_11;
    unsigned int VAR_12;

    if (VAR_9 < sizeof (*VAR_8))
 return (VAR_0);

    VAR_10->hdr.is_reply = 1;
    VAR_10->hdr.len = sizeof (*VAR_10);

    VAR_12 = VAR_8->nbytes;
    if (VAR_12 > VAR_2)
 VAR_10->error = VAR_1;
    else {
 FUNC_1(("kdp_readmem addr %x size %d\n", VAR_8->address, VAR_12));
 VAR_11 = FUNC_2((mach_vm_address_t)VAR_8->address, (caddr_t)VAR_10->data, VAR_8->nbytes);
 VAR_10->error = FUNC_0(VAR_12, VAR_11);
 FUNC_1(("  cnt %lld error %d\n", VAR_11, VAR_10->error));

 VAR_10->hdr.len += VAR_11;
    }

    *VAR_7 = VAR_4.reply_port;
    *VAR_6 = VAR_10->hdr.len;

    return (VAR_3);
}
