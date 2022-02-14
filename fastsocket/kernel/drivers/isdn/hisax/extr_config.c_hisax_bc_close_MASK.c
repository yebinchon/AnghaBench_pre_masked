
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisax_b_if {int dummy; } ;
struct TYPE_2__ {struct hisax_b_if* b_if; } ;
struct BCState {TYPE_1__ hw; } ;


 int FUNC_0 (struct hisax_b_if*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct BCState *VAR_2)
{
 struct hisax_b_if *VAR_3 = VAR_2->hw.b_if;

 if (VAR_3)
  FUNC_0(VAR_3, VAR_0 | VAR_1, ((void*)0));
}
