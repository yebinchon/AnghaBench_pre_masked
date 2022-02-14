
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tda1004x_state {TYPE_1__* config; } ;
typedef int fe_bandwidth_t ;
typedef int bandwidth_8mhz_53M ;
typedef int bandwidth_8mhz_48M ;
typedef int bandwidth_7mhz_53M ;
typedef int bandwidth_7mhz_48M ;
typedef int bandwidth_6mhz_53M ;
typedef int bandwidth_6mhz_48M ;
struct TYPE_2__ {scalar_t__ if_freq; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct tda1004x_state*,int ,int*,int) ;
 int FUNC_1 (struct tda1004x_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct tda1004x_state *VAR_6,
       fe_bandwidth_t VAR_7)
{
 static u8 VAR_8[] = { 0x7b, 0x2e, 0x11, 0xf0, 0xd2 };
 static u8 VAR_9[] = { 0x6a, 0x02, 0x6a, 0x43, 0x9f };
 static u8 VAR_10[] = { 0x5c, 0x32, 0xc2, 0x96, 0x6d };

 static u8 VAR_11[] = { 0x70, 0x02, 0x49, 0x24, 0x92 };
 static u8 VAR_12[] = { 0x60, 0x02, 0xaa, 0xaa, 0xab };
 static u8 VAR_13[] = { 0x54, 0x03, 0x0c, 0x30, 0xc3 };
 int VAR_14;

 if ((VAR_6->config->if_freq == VAR_4) ||
     (VAR_6->config->if_freq == VAR_5))
  VAR_14 = 0;
 else
  VAR_14 = 1;
 switch (VAR_7) {
 case 130:
  if (VAR_14)
   FUNC_0(VAR_6, VAR_3, VAR_8,
        sizeof(VAR_8));
  else
   FUNC_0(VAR_6, VAR_3, VAR_11,
        sizeof(VAR_11));
  if (VAR_6->config->if_freq == VAR_4) {
   FUNC_1(VAR_6, VAR_2, 0x0a);
   FUNC_1(VAR_6, VAR_1, 0xab);
  }
  break;

 case 129:
  if (VAR_14)
   FUNC_0(VAR_6, VAR_3, VAR_9,
        sizeof(VAR_9));
  else
   FUNC_0(VAR_6, VAR_3, VAR_12,
        sizeof(VAR_12));
  if (VAR_6->config->if_freq == VAR_4) {
   FUNC_1(VAR_6, VAR_2, 0x0c);
   FUNC_1(VAR_6, VAR_1, 0x00);
  }
  break;

 case 128:
  if (VAR_14)
   FUNC_0(VAR_6, VAR_3, VAR_10,
        sizeof(VAR_10));
  else
   FUNC_0(VAR_6, VAR_3, VAR_13,
        sizeof(VAR_13));
  if (VAR_6->config->if_freq == VAR_4) {
   FUNC_1(VAR_6, VAR_2, 0x0d);
   FUNC_1(VAR_6, VAR_1, 0x55);
  }
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
