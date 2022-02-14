
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int __u8 ;
struct TYPE_6__ {int* c; } ;
struct TYPE_5__ {int * c; } ;
typedef TYPE_1__ MetricomAddressString ;
typedef TYPE_2__ MetricomAddress ;


 int FUNC_0 (int *,char*,int,int,int,int) ;

__attribute__((used)) static __u8 *FUNC_1(const MetricomAddress * VAR_0,
         MetricomAddressString * VAR_1)
{
 FUNC_0(VAR_1->c, "%02X%02X-%02X%02X", VAR_0->c[2], VAR_0->c[3],
  VAR_0->c[4], VAR_0->c[5]);
 return (VAR_1->c);
}
