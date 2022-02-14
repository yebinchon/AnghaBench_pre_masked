
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * function; scalar_t__ data; scalar_t__ expires; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_3.function != ((void*)0))
  return;

 FUNC_1(&VAR_3);
 VAR_3.expires = VAR_1 + VAR_0;
 VAR_3.data = 0;
 VAR_3.function = (void *)&VAR_2;
 FUNC_0(&VAR_3);
}
