
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
struct TYPE_3__ {int wYear; scalar_t__ wDay; scalar_t__ wMonth; } ;
typedef TYPE_1__ SYSTEMTIME ;



USHORT FUNC_0(SYSTEMTIME *VAR_0)
{
 return (USHORT)(
  ((UINT)(VAR_0->wYear - 1980) << 9) |
  ((UINT)VAR_0->wMonth<< 5) |
  (UINT)VAR_0->wDay);
}
