
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ s32 ;
struct TYPE_5__ {int driver; } ;
struct TYPE_4__ {scalar_t__ expires; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,void*,int ) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_3(void *VAR_6)
{
 int VAR_7;
 VAR_7 = FUNC_2(&VAR_1.driver, ((void*)0), VAR_6,
         VAR_0);
 FUNC_0(VAR_7);


 if ((s32)(VAR_2 + VAR_5 - VAR_4) <= 0)
  VAR_2 = VAR_4 + 1;
 else
  VAR_2 += VAR_5;
 VAR_3.expires = VAR_2;
 FUNC_1(&VAR_3);
}
