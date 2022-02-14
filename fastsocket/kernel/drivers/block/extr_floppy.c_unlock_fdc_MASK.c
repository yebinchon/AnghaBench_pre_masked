
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static inline void FUNC_9(void)
{
 unsigned long VAR_11;

 VAR_10 = ((void*)0);
 if (!FUNC_7(0, &VAR_6))
  FUNC_0("FDC access conflict!\n");

 if (VAR_4)
  FUNC_0("device interrupt still active at FDC release: %p!\n",
         VAR_4);
 VAR_1 = VAR_0;
 FUNC_5(&VAR_8, VAR_11);
 FUNC_3(&VAR_5);
 VAR_2 = ((void*)0);
 FUNC_2(0, &VAR_6);
 if (VAR_3 || FUNC_1(VAR_9))
  FUNC_4(VAR_9);
 FUNC_6(&VAR_8, VAR_11);
 FUNC_8(&VAR_7);
}
