
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {TYPE_1__* onmask; int default_on; } ;
struct TYPE_6__ {int mask; } ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int*,int ,int) ;
 TYPE_2__** VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_4(void)
{

 u16 VAR_3[FUNC_0(VAR_1)];

 int VAR_4, VAR_5;

 FUNC_2(VAR_3, 0, FUNC_0(VAR_1) * sizeof(u16));

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {

  if (!VAR_2[VAR_4]->default_on)
   continue;

  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {


   if (VAR_3[VAR_5] & VAR_2[VAR_4]->onmask[VAR_5].mask) {
    FUNC_1();
    return -VAR_0;
   }
   VAR_3[VAR_5] |= VAR_2[VAR_4]->onmask[VAR_5].mask;
  }
  FUNC_3(VAR_2[VAR_4], 1);
 }
 return 0;
}
