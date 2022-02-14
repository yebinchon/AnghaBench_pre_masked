
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;

void FUNC_6(void)
{
 vm_offset_t VAR_10;
 kern_return_t VAR_11;

 VAR_6++;
 FUNC_1(&VAR_7);



 if (FUNC_5(VAR_8) > 5) {
  FUNC_2(&VAR_7);
  return;
 }

 VAR_11 = FUNC_0(VAR_9,
     &VAR_10, VAR_3, 0,
     VAR_1|VAR_2, VAR_5);
 if (VAR_11 != VAR_0) {





  FUNC_2(&VAR_7);
  FUNC_3(VAR_4);
  return;
 }

 FUNC_4(VAR_8, VAR_10, VAR_3);

 FUNC_2(&VAR_7);
}
