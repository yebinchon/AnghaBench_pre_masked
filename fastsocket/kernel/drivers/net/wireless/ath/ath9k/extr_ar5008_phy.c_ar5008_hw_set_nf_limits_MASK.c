
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nominal; int min; int max; } ;
struct TYPE_3__ {int nominal; int min; int max; } ;
struct ath_hw {TYPE_2__ nf_5g; TYPE_1__ nf_2g; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct ath_hw *VAR_6)
{
 VAR_6->nf_2g.max = VAR_0;
 VAR_6->nf_2g.min = VAR_2;
 VAR_6->nf_2g.nominal = VAR_4;
 VAR_6->nf_5g.max = VAR_1;
 VAR_6->nf_5g.min = VAR_3;
 VAR_6->nf_5g.nominal = VAR_5;
}
