
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_demux {int tsbufp; int* tsbuf; int lock; } ;


 int FUNC_0 (struct dvb_demux*,int*) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dvb_demux *VAR_0, const u8 *VAR_1, size_t VAR_2)
{
 int VAR_3 = 0, VAR_4, VAR_5;
 u8 VAR_6[188];

 FUNC_2(&VAR_0->lock);

 if (VAR_0->tsbufp) {
  VAR_4 = VAR_0->tsbufp;
  VAR_5 = 204 - VAR_4;
  if (VAR_2 < VAR_5) {
   FUNC_1(&VAR_0->tsbuf[VAR_4], VAR_1, VAR_2);
   VAR_0->tsbufp += VAR_2;
   goto bailout;
  }
  FUNC_1(&VAR_0->tsbuf[VAR_4], VAR_1, VAR_5);
  if ((VAR_0->tsbuf[0] == 0x47) || (VAR_0->tsbuf[0] == 0xB8)) {
   FUNC_1(VAR_6, VAR_0->tsbuf, 188);
   if (VAR_6[0] == 0xB8)
    VAR_6[0] = 0x47;
   FUNC_0(VAR_0, VAR_6);
  }
  VAR_0->tsbufp = 0;
  VAR_3 += VAR_5;
 }

 while (VAR_3 < VAR_2) {
  if ((VAR_1[VAR_3] == 0x47) || (VAR_1[VAR_3] == 0xB8)) {
   if (VAR_2 - VAR_3 >= 204) {
    FUNC_1(VAR_6, &VAR_1[VAR_3], 188);
    if (VAR_6[0] == 0xB8)
     VAR_6[0] = 0x47;
    FUNC_0(VAR_0, VAR_6);
    VAR_3 += 204;
   } else {
    VAR_4 = VAR_2 - VAR_3;
    FUNC_1(VAR_0->tsbuf, &VAR_1[VAR_3], VAR_4);
    VAR_0->tsbufp = VAR_4;
    goto bailout;
   }
  } else {
   VAR_3++;
  }
 }

bailout:
 FUNC_3(&VAR_0->lock);
}
