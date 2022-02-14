
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct link_vars {int phy_flags; } ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct bnx2x*,scalar_t__) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,scalar_t__*,int) ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_5 (struct link_params*,struct link_vars*,scalar_t__,int ,int ,int ) ;

int FUNC_6(struct link_params *VAR_17,
    struct link_vars *VAR_18,
    u8 VAR_19)
{
 struct bnx2x *VAR_20 = VAR_17->bp;
 u32 VAR_21 = 0;
 u32 VAR_22;

 if (((VAR_18->phy_flags & VAR_12) == 0) ||
     (FUNC_2(VAR_20, VAR_8 + VAR_17->port*4)))
  return 0;

 if (FUNC_1(VAR_20) &&
     (FUNC_2(VAR_20, VAR_7) &
       (VAR_6))) {





  VAR_22 = (VAR_17->port) ? VAR_3 : VAR_2;


  FUNC_4(VAR_20, VAR_22 + VAR_15, 0);
  FUNC_4(VAR_20, VAR_22 + VAR_15,
         VAR_13 |
         VAR_14);
  if (FUNC_2(VAR_20, VAR_22 + VAR_16))
   VAR_21 = 1;

  FUNC_5(VAR_17, VAR_18, VAR_21,
      VAR_11,
      VAR_4, VAR_19);
 } else if (FUNC_2(VAR_20, VAR_7) &
     (VAR_5 << VAR_17->port)) {

  u32 VAR_23;
  u32 VAR_24[2];
  VAR_22 = VAR_17->port ? VAR_10 :
   VAR_9;

  if (FUNC_0(VAR_20))
   VAR_23 = VAR_0;
  else
   VAR_23 = VAR_1;

  FUNC_3(VAR_20, VAR_22 + VAR_23, VAR_24, 2);
  VAR_21 = (VAR_24[0] > 0);

  FUNC_5(VAR_17, VAR_18, VAR_21,
      VAR_11,
      VAR_4, VAR_19);
 }
 return 0;
}
