
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m66592 {TYPE_1__* pdata; scalar_t__ reg; } ;
struct TYPE_2__ {scalar_t__ on_chip; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct m66592*,int ) ;
 int FUNC_1 (unsigned char,unsigned long) ;
 int FUNC_2 (unsigned long,void*,unsigned long) ;
 int FUNC_3 (unsigned long,void*,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct m66592 *VAR_1,
  unsigned long VAR_2,
  void *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = (unsigned long)VAR_1->reg + VAR_2;

 if (VAR_1->pdata->on_chip) {
  unsigned long VAR_6;
  unsigned char *VAR_7;
  int VAR_8;

  VAR_6 = VAR_4 / 4;
  FUNC_2(VAR_5, VAR_3, VAR_6);

  if (VAR_4 & 0x00000003) {
   VAR_7 = VAR_3 + VAR_6 * 4;
   for (VAR_8 = 0; VAR_8 < (VAR_4 & 0x00000003); VAR_8++) {
    if (FUNC_0(VAR_1, VAR_0))
     FUNC_1(VAR_7[VAR_8], VAR_5 + (3 - VAR_8));
    else
     FUNC_1(VAR_7[VAR_8], VAR_5 + VAR_8);
   }
  }
 } else {
  unsigned long VAR_9 = VAR_4 & 0x0001;

  VAR_4 = VAR_4 / 2;
  FUNC_3(VAR_5, VAR_3, VAR_4);
  if (VAR_9) {
   unsigned char *VAR_10 = VAR_3 + VAR_4*2;
   FUNC_1(*VAR_10, VAR_5);
  }
 }
}
