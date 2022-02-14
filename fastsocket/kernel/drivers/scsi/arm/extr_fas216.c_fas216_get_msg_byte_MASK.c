
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (int *,int ) ;
 unsigned int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(FAS216_Info *VAR_9)
{
 unsigned int VAR_10 = FUNC_2(VAR_9, VAR_0);

 if ((VAR_10 & VAR_6) == 0)
  goto timedout;

 if ((VAR_10 & VAR_5) != VAR_7)
  goto unexpected_phase_change;

 FUNC_1(VAR_9, VAR_4);

 VAR_10 = FUNC_2(VAR_9, VAR_1);

 if ((VAR_10 & VAR_6) == 0)
  goto timedout;

 if (VAR_10 & VAR_8)
  goto parity_error;

 if ((VAR_10 & VAR_5) != VAR_7)
  goto unexpected_phase_change;

 FUNC_1(VAR_9, VAR_4);

 return FUNC_1(VAR_9, VAR_3);

timedout:
 FUNC_0(VAR_9, VAR_2, "timed out waiting for message byte");
 return -1;

unexpected_phase_change:
 FUNC_0(VAR_9, VAR_2, "unexpected phase change: status = %02x", VAR_10);
 return -2;

parity_error:
 FUNC_0(VAR_9, VAR_2, "parity error during message in phase");
 return -3;
}
