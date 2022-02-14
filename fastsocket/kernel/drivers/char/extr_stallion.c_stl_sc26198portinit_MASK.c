
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {int portnr; int uartaddr; int hwid; int brdnr; int pagenr; scalar_t__ ioaddr; } ;
struct stlpanel {int pagenr; scalar_t__ iobase; } ;
struct stlbrd {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,struct stlbrd*,struct stlpanel*,struct stlport*) ;
 int FUNC_3 (struct stlport*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct stlbrd *VAR_2, struct stlpanel *VAR_3, struct stlport *VAR_4)
{
 FUNC_2("stl_sc26198portinit(brdp=%p,panelp=%p,portp=%p)\n", VAR_2,
   VAR_3, VAR_4);

 if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) ||
     (VAR_4 == ((void*)0)))
  return;

 VAR_4->ioaddr = VAR_3->iobase + ((VAR_4->portnr < 8) ? 0 : 4);
 VAR_4->uartaddr = (VAR_4->portnr & 0x07) << 4;
 VAR_4->pagenr = VAR_3->pagenr;
 VAR_4->hwid = 0x1;

 FUNC_1(VAR_4->brdnr, VAR_4->pagenr);
 FUNC_3(VAR_4, VAR_0, VAR_1);
 FUNC_0(VAR_4->brdnr);
}
