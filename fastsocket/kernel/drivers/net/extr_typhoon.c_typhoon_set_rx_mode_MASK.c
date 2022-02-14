
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct typhoon {int dummy; } ;
struct net_device {int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;
struct cmd_desc {int parm1; void* parm3; void* parm2; } ;
typedef int mc_filter ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cmd_desc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int*,int ,int) ;
 scalar_t__ VAR_11 ;
 struct typhoon* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct typhoon*,int,struct cmd_desc*,int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_12)
{
 struct typhoon *VAR_13 = FUNC_4(VAR_12);
 struct cmd_desc VAR_14;
 u32 VAR_15[2];
 __le16 VAR_16;

 VAR_16 = VAR_8 | VAR_7;
 if(VAR_12->flags & VAR_2) {
  VAR_16 |= VAR_10;
 } else if((VAR_12->mc_count > VAR_11) ||
    (VAR_12->flags & VAR_1)) {

  VAR_16 |= VAR_6;
 } else if(VAR_12->mc_count) {
  struct dev_mc_list *VAR_17;
  int VAR_18;

  FUNC_3(VAR_15, 0, sizeof(VAR_15));
  for(VAR_18 = 0, VAR_17 = VAR_12->mc_list; VAR_17 && VAR_18 < VAR_12->mc_count;
      VAR_18++, VAR_17 = VAR_17->next) {
   int VAR_19 = FUNC_2(VAR_0, VAR_17->dmi_addr) & 0x3f;
   VAR_15[VAR_19 >> 5] |= 1 << (VAR_19 & 0x1f);
  }

  FUNC_0(&VAR_14,
      VAR_3);
  VAR_14.parm1 = VAR_5;
  VAR_14.parm2 = FUNC_1(VAR_15[0]);
  VAR_14.parm3 = FUNC_1(VAR_15[1]);
  FUNC_5(VAR_13, 1, &VAR_14, 0, ((void*)0));

  VAR_16 |= VAR_9;
 }

 FUNC_0(&VAR_14, VAR_4);
 VAR_14.parm1 = VAR_16;
 FUNC_5(VAR_13, 1, &VAR_14, 0, ((void*)0));
}
