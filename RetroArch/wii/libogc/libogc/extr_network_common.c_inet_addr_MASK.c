
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_t ;
struct in_addr {int s_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,struct in_addr*) ;

u32_t FUNC_1(const char *VAR_1)
 {
     struct in_addr VAR_2;

     if (FUNC_0(VAR_1, &VAR_2)) {
         return (VAR_2.s_addr);
     }
     return (VAR_0);
 }
