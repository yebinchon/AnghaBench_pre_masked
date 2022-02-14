
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int txbreaks; } ;
struct stlport {int portnr; int brklen; TYPE_1__ stats; int brdnr; int pagenr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,struct stlport*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct stlport*,int ) ;
 int FUNC_6 (struct stlport*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct stlport *VAR_5, int VAR_6)
{
 unsigned long VAR_7;

 FUNC_2("stl_cd1400sendbreak(portp=%p,len=%d)\n", VAR_5, VAR_6);

 FUNC_3(&VAR_4, VAR_7);
 FUNC_1(VAR_5->brdnr, VAR_5->pagenr);
 FUNC_6(VAR_5, VAR_0, (VAR_5->portnr & 0x03));
 FUNC_6(VAR_5, VAR_1,
  ((FUNC_5(VAR_5, VAR_1) & ~VAR_2) |
  VAR_3));
 FUNC_0(VAR_5->brdnr);
 VAR_5->brklen = VAR_6;
 if (VAR_6 == 1)
  VAR_5->stats.txbreaks++;
 FUNC_4(&VAR_4, VAR_7);
}
