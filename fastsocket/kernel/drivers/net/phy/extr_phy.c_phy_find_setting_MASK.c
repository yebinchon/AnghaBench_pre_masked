
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int speed; int duplex; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline int FUNC_1(int VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 while (VAR_4 < FUNC_0(VAR_1) &&
   (VAR_1[VAR_4].speed != VAR_2 ||
   VAR_1[VAR_4].duplex != VAR_3))
  VAR_4++;

 return VAR_4 < VAR_0 ? VAR_4 : VAR_0 - 1;
}
