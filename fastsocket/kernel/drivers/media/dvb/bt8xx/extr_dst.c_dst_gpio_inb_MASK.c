
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
union dst_gpio_packet {TYPE_1__ rd; } ;
typedef scalar_t__ u8 ;
struct dst_state {int bt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,union dst_gpio_packet*) ;
 int FUNC_1 (int ,int ,int,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct dst_state *VAR_4, u8 *VAR_5)
{
 union dst_gpio_packet VAR_6;
 int VAR_7;

 *VAR_5 = 0;
 if ((VAR_7 = FUNC_0(VAR_4->bt, VAR_1, &VAR_6)) < 0) {
  FUNC_1(VAR_3, VAR_0, 1, "dst_gpio_inb error (err == %i)", VAR_7);
  return -VAR_2;
 }
 *VAR_5 = (u8) VAR_6.rd.value;

 return 0;
}
