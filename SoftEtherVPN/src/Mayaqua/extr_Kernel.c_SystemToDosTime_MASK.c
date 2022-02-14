
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
struct TYPE_3__ {scalar_t__ wSecond; scalar_t__ wMinute; scalar_t__ wHour; } ;
typedef TYPE_1__ SYSTEMTIME ;



USHORT FUNC_0(SYSTEMTIME *VAR_0)
{
 return (USHORT)(
  ((UINT)VAR_0->wHour << 11) |
  ((UINT)VAR_0->wMinute << 5) |
  ((UINT)VAR_0->wSecond >> 1));
}
