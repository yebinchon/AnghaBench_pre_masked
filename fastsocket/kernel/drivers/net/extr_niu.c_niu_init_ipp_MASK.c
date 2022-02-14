
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct niu {int port; TYPE_1__* parent; } ;
struct TYPE_2__ {scalar_t__ plat_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct niu*,int,int*) ;
 int FUNC_1 (struct niu*) ;
 int FUNC_2 (struct niu*,int,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct niu *VAR_17)
{
 u64 VAR_18[5], VAR_19[5], VAR_20;
 int VAR_21, VAR_22, VAR_23;

 if (VAR_17->parent->plat_type != VAR_16) {
  if (VAR_17->port == 0 || VAR_17->port == 1)
   VAR_22 = VAR_0;
  else
   VAR_22 = VAR_1;
 } else
  VAR_22 = VAR_15;

 VAR_18[0] = 0;
 VAR_18[1] = 0;
 VAR_18[2] = 0;
 VAR_18[3] = 0;
 VAR_18[4] = 0;

 for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
  FUNC_2(VAR_17, VAR_21, VAR_18);
  FUNC_0(VAR_17, VAR_21, VAR_19);
 }

 (void) FUNC_3(VAR_11);
 (void) FUNC_3(VAR_11);

 VAR_23 = FUNC_1(VAR_17);
 if (VAR_23)
  return VAR_23;

 (void) FUNC_3(VAR_14);
 (void) FUNC_3(VAR_2);
 (void) FUNC_3(VAR_10);

 (void) FUNC_3(VAR_11);

 FUNC_4(VAR_12, ~VAR_13);

 VAR_20 = FUNC_3(VAR_3);
 VAR_20 &= ~VAR_8;
 VAR_20 |= (VAR_7 |
  VAR_5 |
  VAR_6 |
  VAR_4 |
  (0x1ffff << VAR_9));
 FUNC_4(VAR_3, VAR_20);

 return 0;
}
