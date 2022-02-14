
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct r8a66597 {unsigned long reg; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ on_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char,unsigned long) ;
 int FUNC_1 (unsigned long,scalar_t__*,unsigned long) ;
 int FUNC_2 (unsigned long,scalar_t__*,int) ;
 int FUNC_3 (struct r8a66597*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5(struct r8a66597 *VAR_2,
           unsigned long VAR_3, u16 *VAR_4,
           int VAR_5)
{
 unsigned long VAR_6 = VAR_2->reg + VAR_3;
 unsigned long VAR_7;
 unsigned char *VAR_8;
 int VAR_9;

 if (VAR_2->pdata->on_chip) {
  VAR_7 = VAR_5 / 4;
  FUNC_1(VAR_6, VAR_4, VAR_7);

  if (VAR_5 & 0x00000003) {
   VAR_8 = (unsigned char *)VAR_4 + VAR_7 * 4;
   for (VAR_9 = 0; VAR_9 < (VAR_5 & 0x00000003); VAR_9++) {
    if (FUNC_3(VAR_2, VAR_1) & VAR_0)
     FUNC_0(VAR_8[VAR_9], VAR_6 + VAR_9);
    else
     FUNC_0(VAR_8[VAR_9], VAR_6 + 3 - VAR_9);
   }
  }
 } else {
  int VAR_10 = VAR_5 & 0x0001;

  VAR_5 = VAR_5 / 2;
  FUNC_2(VAR_6, VAR_4, VAR_5);
  if (FUNC_4(VAR_10)) {
   VAR_4 = &VAR_4[VAR_5];
   FUNC_0((unsigned char)*VAR_4, VAR_6);
  }
 }
}
