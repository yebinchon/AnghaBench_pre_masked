
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int txxon; int txxoff; int modem; } ;
struct stlport {TYPE_1__ stats; int istate; } ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned char VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,struct stlport*,unsigned int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct stlport*) ;
 unsigned char FUNC_4 (struct stlport*,int ) ;
 unsigned char FUNC_5 (struct stlport*,int ) ;
 int FUNC_6 (struct stlport*) ;
 int FUNC_7 (struct stlport*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct stlport *VAR_10, unsigned int VAR_11)
{
 unsigned char VAR_12, VAR_13, VAR_14;

 FUNC_1("stl_sc26198otherisr(portp=%p,iack=%x)\n", VAR_10, VAR_11);

 VAR_12 = FUNC_4(VAR_10, VAR_1);

 switch (VAR_12 & VAR_2) {
 case 129:
  VAR_13 = FUNC_5(VAR_10, VAR_4);
  if (VAR_13 & VAR_5) {
   FUNC_3(VAR_10);
   VAR_10->stats.modem++;
  }
  break;
 case 128:
  VAR_14 = FUNC_5(VAR_10, VAR_7);
  if (VAR_14 & VAR_9) {
   FUNC_2(VAR_0, &VAR_10->istate);
   VAR_10->stats.txxoff++;
  }
  if (VAR_14 & VAR_8) {
   FUNC_0(VAR_0, &VAR_10->istate);
   VAR_10->stats.txxon++;
  }
  break;
 case 130:
  FUNC_7(VAR_10, VAR_6, VAR_3);
  FUNC_6(VAR_10);
  break;
 default:
  break;
 }
}
