
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shift; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (unsigned long,int ,int) ;
 unsigned long FUNC_2 (unsigned long,int,int) ;
 unsigned long VAR_2 ;
 TYPE_1__* VAR_3 ;
 unsigned long FUNC_3 (long) ;

__attribute__((used)) static long FUNC_4(unsigned long VAR_4, int VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8;
 long VAR_9;
 unsigned long VAR_10, VAR_11;

 VAR_7 = FUNC_1(VAR_4, VAR_3[VAR_5].shift, VAR_6);
 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6);


 VAR_9 = (VAR_7 & VAR_2) * VAR_0;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_11 = FUNC_3(VAR_9);

  if (FUNC_0(VAR_11, VAR_10) && (VAR_11 & VAR_1))

   return VAR_9;
  ++VAR_9;
 }

 return -1;
}
