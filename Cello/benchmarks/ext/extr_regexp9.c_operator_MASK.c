
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(int VAR_12)
{
 if(VAR_12==VAR_6 && --VAR_11<0)
  FUNC_2("unmatched right paren");
 if(VAR_12==VAR_2){
  if(++VAR_9 >= VAR_3)
   FUNC_2 ("too many subexpressions");
  VAR_11++;
  if(VAR_10)
   FUNC_3(VAR_0);
 } else
  FUNC_0(VAR_12);
 if(VAR_12 != VAR_6)
  FUNC_1(VAR_12);
 VAR_10 = VAR_1;
 if(VAR_12==VAR_7 || VAR_12==VAR_5 || VAR_12==VAR_4 || VAR_12==VAR_6)
  VAR_10 = VAR_8;
}
