
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_t ;
struct uthread {int uu_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 () ;
 struct uthread* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(thread_t VAR_9, int VAR_10)
{
 struct uthread *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_11 = FUNC_1(VAR_9);


 if ((VAR_11->uu_flag & VAR_8) != 0)
  return(VAR_1);


 if (FUNC_4(VAR_9)) {
  return(VAR_1);
 }


 if (FUNC_3(VAR_9)) {
  FUNC_5(VAR_9);
  VAR_14 = VAR_0;
 }


 VAR_12 = (VAR_10 == VAR_2) ? VAR_5 : VAR_4;
 VAR_13 = (FUNC_0() == VAR_9) ? VAR_7 : VAR_6;

 FUNC_2(VAR_9, VAR_13, VAR_3, VAR_12);

 return VAR_14;
}
