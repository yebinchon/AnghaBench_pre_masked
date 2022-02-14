
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_3__ {scalar_t__ period_factor; int period; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static u_int
FUNC_1(u_int VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {

  if (VAR_1 == VAR_0[VAR_2].period_factor) {

   return (100000000 / VAR_0[VAR_2].period);
  }
 }





 return (10000000 / (VAR_1 * 4 * 10));
}
