
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bi_busfreq; int bi_intfreq; int bi_enetaddr; int bi_memsize; int bi_memstart; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (void*,char*,int*,int) ;

__attribute__((used)) static void FUNC_7(void)
{
 void *VAR_1;

 FUNC_3(VAR_0.bi_memstart, VAR_0.bi_memsize);
 FUNC_2(VAR_0.bi_enetaddr);
 FUNC_1(VAR_0.bi_intfreq, VAR_0.bi_busfreq / 16, VAR_0.bi_busfreq);

 VAR_1 = FUNC_4("/soc/cpm/brg");
 if (VAR_1) {
  FUNC_5("BRG clock-frequency <- 0x%x (%dMHz)\r\n",
         VAR_0.bi_busfreq, FUNC_0(VAR_0.bi_busfreq));
  FUNC_6(VAR_1, "clock-frequency", &VAR_0.bi_busfreq, 4);
 }

}
