
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t status_bit_mask; size_t enable_bit_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 (size_t) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (int ,size_t*) ;
 int FUNC_4 (size_t) ;
 int VAR_6 ;

u32 FUNC_5(void)
{
 u32 VAR_7 = VAR_1;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 FUNC_1(VAR_6);





 (void)FUNC_3(VAR_4, &VAR_8);
 (void)FUNC_3(VAR_3, &VAR_9);

 FUNC_0((VAR_0,
     "Fixed Event Block: Enable %08X Status %08X\n",
     VAR_9, VAR_8));




 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {



  if ((VAR_8 & VAR_5[VAR_10].
       status_bit_mask)
      && (VAR_9 & VAR_5[VAR_10].
   enable_bit_mask)) {


   FUNC_4(VAR_10);
   VAR_7 |= FUNC_2(VAR_10);
  }
 }

 return (VAR_7);
}
