
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {int portnr; int uartaddr; int brdnr; int hwid; scalar_t__ pagenr; scalar_t__ ioaddr; } ;
struct stlpanel {scalar_t__ pagenr; scalar_t__ iobase; } ;
struct stlbrd {scalar_t__ brdtype; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,struct stlbrd*,struct stlpanel*,struct stlport*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct stlport*,int ) ;
 int FUNC_6 (struct stlport*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct stlbrd *VAR_6, struct stlpanel *VAR_7, struct stlport *VAR_8)
{
 unsigned long VAR_9;
 FUNC_2("stl_cd1400portinit(brdp=%p,panelp=%p,portp=%p)\n", VAR_6,
   VAR_7, VAR_8);

 if ((VAR_6 == ((void*)0)) || (VAR_7 == ((void*)0)) ||
     (VAR_8 == ((void*)0)))
  return;

 FUNC_3(&VAR_5, VAR_9);
 VAR_8->ioaddr = VAR_7->iobase + (((VAR_6->brdtype == VAR_0) ||
  (VAR_8->portnr < 8)) ? 0 : VAR_2);
 VAR_8->uartaddr = (VAR_8->portnr & 0x04) << 5;
 VAR_8->pagenr = VAR_7->pagenr + (VAR_8->portnr >> 3);

 FUNC_1(VAR_8->brdnr, VAR_8->pagenr);
 FUNC_6(VAR_8, VAR_1, (VAR_8->portnr & 0x03));
 FUNC_6(VAR_8, VAR_4, (VAR_8->portnr << 3));
 VAR_8->hwid = FUNC_5(VAR_8, VAR_3);
 FUNC_0(VAR_8->brdnr);
 FUNC_4(&VAR_5, VAR_9);
}
