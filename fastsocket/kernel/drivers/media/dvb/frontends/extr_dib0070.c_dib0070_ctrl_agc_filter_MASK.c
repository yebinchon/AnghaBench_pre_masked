
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct dvb_frontend {struct dib0070_state* tuner_priv; } ;
struct dib0070_state {TYPE_1__* cfg; } ;
struct TYPE_2__ {int vga_filter; } ;


 int FUNC_0 (struct dib0070_state*,int,int) ;
 int FUNC_1 (char*,int) ;

void FUNC_2(struct dvb_frontend *VAR_0, u8 VAR_1)
{
 struct dib0070_state *VAR_2 = VAR_0->tuner_priv;

 if (VAR_1) {
  FUNC_0(VAR_2, 0x1b, 0xff00);
  FUNC_0(VAR_2, 0x1a, 0x0000);
 } else {
  FUNC_0(VAR_2, 0x1b, 0x4112);
 if (VAR_2->cfg->vga_filter != 0) {
  FUNC_0(VAR_2, 0x1a, VAR_2->cfg->vga_filter);
  FUNC_1("vga filter register is set to %x", VAR_2->cfg->vga_filter);
 } else
  FUNC_0(VAR_2, 0x1a, 0x0009);
 }
}
