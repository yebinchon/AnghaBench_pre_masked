
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 () ;

__attribute__((used)) static u64 FUNC_1(unsigned int VAR_13)
{
 u64 VAR_14;

 VAR_14 = FUNC_0();

 if (VAR_13 & VAR_3) {
  if (VAR_13 & VAR_2)
   VAR_14 |= VAR_6;
  if (VAR_13 & VAR_4)
   VAR_14 |= VAR_7;
 }
 if (VAR_13 & VAR_0) {
  if (VAR_13 & VAR_2)
   VAR_14 |= VAR_11;
  if (VAR_13 & VAR_4)
   VAR_14 |= VAR_12;
  if (VAR_13 & VAR_5)
   VAR_14 |= VAR_8;
 }
 if (VAR_13 & VAR_1) {
  if (VAR_13 & VAR_2)
   VAR_14 |= VAR_9;
  if (VAR_13 & VAR_4)
   VAR_14 |= VAR_10;
 }

 return VAR_14;
}
