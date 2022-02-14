
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int avmcard ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(avmcard *VAR_0)
{
 int VAR_1;

 if ((VAR_1 = FUNC_2(VAR_0)) != 0)
  return VAR_1;



 if ( FUNC_1(VAR_0, 0x80001000, 0x11) != 0
     || FUNC_1(VAR_0, 0x80101000, 0x22) != 0
     || FUNC_1(VAR_0, 0x80201000, 0x33) != 0
     || FUNC_1(VAR_0, 0x80301000, 0x44) != 0)
  return 6;

 if ( FUNC_0(VAR_0, 0x80001000) != 0x11
     || FUNC_0(VAR_0, 0x80101000) != 0x22
     || FUNC_0(VAR_0, 0x80201000) != 0x33
     || FUNC_0(VAR_0, 0x80301000) != 0x44)
  return 7;

 if ( FUNC_1(VAR_0, 0x80001000, 0x55) != 0
     || FUNC_1(VAR_0, 0x80101000, 0x66) != 0
     || FUNC_1(VAR_0, 0x80201000, 0x77) != 0
     || FUNC_1(VAR_0, 0x80301000, 0x88) != 0)
  return 8;

 if ( FUNC_0(VAR_0, 0x80001000) != 0x55
     || FUNC_0(VAR_0, 0x80101000) != 0x66
     || FUNC_0(VAR_0, 0x80201000) != 0x77
     || FUNC_0(VAR_0, 0x80301000) != 0x88)
  return 9;

 return 0;
}
