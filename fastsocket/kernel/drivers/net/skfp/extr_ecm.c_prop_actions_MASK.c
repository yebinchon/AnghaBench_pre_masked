
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char trace_prop; int path_test; } ;
struct TYPE_3__ {int sas; } ;
struct s_smc {TYPE_2__ e; TYPE_1__ s; } ;


 int FUNC_0 (char*,char,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct s_smc*,int ) ;

 int VAR_9 ;
 int VAR_10 ;

 int FUNC_4 (struct s_smc*,int ,int ) ;

 int FUNC_5 (struct s_smc*) ;
 int FUNC_6 (struct s_smc*) ;
 int FUNC_7 (struct s_smc*) ;
 int FUNC_8 (struct s_smc*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_9(struct s_smc *VAR_11)
{
 int VAR_12 = 0 ;
 int VAR_13 = 0 ;

 FUNC_3(VAR_11,VAR_8) ;
 switch (VAR_11->s.sas) {
 case 128 :
  VAR_12 = VAR_13 = FUNC_7(VAR_11) ;
  break ;
 case 130 :
  VAR_12 = FUNC_5(VAR_11) ;
  VAR_13 = FUNC_6(VAR_11) ;
  break ;
 case 129 :
  FUNC_4(VAR_11,VAR_9, VAR_10) ;
  return ;
 }

 FUNC_0("ECM : prop_actions - trace_prop %d\n", VAR_11->e.trace_prop,0) ;
 FUNC_0("ECM : prop_actions - in %d out %d\n", VAR_12,VAR_13) ;

 if (VAR_11->e.trace_prop & FUNC_1(VAR_0)) {

  FUNC_0("ECM : initiate TRACE on PHY %c\n",'A'+VAR_12-VAR_4,0) ;
  FUNC_8(VAR_11,VAR_1+VAR_12,VAR_6) ;
 }
 else if ((VAR_11->e.trace_prop & FUNC_1(FUNC_2(VAR_4))) &&
  VAR_13 != VAR_4) {

  FUNC_0("ECM : propagate TRACE on PHY B\n",0,0) ;
  FUNC_8(VAR_11,VAR_3,VAR_6) ;
 }
 else if ((VAR_11->e.trace_prop & FUNC_1(FUNC_2(VAR_5))) &&
  VAR_13 != VAR_5) {

  FUNC_0("ECM : propagate TRACE on PHY A\n",0,0) ;
  FUNC_8(VAR_11,VAR_2,VAR_6) ;
 }
 else {

  FUNC_0("ECM : TRACE terminated\n",0,0) ;
  VAR_11->e.path_test = VAR_7 ;
 }
 VAR_11->e.trace_prop = 0 ;
}
