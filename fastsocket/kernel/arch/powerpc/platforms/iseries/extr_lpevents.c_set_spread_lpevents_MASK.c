
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (char*,unsigned long) ;
 unsigned long FUNC_1 (char*,int *,int ) ;
 unsigned long VAR_1 ;

__attribute__((used)) static int FUNC_2(char *VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_2, ((void*)0), 0);





 if (( VAR_3 > 0) && (VAR_3 <= VAR_0)) {
  VAR_1 = VAR_3;
  FUNC_0("lpevent processing spread over %ld processors\n", VAR_3);
 } else {
  FUNC_0("invalid spread_lpevents %ld\n", VAR_3);
 }

 return 1;
}
