
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef scalar_t__ int32 ;


 scalar_t__ FUNC_0 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(uint8 *VAR_2, int32 VAR_3, int32 VAR_4)
{
 uint32 VAR_5;
 uint32 VAR_6;

 VAR_5=FUNC_0(0,VAR_2+4,VAR_3+8);
 VAR_6=FUNC_1(VAR_2);

 if(VAR_5!=VAR_6) return(0);
  VAR_2+=4;

 if(FUNC_1(VAR_2)!=VAR_1)
  return(0);

 VAR_2+=4;
 if(VAR_4)
 {
  if(FUNC_1(VAR_2)<VAR_0)
   return(0);
 }
 else
  if(FUNC_1(VAR_2)!=VAR_0)
   return(0);
 return(1);
}
