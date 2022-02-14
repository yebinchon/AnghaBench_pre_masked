
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int status; int l2_err; int memio_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (char*) ;

void FUNC_4(void)
{
 u32 VAR_5, VAR_6, VAR_7;






 VAR_5 = FUNC_1(FUNC_0(VAR_3));

 if (!(VAR_5 & 0x7fffffff)) {
  FUNC_3("Using last values reaped by bus watcher driver\n");
  VAR_5 = VAR_4.status;
  VAR_6 = VAR_4.l2_err;
  VAR_7 = VAR_4.memio_err;
 } else {
  VAR_6 = FUNC_1(FUNC_0(VAR_0));
  VAR_7 = FUNC_1(FUNC_0(VAR_1));
 }
 if (VAR_5 & ~(1UL << 31))
  FUNC_2(VAR_5, VAR_6, VAR_7);
 else
  FUNC_3("Bus watcher indicates no error\n");
}
