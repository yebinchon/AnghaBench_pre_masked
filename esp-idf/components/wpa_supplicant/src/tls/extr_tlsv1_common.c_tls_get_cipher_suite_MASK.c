
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct tls_cipher_suite {scalar_t__ suite; } ;


 size_t VAR_0 ;
 struct tls_cipher_suite const* VAR_1 ;

const struct tls_cipher_suite * FUNC_0(u16 VAR_2)
{
 size_t VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3].suite == VAR_2)
   return &VAR_1[VAR_3];
 return ((void*)0);
}
