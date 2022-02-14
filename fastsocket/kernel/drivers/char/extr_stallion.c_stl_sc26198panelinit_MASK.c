
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlpanel {int pagenr; int nrports; int iobase; int brdnr; int panelnr; } ;
struct stlbrd {scalar_t__ brdtype; scalar_t__ ioctrl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (char*,struct stlbrd*,struct stlpanel*) ;
 int FUNC_5 (char*,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct stlbrd *VAR_10, struct stlpanel *VAR_11)
{
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;

 FUNC_4("stl_sc26198panelinit(brdp=%p,panelp=%p)\n", VAR_10, VAR_11);

 FUNC_1(VAR_11->brdnr, VAR_11->pagenr);




 VAR_12 = 0;
 VAR_14 = (VAR_11->nrports + 4) / VAR_4;
 if (VAR_10->brdtype == VAR_0)
  FUNC_3(VAR_11->pagenr, VAR_10->ioctrl);

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_15 = VAR_11->iobase + (VAR_13 * 4);
  FUNC_3(VAR_5, (VAR_15 + VAR_8));
  FUNC_3(VAR_1, (VAR_15 + VAR_9));
  FUNC_3(VAR_6, (VAR_15 + VAR_8));
  if (FUNC_2(VAR_15 + VAR_9) != 0) {
   FUNC_5("STALLION: sc26198 not responding, "
    "brd=%d panel=%d chip=%d\n",
    VAR_11->brdnr, VAR_11->panelnr, VAR_13);
   continue;
  }
  VAR_12 |= (0x1 << VAR_13);
  FUNC_3(VAR_2, (VAR_15 + VAR_8));
  FUNC_3(VAR_3, (VAR_15 + VAR_9));
  FUNC_3(VAR_7, (VAR_15 + VAR_8));
  FUNC_3(0xff, (VAR_15 + VAR_9));
 }

 FUNC_0(VAR_11->brdnr);
 return VAR_12;
}
