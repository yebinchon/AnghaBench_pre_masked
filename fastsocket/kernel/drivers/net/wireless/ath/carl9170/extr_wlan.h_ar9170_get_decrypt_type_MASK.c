
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ar9170_rx_macstatus {int SAidx; int DAidx; } ;



__attribute__((used)) static inline u8 FUNC_0(struct ar9170_rx_macstatus *VAR_0)
{
 return (VAR_0->SAidx & 0xc0) >> 4 |
        (VAR_0->DAidx & 0xc0) >> 6;
}
