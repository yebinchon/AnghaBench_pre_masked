
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlpanel {int nrports; int iobase; int brdnr; int panelnr; scalar_t__ pagenr; } ;
struct stlbrd {scalar_t__ brdtype; int ioctrl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*,struct stlbrd*,struct stlpanel*) ;
 int FUNC_5 (char*,int ,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct stlbrd *VAR_11, struct stlpanel *VAR_12)
{
 unsigned int VAR_13;
 int VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;
 unsigned long VAR_20;

 FUNC_4("stl_panelinit(brdp=%p,panelp=%p)\n", VAR_11, VAR_12);

 FUNC_6(&VAR_10, VAR_20);
 FUNC_1(VAR_12->brdnr, VAR_12->pagenr);




 VAR_14 = 0;
 VAR_17 = VAR_12->nrports / VAR_4;
 for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {
  if (VAR_11->brdtype == VAR_0) {
   FUNC_3((VAR_12->pagenr + (VAR_15 >> 1)), VAR_11->ioctrl);
   VAR_19 = VAR_12->iobase;
  } else
   VAR_19 = VAR_12->iobase + (VAR_5 * (VAR_15 >> 1));
  VAR_18 = (VAR_15 & 0x01) ? 0x080 : 0;
  FUNC_3((VAR_7 + VAR_18), VAR_19);
  FUNC_3(0, (VAR_19 + VAR_6));
  FUNC_3((VAR_1 + VAR_18), VAR_19);
  FUNC_3(VAR_3, (VAR_19 + VAR_6));
  FUNC_3(VAR_3, (VAR_19 + VAR_6));
  FUNC_3((VAR_7 + VAR_18), VAR_19);
  for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++)
   if ((VAR_13 = FUNC_2(VAR_19 + VAR_6)) != 0)
    break;

  if ((VAR_16 >= VAR_2) || (VAR_13 < 0x40) || (VAR_13 > 0x60)) {
   FUNC_5("STALLION: cd1400 not responding, "
    "brd=%d panel=%d chip=%d\n",
    VAR_12->brdnr, VAR_12->panelnr, VAR_15);
   continue;
  }
  VAR_14 |= (0x1 << VAR_15);
  FUNC_3((VAR_8 + VAR_18), VAR_19);
  FUNC_3(VAR_9, (VAR_19 + VAR_6));
 }

 FUNC_0(VAR_12->brdnr);
 FUNC_7(&VAR_10, VAR_20);
 return VAR_14;
}
