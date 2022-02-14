
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgs8gxx_state {TYPE_1__* config; } ;
struct TYPE_2__ {scalar_t__ prod; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct lgs8gxx_state*,int,int*) ;
 int FUNC_1 (struct lgs8gxx_state*) ;
 int FUNC_2 (struct lgs8gxx_state*,int,int) ;

__attribute__((used)) static int FUNC_3(struct lgs8gxx_state *VAR_2)
{
 int VAR_3 = 0;
 u8 VAR_4;

 if (VAR_2->config->prod == VAR_1) {
  u8 VAR_5;
  FUNC_0(VAR_2, 0x0C, &VAR_4);
  VAR_4 &= (~0x80);
  FUNC_2(VAR_2, 0x0C, VAR_4);

  FUNC_0(VAR_2, 0x0C, &VAR_4);
  FUNC_0(VAR_2, 0x19, &VAR_5);

  if (((VAR_4&0x03) == 0x01) && (VAR_5&0x01)) {
   FUNC_2(VAR_2, 0x6E, 0x05);
   FUNC_2(VAR_2, 0x39, 0x02);
   FUNC_2(VAR_2, 0x39, 0x03);
   FUNC_2(VAR_2, 0x3D, 0x05);
   FUNC_2(VAR_2, 0x3E, 0x28);
   FUNC_2(VAR_2, 0x53, 0x80);
  } else {
   FUNC_2(VAR_2, 0x6E, 0x3F);
   FUNC_2(VAR_2, 0x39, 0x00);
   FUNC_2(VAR_2, 0x3D, 0x04);
  }

  FUNC_1(VAR_2);
  return 0;
 }


 FUNC_2(VAR_2, 0x7E, 0);
 if (VAR_2->config->prod == VAR_0)
  FUNC_2(VAR_2, 0xC1, 0);

 VAR_3 = FUNC_0(VAR_2, 0xC5, &VAR_4);
 VAR_4 = (VAR_4 & 0xE0) | 0x06;
 FUNC_2(VAR_2, 0xC5, VAR_4);

 FUNC_1(VAR_2);

 return 0;
}
