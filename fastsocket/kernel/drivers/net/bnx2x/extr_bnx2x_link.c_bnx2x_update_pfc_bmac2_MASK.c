
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct link_vars {int flow_ctrl; } ;
struct link_params {int feature_config_flags; scalar_t__ port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct bnx2x*,int,int*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct link_params *VAR_11,
       struct link_vars *VAR_12,
       u8 VAR_13)
{



 u32 VAR_14[2];
 struct bnx2x *VAR_15 = VAR_11->bp;
 u32 VAR_16 = VAR_11->port ? VAR_10 :
  VAR_9;
 u32 VAR_17 = 0x14;

 if ((!(VAR_11->feature_config_flags &
       VAR_7)) &&
  (VAR_12->flow_ctrl & VAR_5))

  VAR_17 |= (1<<5);
 VAR_14[0] = VAR_17;
 VAR_14[1] = 0;
 FUNC_1(VAR_15, VAR_16 + VAR_2, VAR_14, 2);
 FUNC_2(30);


 VAR_17 = 0xc0;
 if (!(VAR_11->feature_config_flags &
    VAR_7) &&
     (VAR_12->flow_ctrl & VAR_6))
  VAR_17 |= 0x800000;
 VAR_14[0] = VAR_17;
 VAR_14[1] = 0;
 FUNC_1(VAR_15, VAR_16 + VAR_3, VAR_14, 2);

 if (VAR_11->feature_config_flags & VAR_7) {
  FUNC_0(VAR_8, "PFC is enabled\n");

  VAR_14[0] = 0x0;
  VAR_14[0] |= (1<<0);
  VAR_14[0] |= (1<<1);
  VAR_14[0] |= (1<<2);
  VAR_14[0] |= (1<<3);
  VAR_14[0] |= (1<<5);
  VAR_14[1] = 0;
  FUNC_1(VAR_15, VAR_16 + VAR_1,
       VAR_14, 2);

  VAR_14[0] &= ~(1<<2);
 } else {
  FUNC_0(VAR_8, "PFC is disabled\n");

  VAR_14[0] = 0x8;
  VAR_14[1] = 0;
 }

 FUNC_1(VAR_15, VAR_16 + VAR_1, VAR_14, 2);






 VAR_17 = 0x8000;
 if (VAR_11->feature_config_flags & VAR_7)
  VAR_17 |= (1<<16);

 VAR_14[0] = VAR_17;
 VAR_14[1] = 0;
 FUNC_1(VAR_15, VAR_16 + VAR_4,
      VAR_14, 2);


 VAR_17 = 0x3;
 if (VAR_13) {
  VAR_17 |= 0x4;
  FUNC_0(VAR_8, "enable bmac loopback\n");
 }

 if (VAR_11->feature_config_flags & VAR_7)
  VAR_17 |= ((1<<6)|(1<<5));

 VAR_14[0] = VAR_17;
 VAR_14[1] = 0;
 FUNC_1(VAR_15, VAR_16 + VAR_0, VAR_14, 2);
}
