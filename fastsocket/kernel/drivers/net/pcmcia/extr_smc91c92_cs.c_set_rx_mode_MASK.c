
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct smc_private {int lock; } ;
struct net_device {unsigned int base_addr; int flags; int mc_list; scalar_t__ mc_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 struct smc_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_9)
{
    unsigned int VAR_10 = VAR_9->base_addr;
    struct smc_private *VAR_11 = FUNC_2(VAR_9);
    u_int VAR_12[ 2 ] = { 0, };
    unsigned long VAR_13;
    u_short VAR_14;

    if (VAR_9->flags & VAR_1) {
 VAR_14 = VAR_8 | VAR_6 | VAR_7 | VAR_5;
    } else if (VAR_9->flags & VAR_0)
 VAR_14 = VAR_8 | VAR_6 | VAR_5;
    else {
 if (VAR_9->mc_count) {
     FUNC_1(VAR_9->mc_count, VAR_9->mc_list,
          (u_char *)VAR_12);
 }
 VAR_14 = VAR_8 | VAR_6;
    }


    FUNC_5(&VAR_11->lock, VAR_13);
    FUNC_0(3);
    FUNC_3(VAR_12[0], VAR_10 + VAR_2);
    FUNC_3(VAR_12[1], VAR_10 + VAR_3);
    FUNC_0(0);
    FUNC_4(VAR_14, VAR_10 + VAR_4);
    FUNC_0(2);
    FUNC_6(&VAR_11->lock, VAR_13);

    return;
}
