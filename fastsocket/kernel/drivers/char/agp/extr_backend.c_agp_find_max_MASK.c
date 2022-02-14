
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long mem; long agp; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(void)
{
 long VAR_3, VAR_4, VAR_5;


 VAR_3 = VAR_2 >> (20 - VAR_0);



 VAR_4 = 1;

 while ((VAR_3 > VAR_1[VAR_4].mem) && (VAR_4 < 8))
  VAR_4++;

 VAR_5 = VAR_1[VAR_4 - 1].agp +
    ( (VAR_3 - VAR_1[VAR_4 - 1].mem) *
      (VAR_1[VAR_4].agp - VAR_1[VAR_4 - 1].agp)) /
    (VAR_1[VAR_4].mem - VAR_1[VAR_4 - 1].mem);

 VAR_5 = VAR_5 << (20 - VAR_0);
 return VAR_5;
}
