
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_10(int *VAR_12)
{
 unsigned long VAR_13;

 *VAR_12 = 0;
 if (VAR_10) {
  FUNC_1(&VAR_9, VAR_13);
  FUNC_3();
  FUNC_7(VAR_0);
  if (FUNC_5(VAR_4) & VAR_8) {
   FUNC_6(0x00, VAR_4);
   FUNC_0(VAR_7, &VAR_11);
   *VAR_12 |= VAR_1;
  }

  FUNC_4();
  FUNC_2(&VAR_9, VAR_13);
 }
 if (FUNC_8(VAR_6, &VAR_11))
  *VAR_12 |= VAR_2;
 if (FUNC_9(VAR_5, &VAR_11))
  *VAR_12 |= VAR_3;
 return 0;
}
