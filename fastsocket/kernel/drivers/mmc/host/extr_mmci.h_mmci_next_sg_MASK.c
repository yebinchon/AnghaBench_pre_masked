
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmci_host {int sg_len; scalar_t__ sg_off; int sg_ptr; } ;



__attribute__((used)) static inline int FUNC_0(struct mmci_host *VAR_0)
{
 VAR_0->sg_ptr++;
 VAR_0->sg_off = 0;
 return --VAR_0->sg_len;
}
