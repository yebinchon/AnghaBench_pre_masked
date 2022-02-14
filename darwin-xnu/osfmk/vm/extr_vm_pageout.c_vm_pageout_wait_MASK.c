
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ kern_return_t ;
typedef int event_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

kern_return_t
FUNC_3(uint64_t VAR_9)
{
 kern_return_t VAR_10;

 FUNC_0(&VAR_6);
 for (VAR_10 = VAR_1; VAR_7 && (VAR_1 == VAR_10); ) {
  VAR_8 = VAR_5;
  if (VAR_3 != FUNC_1(
    &VAR_6, VAR_2,
    (event_t) &VAR_8, VAR_4, VAR_9)) {
   VAR_10 = VAR_0;
  }
 }
 FUNC_2(&VAR_6);

 return (VAR_10);
}
