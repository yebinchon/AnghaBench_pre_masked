
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {size_t code; size_t* region; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static u8 *FUNC_1(u8 VAR_1)
{
 u8 VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].code == VAR_1)
   return (VAR_0[VAR_2].region);
 }

 return (VAR_0[0].region);
}
