
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tv_mode {int dummy; } ;
struct intel_tv {int tv_format; } ;


 struct tv_mode const* FUNC_0 (int ) ;

__attribute__((used)) static const struct tv_mode *
FUNC_1(struct intel_tv *VAR_0)
{
 return FUNC_0(VAR_0->tv_format);
}
