
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgs8gxx_state {TYPE_1__* config; } ;
struct TYPE_2__ {scalar_t__ prod; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct lgs8gxx_state*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct lgs8gxx_state *VAR_1, u8 *VAR_2)
{
 int VAR_3 = 0;
 u8 VAR_4;

 if (VAR_1->config->prod == VAR_0)
  VAR_3 = FUNC_0(VAR_1, 0x13, &VAR_4);
 else
  VAR_3 = FUNC_0(VAR_1, 0x4B, &VAR_4);
 if (VAR_3 != 0)
  return VAR_3;

 if (VAR_1->config->prod == VAR_0)
  *VAR_2 = ((VAR_4 & 0x80) == 0x80) ? 1 : 0;
 else
  *VAR_2 = ((VAR_4 & 0xC0) == 0xC0) ? 1 : 0;
 return 0;
}
