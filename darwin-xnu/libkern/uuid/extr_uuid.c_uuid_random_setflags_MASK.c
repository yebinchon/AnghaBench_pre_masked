
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* uuid_t ;



__attribute__((used)) static void
FUNC_0(uuid_t VAR_0)
{
 VAR_0[6] = (VAR_0[6] & 0x0F) | 0x40;
 VAR_0[8] = (VAR_0[8] & 0x3F) | 0x80;
}
