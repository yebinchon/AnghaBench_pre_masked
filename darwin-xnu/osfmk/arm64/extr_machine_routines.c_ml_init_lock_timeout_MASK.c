
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int slto ;
typedef int mtxspin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int*,int) ;
 int VAR_5 ;
 int FUNC_1 (int,int*) ;

void
FUNC_2(void)
{
 uint64_t VAR_6;
 uint64_t VAR_7;
 uint64_t VAR_8 = VAR_3>>2;
 uint32_t VAR_9;

 if (FUNC_0("slto_us", &VAR_9, sizeof (VAR_9)))
  VAR_8 = VAR_9 * VAR_4;

 FUNC_1(VAR_8, &VAR_6);
 VAR_1 = (uint32_t)(VAR_6 / VAR_4);
 VAR_0 = (uint32_t)VAR_6;

 if (FUNC_0("mtxspin", &VAR_7, sizeof (VAR_7))) {
  if (VAR_7 > VAR_5>>4)
   VAR_7 = VAR_5>>4;
   FUNC_1(VAR_7*VAR_4, &VAR_6);
 } else {
  FUNC_1(10*VAR_4, &VAR_6);
 }
 VAR_2 = VAR_6;
}
