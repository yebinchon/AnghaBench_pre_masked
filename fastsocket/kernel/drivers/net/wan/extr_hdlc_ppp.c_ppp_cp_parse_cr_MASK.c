
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int valid_accm ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int rx_errors; int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int const*,int const*,int) ;
 int FUNC_3 (int*,int const*,int const) ;
 int FUNC_4 (struct net_device*,scalar_t__,int ,int ,int,unsigned int,int const*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_7, u16 VAR_8, u8 VAR_9,
       unsigned int VAR_10, const u8 *VAR_11)
{
 static u8 const VAR_12[6] = { 130, 6, 0, 0, 0, 0 };
 const u8 *VAR_13;
 u8 *VAR_14;
 unsigned int VAR_15 = VAR_10, VAR_16 = 0, VAR_17 = 0;

 if (!(VAR_14 = FUNC_1(VAR_15, VAR_3))) {
  VAR_7->stats.rx_dropped++;
  return;
 }

 for (VAR_13 = VAR_11; VAR_15; VAR_15 -= VAR_13[1], VAR_13 += VAR_13[1]) {
  if (VAR_15 < 2 || VAR_15 < VAR_13[1]) {
   VAR_7->stats.rx_errors++;
   FUNC_0(VAR_14);
   return;
  }

  if (VAR_8 == VAR_4)
   switch (VAR_13[0]) {
   case 128:
    continue;

   case 130:
    if (!FUNC_2(VAR_13, VAR_12,
         sizeof(VAR_12)))
     continue;
    if (!VAR_17) {
     FUNC_3(VAR_14 + VAR_16, VAR_12,
            sizeof(VAR_12));
     VAR_16 += sizeof(VAR_12);
     continue;
    }
    break;
   case 129:
    if (VAR_13[1] != 6 || (!VAR_13[2] && !VAR_13[3] &&
          !VAR_13[4] && !VAR_13[5]))
     break;
    continue;
   }

  FUNC_3(VAR_14 + VAR_17, VAR_13, VAR_13[1]);
  VAR_17 += VAR_13[1];
 }

 if (VAR_17)
  FUNC_4(VAR_7, VAR_8, VAR_5, VAR_2, VAR_9, VAR_17, VAR_14);
 else if (VAR_16)
  FUNC_4(VAR_7, VAR_8, VAR_5, VAR_1, VAR_9, VAR_16, VAR_14);
 else
  FUNC_4(VAR_7, VAR_8, VAR_6, VAR_0, VAR_9, VAR_10, VAR_11);

 FUNC_0(VAR_14);
}
