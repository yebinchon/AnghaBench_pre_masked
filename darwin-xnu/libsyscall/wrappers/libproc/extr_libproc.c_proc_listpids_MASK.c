
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int ,void*,int) ;
 int VAR_4 ;

int
FUNC_1(uint32_t VAR_5, uint32_t VAR_6, void *VAR_7, int VAR_8)
{
 int VAR_9;

 if ((VAR_5 >= VAR_1) || (VAR_5 <= VAR_3)) {
  if ((VAR_9 = FUNC_0(VAR_2, VAR_5, VAR_6,(uint64_t)0, VAR_7, VAR_8)) == -1)
   return(0);
 } else {
  VAR_4 = VAR_0;
  VAR_9 = 0;
 }
 return(VAR_9);
}
