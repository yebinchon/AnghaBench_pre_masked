
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static inline void FUNC_8(void)
{
 ktime_t VAR_4;

 FUNC_6(&VAR_1);
 if (FUNC_2(&VAR_0) || VAR_2)
  goto out;
 if (FUNC_5(FUNC_0(&VAR_0)) <= 0) {
  VAR_4 = FUNC_4(0, VAR_3);
  FUNC_1(&VAR_0, VAR_4);
  FUNC_3(&VAR_0);
 }
out:
 FUNC_7(&VAR_1);
}
