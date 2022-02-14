
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union eth1394_hdr {int dummy; } eth1394_hdr ;
struct TYPE_2__ {int max_rec; } ;
struct hpsb_host {TYPE_1__ csr; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct hpsb_host* VAR_1)
{
 return (1 << (VAR_1->csr.max_rec + 1))
   - sizeof(union eth1394_hdr) - VAR_0;
}
