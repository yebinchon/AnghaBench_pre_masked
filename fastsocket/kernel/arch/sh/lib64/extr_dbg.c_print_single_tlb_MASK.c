
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regType_t ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (char*,...) ;

void FUNC_10(unsigned long VAR_2, int VAR_3)
{
 regType_t VAR_4;
 regType_t VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 char *VAR_12;
 char *VAR_13;







 VAR_4 = FUNC_8(VAR_2);
 VAR_6 = FUNC_7(VAR_4);
 if (VAR_3)
  FUNC_9(VAR_0);
 else if (!VAR_6)
  return;

 VAR_5 = FUNC_8(VAR_2 + 1);

 VAR_7 = FUNC_6(VAR_4);
 VAR_8 = FUNC_0(VAR_4);
 VAR_9 = FUNC_2(VAR_4);
 VAR_10 = FUNC_1(VAR_5);
 VAR_12 = FUNC_3(VAR_5);
 VAR_13 = FUNC_5(VAR_5);
 VAR_11 = FUNC_4(VAR_5);
 FUNC_9("[%c%2ld]  0x%08x  0x%08x  %03d   %02x    %02x   %4s    %s\n",
        ((VAR_6) ? ' ' : 'u'), ((VAR_2 & 0x0ffff) / VAR_1),
        VAR_11, VAR_9, VAR_8, VAR_7, VAR_10, VAR_12, VAR_13);
}
