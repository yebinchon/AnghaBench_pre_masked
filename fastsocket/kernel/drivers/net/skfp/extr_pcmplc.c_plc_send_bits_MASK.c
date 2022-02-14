
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d_plc; } ;
struct s_smc {TYPE_1__ debug; } ;
struct s_phy {int np; int* t_val; int bitn; } ;
struct TYPE_4__ {int d_plc; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct s_smc*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct s_smc *VAR_5, struct s_phy *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_6->np ;
 int VAR_9 ;
 int VAR_10 ;

 FUNC_1(VAR_5) ;


 for (VAR_10 = VAR_7-1,VAR_9 = 0 ; VAR_10 >= 0 ; VAR_10--) {
  VAR_9 = (VAR_9<<1) | VAR_6->t_val[VAR_6->bitn+VAR_10] ;
 }
 if (FUNC_2(FUNC_0(VAR_8,VAR_1)) & VAR_0) {



  return(1) ;
 }

 FUNC_3(FUNC_0(VAR_8,VAR_2),VAR_7-1) ;
 FUNC_3(FUNC_0(VAR_8,VAR_3),VAR_9) ;
 return(0) ;
}
