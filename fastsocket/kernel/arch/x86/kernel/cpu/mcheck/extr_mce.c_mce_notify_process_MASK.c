
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce_info {unsigned long paddr; int restartable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mce_info*) ;
 struct mce_info* FUNC_3 () ;
 int FUNC_4 (char*,int *,int *) ;
 scalar_t__ FUNC_5 (unsigned long,int ,int) ;
 int FUNC_6 (char*,...) ;

void FUNC_7(void)
{
 unsigned long VAR_7;
 struct mce_info *VAR_8 = FUNC_3();
 int VAR_9 = VAR_1;

 if (!VAR_8)
  FUNC_4("Lost physical address for unconsumed uncorrectable error", ((void*)0), ((void*)0));
 VAR_7 = VAR_8->paddr >> VAR_3;

 FUNC_0(VAR_5);

 FUNC_6("Uncorrected hardware memory error in user-access at %llx",
   VAR_8->paddr);





 if (!VAR_8->restartable)
  VAR_9 |= VAR_2;
 if (FUNC_5(VAR_7, VAR_0, VAR_9) < 0) {
  FUNC_6("Memory error not recovered");
  FUNC_1(VAR_4, VAR_6);
 }
 FUNC_2(VAR_8);
}
