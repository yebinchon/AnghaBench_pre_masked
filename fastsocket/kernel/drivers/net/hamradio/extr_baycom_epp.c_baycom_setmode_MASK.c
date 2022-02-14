
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int intclk; int extmodem; int loopback; int fclk; int bps; } ;
struct baycom_state {TYPE_1__ cfg; } ;


 void* FUNC_0 (char const*,int *,int ) ;
 char* FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(struct baycom_state *VAR_0, const char *VAR_1)
{
 const char *VAR_2;

 if (FUNC_1(VAR_1,"intclk"))
  VAR_0->cfg.intclk = 1;
 if (FUNC_1(VAR_1,"extclk"))
  VAR_0->cfg.intclk = 0;
 if (FUNC_1(VAR_1,"intmodem"))
  VAR_0->cfg.extmodem = 0;
 if (FUNC_1(VAR_1,"extmodem"))
  VAR_0->cfg.extmodem = 1;
 if (FUNC_1(VAR_1,"noloopback"))
  VAR_0->cfg.loopback = 0;
 if (FUNC_1(VAR_1,"loopback"))
  VAR_0->cfg.loopback = 1;
 if ((VAR_2 = FUNC_1(VAR_1,"fclk="))) {
  VAR_0->cfg.fclk = FUNC_0(VAR_2+5, ((void*)0), 0);
  if (VAR_0->cfg.fclk < 1000000)
   VAR_0->cfg.fclk = 1000000;
  if (VAR_0->cfg.fclk > 25000000)
   VAR_0->cfg.fclk = 25000000;
 }
 if ((VAR_2 = FUNC_1(VAR_1,"bps="))) {
  VAR_0->cfg.bps = FUNC_0(VAR_2+4, ((void*)0), 0);
  if (VAR_0->cfg.bps < 1000)
   VAR_0->cfg.bps = 1000;
  if (VAR_0->cfg.bps > 1500000)
   VAR_0->cfg.bps = 1500000;
 }
 return 0;
}
