
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_port_s {int dummy; } ;
struct bfa_fcs_lport_s {struct bfad_port_s* bfad_port; } ;



__attribute__((used)) static inline struct bfad_port_s *
FUNC_0(struct bfa_fcs_lport_s *VAR_0)
{
 return VAR_0->bfad_port;
}
