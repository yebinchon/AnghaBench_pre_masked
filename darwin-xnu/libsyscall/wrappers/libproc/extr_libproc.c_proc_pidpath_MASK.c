
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int,int ,int ,void*,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (void*) ;

int
FUNC_2(int VAR_7, void * VAR_8, uint32_t VAR_9)
{
 int VAR_10, VAR_11;

 if (VAR_9 < VAR_5) {
  VAR_6 = VAR_0;
  return(0);
 }
 if (VAR_9 > VAR_4) {
  VAR_6 = VAR_1;
  return(0);
 }

 VAR_10 = FUNC_0(VAR_2, VAR_7, VAR_3, (uint64_t)0, VAR_8, VAR_9);
 if (VAR_10 != -1) {
  VAR_11 = (int)FUNC_1(VAR_8);
  return(VAR_11);
 }
 return (0);
}
