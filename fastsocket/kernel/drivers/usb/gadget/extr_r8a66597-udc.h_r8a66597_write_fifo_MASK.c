
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8a66597 {unsigned long reg; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ on_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned char*,int) ;
 int FUNC_2 (unsigned long,unsigned char*,int) ;
 int FUNC_3 (struct r8a66597*,int ) ;

__attribute__((used)) static inline void FUNC_4(struct r8a66597 *VAR_2,
           unsigned long VAR_3,
           unsigned char *VAR_4,
           int VAR_5)
{
 unsigned long VAR_6 = VAR_2->reg + VAR_3;
 int VAR_7 = 0;
 int VAR_8;

 if (VAR_2->pdata->on_chip) {

  if (VAR_5 >= 4 && !((unsigned long)VAR_4 & 0x03)) {
   FUNC_1(VAR_6, VAR_4, VAR_5 / 4);
   VAR_4 += VAR_5 & ~0x03;
   VAR_5 &= 0x03;
  }
 } else {

  if (VAR_5 >= 2 && !((unsigned long)VAR_4 & 0x01)) {
   FUNC_2(VAR_6, VAR_4, VAR_5 / 2);
   VAR_4 += VAR_5 & ~0x01;
   VAR_5 &= 0x01;
  }
 }


 if (!(FUNC_3(VAR_2, VAR_1) & VAR_0)) {
  if (VAR_2->pdata->on_chip)
   VAR_7 = 0x03;
  else
   VAR_7 = 0x01;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  FUNC_0(VAR_4[VAR_8], VAR_6 + VAR_7 - (VAR_8 & VAR_7));
}
