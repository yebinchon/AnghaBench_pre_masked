
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {unsigned int blockheight; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

int FUNC_1(u32 VAR_1, u32 VAR_2)
{
 unsigned VAR_3;

 if (VAR_1 >= FUNC_0(VAR_0))
  return 0;

 VAR_3 = VAR_0[VAR_1].blockheight;
 if (VAR_3 == 0)
  return 0;

 return (VAR_2 + VAR_3 - 1) / VAR_3;
}
