
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct el_common_EV6_mcheck {int PCTX; int I_CTL; int PAL_BASE; int ISUM; int IER_CM; int EXC_ADDR; int C_STS; int C_STAT; int DC0_SYNDROME; int DC1_SYNDROME; int C_ADDR; int DC_STAT; int MM_STAT; int I_STAT; } ;
struct el_common {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct el_common*) ;
 int FUNC_4 (char*,char*,...) ;

int
FUNC_5(struct el_common *VAR_4, int VAR_5)
{
 struct el_common_EV6_mcheck *VAR_6 =
  (struct el_common_EV6_mcheck *)VAR_4;
 int VAR_7 = VAR_2;

 VAR_7 |= FUNC_1(VAR_6->I_STAT, VAR_5);
 VAR_7 |= FUNC_2(VAR_6->MM_STAT, VAR_6->DC_STAT,
     VAR_6->C_STAT, VAR_5);
 VAR_7 |= FUNC_0(VAR_6->C_ADDR, VAR_6->DC1_SYNDROME,
     VAR_6->DC0_SYNDROME, VAR_6->C_STAT,
     VAR_6->C_STS, VAR_5);

 if (!VAR_5)
  return VAR_7;

 if (VAR_7 != VAR_1) {
  char *VAR_8 = VAR_3;




  FUNC_4("%s    EXC_ADDR: 0x%016lx   IER_CM: 0x%016lx"
              "   ISUM: 0x%016lx\n"
           "    PAL_BASE: 0x%016lx   I_CTL:  0x%016lx"
              "   PCTX: 0x%016lx\n",
         VAR_3,
         VAR_6->EXC_ADDR, VAR_6->IER_CM, VAR_6->ISUM,
         VAR_6->PAL_BASE, VAR_6->I_CTL, VAR_6->PCTX);

  if (VAR_7 == VAR_2) {
   FUNC_4("%s    UNKNOWN error, frame follows:\n",
          VAR_3);
  } else {

   VAR_3 = VAR_0;
  }

  FUNC_3(VAR_4);

  VAR_3 = VAR_8;
 }

 return VAR_7;
}
