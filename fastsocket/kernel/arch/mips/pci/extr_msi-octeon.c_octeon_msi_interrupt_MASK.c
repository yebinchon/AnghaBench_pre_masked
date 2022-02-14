
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_9, void *VAR_10)
{
 uint64_t VAR_11;
 int VAR_12;

 if (VAR_8 == VAR_4)
  VAR_11 = FUNC_0(VAR_1);
 else
  VAR_11 = FUNC_0(VAR_0);
 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12) {
  VAR_12 += VAR_6 - 1;
  if (VAR_7[VAR_12].action) {
   FUNC_2(VAR_12);
   return VAR_2;
  } else {
   FUNC_5("Spurious MSI interrupt %d\n", VAR_12);
   if (FUNC_4(VAR_5)) {

    FUNC_1(VAR_1,
            1ull << (VAR_12 -
       VAR_6));
   } else {

    FUNC_1(VAR_0,
            1ull << (VAR_12 -
       VAR_6));
   }
  }
 }
 return VAR_3;
}
