
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qib_devdata*,char*,int,int,int,...) ;
 int FUNC_1 (struct qib_devdata*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct qib_devdata *VAR_4, int VAR_5, int VAR_6,
        int VAR_7)
{
 int VAR_8 = -1;
 int VAR_9;

 if (VAR_5 & VAR_1) {






  VAR_5 |= (1U << VAR_2);
  VAR_9 = (VAR_5 >> (4 + VAR_0)) & 7;
  if (VAR_7 != 0xFF) {
   VAR_8 = FUNC_1(VAR_4, VAR_3,
       VAR_5 & ~VAR_1, 0, 0);
   if (VAR_8 < 0) {
    int VAR_10 = VAR_5 >> VAR_0;

    FUNC_0(VAR_4,
     "pre-read failed: elt %d, addr 0x%X, chnl %d\n",
     (VAR_10 & 0xF),
     (VAR_10 >> 9) & 0x3f, VAR_9);
    return VAR_8;
   }
   VAR_6 = (VAR_8 & ~VAR_7) | (VAR_6 & VAR_7);
  }
  VAR_5 &= ~(7 << (4+VAR_0));
  VAR_8 = FUNC_1(VAR_4, VAR_3, VAR_5, VAR_6, 0xFF);
  if (VAR_8 < 0) {
   int VAR_11 = VAR_5 >> VAR_0;

   FUNC_0(VAR_4,
    "Global WR failed: elt %d, addr 0x%X, val %02X\n",
    (VAR_11 & 0xF), (VAR_11 >> 9) & 0x3f, VAR_6);
  }
  return VAR_8;
 }

 VAR_5 &= ~(7 << (4+VAR_0));
 VAR_5 |= (1U << VAR_2);
 for (VAR_9 = 0; VAR_9 < 4; ++VAR_9) {
  int VAR_12 = VAR_5 | (VAR_9 << (4+VAR_0));

  VAR_8 = FUNC_1(VAR_4, VAR_3, VAR_12, VAR_6, VAR_7);
  if (VAR_8 < 0) {
   int VAR_13 = VAR_5 >> VAR_0;

   FUNC_0(VAR_4,
    "Write failed: elt %d, addr 0x%X, chnl %d, val 0x%02X, mask 0x%02X\n",
    (VAR_13 & 0xF), (VAR_13 >> 9) & 0x3f, VAR_9,
    VAR_6 & 0xFF, VAR_7 & 0xFF);
   break;
  }
 }
 return VAR_8;
}
