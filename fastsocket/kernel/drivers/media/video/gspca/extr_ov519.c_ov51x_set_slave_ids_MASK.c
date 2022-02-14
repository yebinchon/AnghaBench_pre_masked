
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sd {int bridge; scalar_t__ sensor_addr; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sd*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sd *VAR_3,
    u8 VAR_4)
{
 switch (VAR_3->bridge) {
 case 129:
  FUNC_0(VAR_3, VAR_0, VAR_4);
  return;
 case 128:
  VAR_3->sensor_addr = VAR_4;
  return;
 }

 FUNC_0(VAR_3, VAR_2, VAR_4);
 FUNC_0(VAR_3, VAR_1, VAR_4 + 1);
}
