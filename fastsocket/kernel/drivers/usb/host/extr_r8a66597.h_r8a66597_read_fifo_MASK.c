
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct r8a66597 {unsigned long reg; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ on_chip; } ;


 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int *,unsigned long) ;
 int FUNC_2 (unsigned long,int *,int) ;
 int FUNC_3 (unsigned char*,unsigned long*,int) ;

__attribute__((used)) static inline void FUNC_4(struct r8a66597 *VAR_0,
          unsigned long VAR_1, u16 *VAR_2,
          int VAR_3)
{
 unsigned long VAR_4 = VAR_0->reg + VAR_1;
 unsigned long VAR_5;

 if (VAR_0->pdata->on_chip) {
  VAR_5 = VAR_3 / 4;
  FUNC_1(VAR_4, VAR_2, VAR_5);

  if (VAR_3 & 0x00000003) {
   unsigned long VAR_6 = FUNC_0(VAR_4);
   FUNC_3((unsigned char *)VAR_2 + VAR_5 * 4, &VAR_6,
          VAR_3 & 0x03);
  }
 } else {
  VAR_3 = (VAR_3 + 1) / 2;
  FUNC_2(VAR_4, VAR_2, VAR_3);
 }
}
