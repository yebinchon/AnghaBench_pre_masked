
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shift; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (long) ;
 unsigned long FUNC_2 (unsigned long,int ,int ) ;
 unsigned long FUNC_3 (unsigned long,int,int ) ;
 unsigned long VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static long FUNC_4(unsigned long VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 unsigned long VAR_9, VAR_10;
 long VAR_11;
 unsigned long VAR_12, VAR_13;

 VAR_8 = FUNC_2(VAR_6, VAR_5[VAR_7].shift, VAR_3);
 VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_3);

 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  VAR_11 = (VAR_8 & VAR_4) * VAR_0;
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_13 = FUNC_1(VAR_11);

   if (FUNC_0(VAR_13, VAR_12)
       && (VAR_13 & VAR_2)
       && (!!(VAR_13 & VAR_1) == VAR_10)) {

    if (VAR_10)
     VAR_11 = -VAR_11;
    return VAR_11;
   }
   ++VAR_11;
  }
  VAR_8 = ~VAR_8;
 }

 return -1;
}
