
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int dir_dev; } ;
struct proc_dir_entry {int dummy; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int ) ;
 struct proc_dir_entry* FUNC_2 (char*,int,int ,int ,struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_10)
{
 struct proc_dir_entry *VAR_11;
 struct r8192_priv *VAR_12 = (struct r8192_priv *)FUNC_3(VAR_10);
 VAR_12->dir_dev = FUNC_1(VAR_10->name,
       VAR_1 | VAR_3 | VAR_4,
       VAR_9);
 if (!VAR_12->dir_dev) {
  FUNC_0(VAR_0, "Unable to initialize /proc/net/rtl8192/%s\n",
        VAR_10->name);
  return;
 }
 VAR_11 = FUNC_2("stats-rx", VAR_2 | VAR_3,
       VAR_12->dir_dev, VAR_7, VAR_10);

 if (!VAR_11) {
  FUNC_0(VAR_0,"Unable to initialize "
        "/proc/net/rtl8192/%s/stats-rx\n",
        VAR_10->name);
 }


 VAR_11 = FUNC_2("stats-tx", VAR_2 | VAR_3,
       VAR_12->dir_dev, VAR_8, VAR_10);

 if (!VAR_11) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/stats-tx\n",
        VAR_10->name);
 }

 VAR_11 = FUNC_2("stats-ap", VAR_2 | VAR_3,
       VAR_12->dir_dev, VAR_6, VAR_10);

 if (!VAR_11) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/stats-ap\n",
        VAR_10->name);
 }

 VAR_11 = FUNC_2("registers", VAR_2 | VAR_3,
       VAR_12->dir_dev, VAR_5, VAR_10);
 if (!VAR_11) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/registers\n",
        VAR_10->name);
 }
}
