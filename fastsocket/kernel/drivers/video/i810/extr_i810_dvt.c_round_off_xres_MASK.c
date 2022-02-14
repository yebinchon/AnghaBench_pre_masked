
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



void FUNC_0(u32 *VAR_0)
{
 if (*VAR_0 <= 640)
  *VAR_0 = 640;
 else if (*VAR_0 <= 800)
  *VAR_0 = 800;
 else if (*VAR_0 <= 1024)
  *VAR_0 = 1024;
 else if (*VAR_0 <= 1152)
  *VAR_0 = 1152;
 else if (*VAR_0 <= 1280)
  *VAR_0 = 1280;
 else
  *VAR_0 = 1600;
}
