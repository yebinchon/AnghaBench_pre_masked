
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_8)
{
 int VAR_9 = 0;

 FUNC_2(&VAR_1, ((void*)0), &VAR_9, VAR_3);
 if (VAR_9) {
  FUNC_4(&VAR_5);
  if (!FUNC_6(&VAR_7)) {
   if (VAR_6 < FUNC_0(VAR_4) - 1)
    VAR_6++;
   FUNC_3(&VAR_7, VAR_2 +
      VAR_4[VAR_6] * VAR_0);
  }
  FUNC_5(&VAR_5);
 } else
  FUNC_1(4, "recovery: end\n");
}
