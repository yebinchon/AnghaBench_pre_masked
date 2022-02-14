
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * vi_handler_t ;
typedef int u32 ;
struct TYPE_2__ {int srsets; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned char*,char*,int const) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ VAR_7 ;
 unsigned long* VAR_8 ;

__attribute__((used)) static void *FUNC_6(int VAR_9, vi_handler_t VAR_10, int VAR_11)
{
 unsigned long VAR_12;
 unsigned long VAR_13 = VAR_8[VAR_9];
 int VAR_14 = VAR_4.srsets;
 u32 *VAR_15;
 unsigned char *VAR_16;

 FUNC_0(!VAR_1 && !VAR_2);

 if (VAR_10 == ((void*)0)) {
  VAR_12 = (unsigned long) VAR_5;
  VAR_11 = 0;
 } else
  VAR_12 = (unsigned long) VAR_10;
 VAR_8[VAR_9] = (unsigned long) VAR_10;

 VAR_16 = (unsigned char *)(VAR_6 + 0x200 + VAR_9*VAR_0);

 if (VAR_11 >= VAR_14)
  FUNC_5("Shadow register set %d not supported", VAR_11);

 if (VAR_1) {
  if (&FUNC_1)
   FUNC_1(VAR_9, VAR_11);
 } else if (VAR_2) {

  if (VAR_14 > 1)
   FUNC_2(0xf << VAR_9*4, VAR_11 << VAR_9*4);
 }

 if (VAR_11 == 0) {





  extern char VAR_17, VAR_18;
  extern char VAR_19, VAR_20;
  extern char VAR_21;
  char *VAR_22 = (VAR_3 == VAR_7) ?
   &VAR_21 : &VAR_17;
  const int VAR_23 = &VAR_20 - VAR_22;
  const int VAR_24 = &VAR_18 - VAR_22;
  const int VAR_25 = &VAR_19 - VAR_22;

  if (VAR_23 > VAR_0) {




   FUNC_5("VECTORSPACING too small");
  }

  FUNC_4(VAR_16, VAR_22, VAR_23);






  VAR_15 = (u32 *)(VAR_16 + VAR_24);
  *VAR_15 = (*VAR_15 & 0xffff0000) | (((u32)VAR_12 >> 16) & 0xffff);
  VAR_15 = (u32 *)(VAR_16 + VAR_25);
  *VAR_15 = (*VAR_15 & 0xffff0000) | ((u32)VAR_12 & 0xffff);
  FUNC_3((unsigned long)VAR_16,
      (unsigned long)(VAR_16+VAR_23));
 }
 else {






  VAR_15 = (u32 *)VAR_16;
  *VAR_15++ = 0x08000000 | (((u32)VAR_12 >> 2) & 0x03fffff);
  *VAR_15 = 0;
  FUNC_3((unsigned long)VAR_16,
      (unsigned long)(VAR_16+8));
 }

 return (void *)VAR_13;
}
