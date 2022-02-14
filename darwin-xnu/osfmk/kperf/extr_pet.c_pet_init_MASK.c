
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef scalar_t__ kern_return_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static kern_return_t
FUNC_7(void)
{
 if (VAR_4) {
  return VAR_0;
 }


 VAR_5 = FUNC_3(&VAR_3, ((void*)0));
 FUNC_1(VAR_5);



 FUNC_0(VAR_1, 0);
 thread_t VAR_7;
 kern_return_t VAR_8 = FUNC_2(VAR_6, ((void*)0), &VAR_7);
 if (VAR_8 != VAR_0) {
  FUNC_4(VAR_5, &VAR_3);
  return VAR_8;
 }

 FUNC_6(VAR_7, "kperf sampling");

 FUNC_5(VAR_7);

 VAR_4 = VAR_2;

 return VAR_0;
}
