
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int dwPageSize; scalar_t__ dwAllocationGranularity; } ;
typedef TYPE_1__ SYSTEM_INFO ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int *,int,int ,int *) ;

bool
FUNC_6(void)
{
 if (!VAR_10)
  VAR_10 = VAR_0;



 VAR_7 = (FUNC_1(1) << VAR_10);
 FUNC_2(VAR_7 >= VAR_3);
 VAR_8 = VAR_7 - 1;
 VAR_4 = (VAR_7 >> VAR_1);

 if (VAR_9 && FUNC_3())
  return (1);
 if (FUNC_5(&VAR_5, (FUNC_1(1) << (VAR_2+3)) -
     VAR_10, VAR_6, ((void*)0)))
  return (1);

 return (0);
}
