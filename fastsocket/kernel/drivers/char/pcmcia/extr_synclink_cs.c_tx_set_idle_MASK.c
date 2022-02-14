
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ idle_mode; } ;
typedef TYPE_1__ MGSLPC_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(MGSLPC_INFO *VAR_4)
{

 if (VAR_4->idle_mode == VAR_3)
  FUNC_1(VAR_4, VAR_2 + VAR_1, VAR_0);
 else
  FUNC_0(VAR_4, VAR_2 + VAR_1, VAR_0);
}
