
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLAC__int64 ;


 int FUNC_0 (int) ;

unsigned FUNC_1(FLAC__int64 VAR_0)
{
 if(VAR_0 == 0)
  return 0;

 if(VAR_0 == -1)
  return 2;

 VAR_0 = (VAR_0 < 0) ? (-(VAR_0+1)) : VAR_0;
 return FUNC_0(VAR_0)+2;
}
