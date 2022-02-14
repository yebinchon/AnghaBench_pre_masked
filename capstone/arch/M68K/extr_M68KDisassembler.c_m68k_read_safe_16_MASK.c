
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ const baseAddress; scalar_t__ const address_mask; scalar_t__ const code_len; } ;
typedef TYPE_1__ m68k_info ;


 unsigned int FUNC_0 (TYPE_1__ const*,scalar_t__ const) ;

__attribute__((used)) static unsigned int FUNC_1(const m68k_info *VAR_0, const uint64_t VAR_1)
{
 const uint64_t VAR_2 = (VAR_1 - VAR_0->baseAddress) & VAR_0->address_mask;
 if (VAR_0->code_len < VAR_2 + 2) {
  return 0xaaaa;
 }
 return FUNC_0(VAR_0, VAR_2);
}
