
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpx {scalar_t__ cpx_key_len; scalar_t__ cpx_max_key_len; } ;



bool FUNC_0(const struct cpx *VAR_0, const struct cpx *VAR_1)
{
 return VAR_0->cpx_key_len <= VAR_1->cpx_max_key_len;
}
