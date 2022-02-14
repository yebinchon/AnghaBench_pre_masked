
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0( char VAR_2)
{
 if( (VAR_2 >= '0' && VAR_2 <= '9') ||
  (VAR_2 >= 'a' && VAR_2 <= 'f') ||
  (VAR_2 >= 'A' && VAR_2 <= 'F') )
 {
  return VAR_1;
 }
 else
 {
  return VAR_0;
 }
}
