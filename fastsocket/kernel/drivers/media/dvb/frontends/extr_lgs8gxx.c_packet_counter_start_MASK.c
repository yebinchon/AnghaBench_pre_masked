
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
 int FUNC_1 (struct lgs8gxx_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct lgs8gxx_state *VAR_1)
{
 u8 VAR_2, VAR_3;

 if (VAR_1->config->prod == VAR_0) {
  FUNC_0(VAR_1, 0x30, &VAR_2);
  VAR_2 &= 0xE7;
  VAR_3 = VAR_2 | 0x10;
  FUNC_1(VAR_1, 0x30, VAR_3);
  VAR_3 = VAR_2 | 0x18;
  FUNC_1(VAR_1, 0x30, VAR_3);
  VAR_3 = VAR_2 | 0x10;
  FUNC_1(VAR_1, 0x30, VAR_3);
 } else {
  FUNC_1(VAR_1, 0xC6, 0x01);
  FUNC_1(VAR_1, 0xC6, 0x41);
  FUNC_1(VAR_1, 0xC6, 0x01);
 }
}
