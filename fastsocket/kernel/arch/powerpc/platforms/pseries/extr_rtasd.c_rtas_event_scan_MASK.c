
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,unsigned int) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 () ;
 unsigned int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int VAR_6 ;
 int FUNC_8 (unsigned int,int *,int ) ;
 int FUNC_9 () ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_10(struct work_struct *VAR_8)
{
 unsigned int VAR_9;

 FUNC_1();

 FUNC_4();

 VAR_9 = FUNC_5(FUNC_9(), VAR_2);
 if (VAR_9 == VAR_1) {
  VAR_9 = FUNC_3(VAR_2);

  if (VAR_5) {
   VAR_5 = 0;
   VAR_3 = 30*VAR_0/VAR_6;

   if (VAR_7 != -1) {
    FUNC_6("rtasd: enabling surveillance\n");
    FUNC_2(VAR_7);
    FUNC_6("rtasd: surveillance enabled\n");
   }
  }
 }

 FUNC_8(VAR_9, &VAR_4,
  FUNC_0(VAR_3, VAR_9));

 FUNC_7();
}
