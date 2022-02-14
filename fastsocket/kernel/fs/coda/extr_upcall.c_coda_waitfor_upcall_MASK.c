
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upc_req {int uc_flags; int uc_sleep; int uc_chain; } ;
typedef int sigset_t ;


 scalar_t__ FUNC_0 (struct upc_req*) ;
 int FUNC_1 (int ,int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 unsigned long VAR_6 ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (unsigned long,unsigned long) ;
 int VAR_9 ;

__attribute__((used)) static inline void FUNC_12(struct upc_req *VAR_10)
{
 FUNC_1(VAR_9, VAR_7);
 unsigned long VAR_11 = VAR_8 + VAR_6 * VAR_0;
 sigset_t VAR_12;
 int VAR_13;

 FUNC_3(&VAR_12);
 VAR_13 = 1;

 FUNC_2(&VAR_10->uc_sleep, &VAR_9);
 for (;;) {
  if (FUNC_0(VAR_10))
   FUNC_9(VAR_3);
  else
   FUNC_9(VAR_5);


  if (VAR_10->uc_flags & (VAR_2 | VAR_1))
   break;

  if (VAR_13 && FUNC_11(VAR_8, VAR_11) &&
      FUNC_0(VAR_10))
  {
   FUNC_4(&VAR_12);
   VAR_13 = 0;
  }

  if (FUNC_10(VAR_7)) {
   FUNC_5(&VAR_10->uc_chain);
   break;
  }

  if (VAR_13)
   FUNC_8(VAR_0);
  else
   FUNC_7();
 }
 if (VAR_13)
  FUNC_4(&VAR_12);

 FUNC_6(&VAR_10->uc_sleep, &VAR_9);
 FUNC_9(VAR_4);
}
