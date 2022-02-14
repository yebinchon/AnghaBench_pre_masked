
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int original; int alternative; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static u64 FUNC_1(u64 VAR_4)
{
 u64 VAR_5;
 int VAR_6;






 if (!(VAR_4 & VAR_0))
  return 0;

 VAR_5 = VAR_4 & VAR_2;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  if (VAR_5 == VAR_3[VAR_6].original) {
   VAR_5 = VAR_3[VAR_6].alternative;
   break;
  } else if (VAR_5 == VAR_3[VAR_6].alternative) {
   VAR_5 = VAR_3[VAR_6].original;
   break;
  }
 }

 if (VAR_6 >= FUNC_0(VAR_3))
  return 0;

 return VAR_5 | (VAR_4 & VAR_1);
}
