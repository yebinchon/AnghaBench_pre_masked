
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ nvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct e1000_hw*,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct e1000_hw *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_3->nvm.type == VAR_2) {

  VAR_4 |= VAR_1;
  FUNC_0(VAR_3, &VAR_4);
 }
}
