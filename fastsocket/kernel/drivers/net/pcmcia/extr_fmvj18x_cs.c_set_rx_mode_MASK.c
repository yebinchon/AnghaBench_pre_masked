
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_char ;
struct net_device {unsigned int base_addr; int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;
typedef int mc_filter ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*,int,int) ;
 int FUNC_5 (int,scalar_t__) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_11)
{
    unsigned int VAR_12 = VAR_11->base_addr;
    u_char VAR_13[8];
    u_long VAR_14;
    int VAR_15;

    int VAR_16;
    int VAR_17 = FUNC_1(VAR_12 + VAR_2);

    FUNC_3(VAR_14);


    if (VAR_10 == 0)
 FUNC_5(VAR_0, VAR_12 + VAR_2);
    else
 FUNC_5(VAR_1, VAR_12 + VAR_2);

    if (VAR_11->flags & VAR_6) {
 FUNC_4(VAR_13, 0xff, sizeof(VAR_13));
 FUNC_5(3, VAR_12 + VAR_9);
    } else if (VAR_11->mc_count > VAR_8
        || (VAR_11->flags & VAR_5)) {

 FUNC_4(VAR_13, 0xff, sizeof(VAR_13));
 FUNC_5(2, VAR_12 + VAR_9);
    } else if (VAR_11->mc_count == 0) {
 FUNC_4(VAR_13, 0x00, sizeof(VAR_13));
 FUNC_5(1, VAR_12 + VAR_9);
    } else {
 struct dev_mc_list *VAR_18;

 FUNC_4(VAR_13, 0, sizeof(VAR_13));
 for (VAR_15 = 0, VAR_18 = VAR_11->mc_list; VAR_18 && VAR_15 < VAR_11->mc_count;
      VAR_15++, VAR_18 = VAR_18->next) {
     unsigned int VAR_19 =
      FUNC_0(VAR_4, VAR_18->dmi_addr) >> 26;
     VAR_13[VAR_19 >> 3] |= (1 << (VAR_19 & 7));
 }
 FUNC_5(2, VAR_12 + VAR_9);
    }


    VAR_16 = FUNC_1(VAR_12 + VAR_3);
    FUNC_5(0xe4, VAR_12 + VAR_3);

    for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
 FUNC_5(VAR_13[VAR_15], VAR_12 + VAR_7 + VAR_15);
    FUNC_5(VAR_16, VAR_12 + VAR_3);

    FUNC_5(VAR_17, VAR_12 + VAR_2);

    FUNC_2(VAR_14);
}
