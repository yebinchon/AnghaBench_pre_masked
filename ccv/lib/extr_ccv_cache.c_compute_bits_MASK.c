
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(uint64_t VAR_1) {
 return (VAR_0[VAR_1 & 0xffff] + VAR_0[(VAR_1 >> 16) & 0xffff] +
   VAR_0[(VAR_1 >> 32) & 0xffff] + VAR_0[(VAR_1 >> 48) & 0xffff]);
}
