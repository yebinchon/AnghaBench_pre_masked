
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_request {int dummy; } ;
struct fw_card {unsigned long long broadcast_channel; TYPE_1__* driver; } ;
typedef int __be32 ;
struct TYPE_2__ {unsigned long long (* get_bus_time ) (struct fw_card*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long long) ;
 int FUNC_4 (struct fw_card*,struct fw_request*,int) ;
 unsigned long long FUNC_5 (struct fw_card*) ;

__attribute__((used)) static void FUNC_6(struct fw_card *VAR_8, struct fw_request *VAR_9,
  int VAR_10, int VAR_11, int VAR_12, int VAR_13,
  int VAR_14, unsigned long long VAR_15,
  void *VAR_16, size_t VAR_17, void *VAR_18)
{
 int VAR_19 = VAR_15 & ~VAR_2;
 unsigned long long VAR_20;
 __be32 *VAR_21 = VAR_16;
 int VAR_22 = VAR_4;

 switch (VAR_19) {
 case 128:
 case 131:
  if (!FUNC_1(VAR_10) || VAR_17 != 4) {
   VAR_22 = VAR_5;
   break;
  }

  VAR_20 = VAR_8->driver->get_bus_time(VAR_8);
  if (VAR_19 == 128)
   *VAR_21 = FUNC_3(VAR_20);
  else
   *VAR_21 = FUNC_3(VAR_20 >> 25);
  break;

 case 134:
  if (VAR_10 == VAR_6)
   *VAR_21 = FUNC_3(VAR_8->broadcast_channel);
  else if (VAR_10 == VAR_7)
   VAR_8->broadcast_channel =
       (FUNC_2(*VAR_21) & VAR_1) |
       VAR_0;
  else
   VAR_22 = VAR_5;
  break;

 case 132:
 case 135:
 case 130:
 case 129:







  FUNC_0();
  break;

 case 133:


 default:
  VAR_22 = VAR_3;
  break;
 }

 FUNC_4(VAR_8, VAR_9, VAR_22);
}
