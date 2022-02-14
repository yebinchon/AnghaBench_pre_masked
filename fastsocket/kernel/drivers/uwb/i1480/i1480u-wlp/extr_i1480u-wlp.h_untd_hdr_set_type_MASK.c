
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untd_hdr {int type; } ;
typedef enum i1480u_pkt_type { ____Placeholder_i1480u_pkt_type } i1480u_pkt_type ;



__attribute__((used)) static inline void FUNC_0(struct untd_hdr *VAR_0, enum i1480u_pkt_type VAR_1)
{
 VAR_0->type = (VAR_0->type & ~0x03) | VAR_1;
}
