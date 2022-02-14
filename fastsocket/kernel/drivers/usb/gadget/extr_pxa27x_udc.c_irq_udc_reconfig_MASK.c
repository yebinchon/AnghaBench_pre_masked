
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {int irqs_reconfig; } ;
struct pxa_udc {unsigned int config; TYPE_1__ stats; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct pxa_udc*,unsigned int) ;
 int FUNC_1 (struct pxa_udc*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct pxa_udc*,int ) ;
 int FUNC_3 (struct pxa_udc*,int ) ;
 int FUNC_4 (struct pxa_udc*,int ,int ) ;
 int FUNC_5 (struct pxa_udc*) ;

__attribute__((used)) static void FUNC_6(struct pxa_udc *VAR_10)
{
 unsigned VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15 = FUNC_2(VAR_10, VAR_0);

 FUNC_4(VAR_10, VAR_8, VAR_9);
 VAR_10->stats.irqs_reconfig++;

 VAR_11 = (VAR_15 & VAR_3) >> VAR_4;
 VAR_14 = (VAR_11 != VAR_10->config);
 FUNC_0(VAR_10, VAR_11);

 VAR_12 = (VAR_15 & VAR_5) >> VAR_6;
 VAR_13 = (VAR_15 & VAR_1) >> VAR_2;
 FUNC_1(VAR_10, VAR_12, VAR_13);

 if (VAR_14)
  FUNC_5(VAR_10);
 FUNC_3(VAR_10, VAR_7);
}
