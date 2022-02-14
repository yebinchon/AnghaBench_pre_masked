
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void)
{
 unsigned long VAR_5;

 if (FUNC_0())
  return;

 FUNC_3(VAR_5);

 while (!FUNC_1() && VAR_1 && FUNC_7())
  FUNC_5(&VAR_0);

 while (!VAR_1) {
  if (FUNC_1())
   FUNC_4("Falcon SCSI hasn't ST-DMA lock in interrupt");
  if (!VAR_3) {
   VAR_3 = 1;
   FUNC_6(VAR_4, ((void*)0));
   VAR_1 = 1;
   VAR_3 = 0;
   FUNC_8(&VAR_2);
  } else {
   FUNC_5(&VAR_2);
  }
 }

 FUNC_2(VAR_5);
 if (!VAR_1)
  FUNC_4("Falcon SCSI: someone stole the lock :-(\n");
}
