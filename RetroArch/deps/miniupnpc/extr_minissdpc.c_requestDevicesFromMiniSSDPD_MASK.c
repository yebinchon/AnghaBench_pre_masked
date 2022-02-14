
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int FUNC_0 (unsigned int,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (unsigned char*,char const*,unsigned int) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int,unsigned char*,int) ;

int
FUNC_7(int VAR_4, const char * VAR_5)
{
 unsigned char VAR_6[256];
 unsigned char * VAR_7;
 unsigned int VAR_8;
 unsigned VAR_9 = (unsigned)FUNC_5(VAR_5);
 if(VAR_9 == 8 && 0 == FUNC_2(VAR_5, "ssdp:all", 8))
 {
  VAR_6[0] = 3;
 }
 else
 {
  VAR_6[0] = 1;
 }
 VAR_7 = VAR_6 + 1;
 VAR_8 = VAR_9; FUNC_0(VAR_8, VAR_7);
 if(VAR_7 + VAR_9 > VAR_6 + sizeof(VAR_6))
 {





  return VAR_0;
 }
 FUNC_3(VAR_7, VAR_5, VAR_9);
 VAR_7 += VAR_9;
 if(FUNC_6(VAR_4, VAR_6, VAR_7 - VAR_6) < 0)
 {

  FUNC_4("minissdpc.c: write()");
  return VAR_1;
 }
 return VAR_2;
}
