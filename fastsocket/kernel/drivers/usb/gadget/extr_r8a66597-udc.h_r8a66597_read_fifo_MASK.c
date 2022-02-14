
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8a66597 {unsigned long reg; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ on_chip; } ;


 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned char*,int) ;
 int FUNC_2 (unsigned long,unsigned char*,int) ;
 unsigned int FUNC_3 (unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct r8a66597 *VAR_0,
          unsigned long VAR_1,
          unsigned char *VAR_2,
          int VAR_3)
{
 unsigned long VAR_4 = VAR_0->reg + VAR_1;
 unsigned int VAR_5;
 int VAR_6;

 if (VAR_0->pdata->on_chip) {



  if (VAR_3 >= 4 && !((unsigned long)VAR_2 & 0x03)) {
   FUNC_1(VAR_4, VAR_2, VAR_3 / 4);
   VAR_2 += VAR_3 & ~0x03;
   VAR_3 &= 0x03;
  }


  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
   if (!(VAR_6 & 0x03))
    VAR_5 = FUNC_0(VAR_4);

   VAR_2[VAR_6] = (VAR_5 >> ((VAR_6 & 0x03) * 8)) & 0xff;
  }
 } else {



  if (VAR_3 >= 2 && !((unsigned long)VAR_2 & 0x01)) {
   FUNC_2(VAR_4, VAR_2, VAR_3 / 2);
   VAR_2 += VAR_3 & ~0x01;
   VAR_3 &= 0x01;
  }


  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
   if (!(VAR_6 & 0x01))
    VAR_5 = FUNC_3(VAR_4);

   VAR_2[VAR_6] = (VAR_5 >> ((VAR_6 & 0x01) * 8)) & 0xff;
  }
 }
}
