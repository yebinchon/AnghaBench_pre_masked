
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

unsigned FUNC_1(vec3_t VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = (VAR_0 + (int)(VAR_3[0]+0.5)) >> VAR_1;
 VAR_5 = (VAR_0 + (int)(VAR_3[1]+0.5)) >> VAR_1;

 if (VAR_4 < 0 || VAR_4 >= VAR_2 || VAR_5 < 0 || VAR_5 >= VAR_2)
 {
  FUNC_0("WARNING! HashVec: point %f %f %f outside valid range\n", VAR_3[0], VAR_3[1], VAR_3[2]);
  FUNC_0("This should never happen!\n");
  return -1;
 }

 return VAR_5*VAR_2 + VAR_4;
}
