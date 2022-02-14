
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* uuid_t ;
typedef int uuid_string_t ;


 int FUNC_0 (int ,int,char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;

void
FUNC_1(const uuid_t VAR_0, uuid_string_t VAR_1)
{
 FUNC_0(VAR_1,
  sizeof(uuid_string_t),
  "%02x%02x%02x%02x-"
  "%02x%02x-"
  "%02x%02x-"
  "%02x%02x-"
  "%02x%02x%02x%02x%02x%02x",
  VAR_0[0], VAR_0[1], VAR_0[2], VAR_0[3],
  VAR_0[4], VAR_0[5],
  VAR_0[6], VAR_0[7],
  VAR_0[8], VAR_0[9],
  VAR_0[10], VAR_0[11], VAR_0[12], VAR_0[13], VAR_0[14], VAR_0[15]);
}
