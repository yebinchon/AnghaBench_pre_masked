
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* bitmap; int pagesize; } ;
typedef TYPE_1__ memmap ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned long,unsigned long,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_3(void)
{
 int VAR_1, VAR_2;
 unsigned long VAR_3 = 0, VAR_4 = 0;
 memmap *VAR_5;


 VAR_5 = (memmap *)FUNC_0(0x28000);

 VAR_2 = FUNC_2(VAR_5);

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {

  if (VAR_5->bitmap[VAR_1] == 0xff)
   VAR_4 += (8 * VAR_5->pagesize);
  else if (!VAR_4)
   VAR_3 += (8 * VAR_5->pagesize);
  else {
   FUNC_1(VAR_3, VAR_4, VAR_0);
   VAR_3 += VAR_4 + (8 * VAR_5->pagesize);
   VAR_4 = 0;
  }
 }
 if (VAR_4)
  FUNC_1(VAR_3, VAR_4, VAR_0);
}
