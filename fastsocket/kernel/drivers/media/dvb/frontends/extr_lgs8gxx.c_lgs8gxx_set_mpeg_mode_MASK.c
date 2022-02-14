
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgs8gxx_state {TYPE_1__* config; } ;
struct TYPE_2__ {scalar_t__ prod; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lgs8gxx_state*,int,int*) ;
 int FUNC_1 (struct lgs8gxx_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct lgs8gxx_state *VAR_7,
 u8 VAR_8, u8 VAR_9, u8 VAR_10)
{
 int VAR_11 = 0;
 u8 VAR_12, VAR_13;

 VAR_13 = (VAR_7->config->prod == VAR_0) ? 0x30 : 0xC2;
 VAR_11 = FUNC_0(VAR_7, VAR_13, &VAR_12);
 if (VAR_11 != 0)
  return VAR_11;

 VAR_12 &= 0xF8;
 VAR_12 |= VAR_8 ? VAR_6 : VAR_5;
 VAR_12 |= VAR_9 ? VAR_3 : VAR_4;
 VAR_12 |= VAR_10 ? VAR_2 : VAR_1;

 VAR_11 = FUNC_1(VAR_7, VAR_13, VAR_12);
 if (VAR_11 != 0)
  return VAR_11;

 return 0;
}
