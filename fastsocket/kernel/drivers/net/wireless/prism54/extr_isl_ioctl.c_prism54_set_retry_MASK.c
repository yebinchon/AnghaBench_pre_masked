
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; scalar_t__ disabled; } ;
typedef int islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,int*) ;
 int * FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_8, struct iw_request_info *VAR_9,
    struct iw_param *VAR_10, char *VAR_11)
{
 islpci_private *VAR_12 = FUNC_1(VAR_8);
 u32 VAR_13 = 0, VAR_14 = 0;
 u32 VAR_15 = 0;
 int VAR_16 = 0;

 if (VAR_10->disabled)

  return -VAR_3;

 if (VAR_10->flags & VAR_5) {
  if (VAR_10->flags & VAR_7)
   VAR_13 = VAR_10->value;
  else if (VAR_10->flags & VAR_6)
   VAR_14 = VAR_10->value;
  else {

   VAR_13 = VAR_10->value;
   VAR_14 = VAR_10->value;
  }
 }
 if (VAR_10->flags & VAR_4)

  VAR_15 = VAR_10->value / 1024;


 if (VAR_13)
  VAR_16 =
      FUNC_0(VAR_12, VAR_2, 0, &VAR_13);
 if (VAR_14)
  VAR_16 |=
      FUNC_0(VAR_12, VAR_0, 0, &VAR_14);
 if (VAR_15)
  VAR_16 |=
      FUNC_0(VAR_12, VAR_1, 0,
        &VAR_15);
 return VAR_16;
}
