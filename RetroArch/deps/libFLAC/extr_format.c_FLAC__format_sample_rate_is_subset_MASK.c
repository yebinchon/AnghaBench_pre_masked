
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLAC__bool ;


 int FUNC_0 (unsigned int) ;

FLAC__bool FUNC_1(unsigned VAR_0)
{
 if(
  !FUNC_0(VAR_0) ||
  (
   VAR_0 >= (1u << 16) &&
   !(VAR_0 % 1000 == 0 || VAR_0 % 10 == 0)
  )
 ) {
  return 0;
 }
 else
  return 1;
}
