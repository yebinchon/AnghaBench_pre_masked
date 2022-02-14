
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* a; } ;
struct s_smc {TYPE_2__ mib; } ;
struct TYPE_3__ {scalar_t__ fddiPATHT_Rmode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ) ;
 size_t VAR_1 ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(struct s_smc *VAR_2)
{



 FUNC_1("RMT: setting new fddiPATHT_Rmode, t = %d ns \n",
  (int) VAR_2->mib.a[VAR_1].fddiPATHT_Rmode,0) ;
 FUNC_2(FUNC_0(VAR_0),VAR_2->mib.a[VAR_1].fddiPATHT_Rmode) ;
}
