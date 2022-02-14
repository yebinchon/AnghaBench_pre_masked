
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vendor_shuffle ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int*,int) ;
 scalar_t__ FUNC_3 (char*,int *,size_t*,int *,int ) ;
 int FUNC_4 (int,int*) ;
 int FUNC_5 (int ) ;

uint64_t FUNC_6(void)
{
   uint64_t VAR_25 = 0;
   if (FUNC_1("neon"))
   {
      VAR_25 |= VAR_8;



   }

   if (FUNC_1("vfpv3"))
      VAR_25 |= VAR_18;

   if (FUNC_1("vfpv4"))
      VAR_25 |= VAR_19;

   if (FUNC_1("asimd"))
   {
      VAR_25 |= VAR_1;




   }
   return VAR_25;
}
