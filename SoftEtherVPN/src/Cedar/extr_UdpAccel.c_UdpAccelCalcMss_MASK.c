
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT64 ;
typedef int UINT ;
struct TYPE_3__ {int PlainTextMode; scalar_t__ IsIPv6; } ;
typedef TYPE_1__ UDP_ACCEL ;
typedef int UCHAR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

UINT FUNC_0(UDP_ACCEL *VAR_2)
{
 UINT VAR_3;


 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = VAR_0;


 if (VAR_2->IsIPv6)
 {
  VAR_3 -= 40;
 }
 else
 {
  VAR_3 -= 20;
 }


 VAR_3 -= 8;

 if (VAR_2->PlainTextMode == 0)
 {

  VAR_3 -= VAR_1;
 }


 VAR_3 -= sizeof(UINT);


 VAR_3 -= sizeof(UINT64);


 VAR_3 -= sizeof(UINT64);


 VAR_3 -= sizeof(USHORT);


 VAR_3 -= sizeof(UCHAR);

 if (VAR_2->PlainTextMode == 0)
 {

  VAR_3 -= VAR_1;
 }


 VAR_3 -= 14;


 VAR_3 -= 20;


 VAR_3 -= 20;

 return VAR_3;
}
