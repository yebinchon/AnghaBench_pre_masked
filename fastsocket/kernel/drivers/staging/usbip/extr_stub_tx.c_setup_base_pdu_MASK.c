
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_header_basic {scalar_t__ direction; scalar_t__ ep; scalar_t__ devid; void* seqnum; void* command; } ;
typedef void* __u32 ;



__attribute__((used)) static inline void FUNC_0(struct usbip_header_basic *VAR_0,
  __u32 VAR_1, __u32 VAR_2)
{
 VAR_0->command = VAR_1;
 VAR_0->seqnum = VAR_2;
 VAR_0->devid = 0;
 VAR_0->ep = 0;
 VAR_0->direction = 0;
}
