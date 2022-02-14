
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef int UINT ;
struct TYPE_5__ {scalar_t__ Checksum; } ;
typedef TYPE_1__ IPV4_HEADER ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

bool FUNC_2(IPV4_HEADER *VAR_0)
{
 UINT VAR_1;
 USHORT VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = FUNC_0(VAR_0) * 4;
 VAR_2 = VAR_0->Checksum;
 VAR_0->Checksum = 0;
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 VAR_0->Checksum = VAR_2;

 if (VAR_2 == VAR_3)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
