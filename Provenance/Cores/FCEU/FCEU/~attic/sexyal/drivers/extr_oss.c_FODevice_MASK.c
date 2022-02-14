
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,int ,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(uint64_t VAR_9)
{
 char VAR_10[64];

 if(VAR_9==VAR_6)
 {
  FUNC_3(VAR_10,"/dev/dsp");
  return(FUNC_1(VAR_10,VAR_5));
 }
 else if(VAR_9==VAR_7)
 {
  int VAR_11=-1;
  int VAR_12;
  do
  {
   FUNC_3(VAR_10,"/dev/dsp");
   if(VAR_11!=-1)
    FUNC_2(VAR_10,FUNC_4(VAR_11));
   VAR_12=FUNC_1(VAR_10,VAR_5|VAR_4);
   if(VAR_12!=-1) break;
   VAR_11++;
  } while(VAR_8!=VAR_0);
  if(VAR_12==-1) return(0);
  FUNC_0(VAR_12,VAR_2,FUNC_0(VAR_12,VAR_1)&~VAR_4);
  return(VAR_12);
 }
 else
 {
  FUNC_3(VAR_10,"/dev/dsp");
  FUNC_2(VAR_10,FUNC_4(VAR_9-VAR_3));
  return(FUNC_1(VAR_10,VAR_5));
 }
}
