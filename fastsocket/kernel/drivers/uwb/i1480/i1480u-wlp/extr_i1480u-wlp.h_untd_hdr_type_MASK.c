
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untd_hdr {int type; } ;
typedef enum i1480u_pkt_type { ____Placeholder_i1480u_pkt_type } i1480u_pkt_type ;



__attribute__((used)) static inline enum i1480u_pkt_type FUNC_0(const struct untd_hdr *VAR_0)
{
 return VAR_0->type & 0x03;
}
