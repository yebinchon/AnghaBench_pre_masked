
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void FUNC_4(struct net_device *VAR_19)
{
 struct proc_dir_entry *VAR_20;
 struct r8192_priv *VAR_21 = (struct r8192_priv *)FUNC_3(VAR_19);
 VAR_21->dir_dev = FUNC_1(VAR_19->name,
       VAR_1 | VAR_3 | VAR_4,
       VAR_18);
 if (!VAR_21->dir_dev) {
  FUNC_0(VAR_0, "Unable to initialize /proc/net/rtl8192/%s\n",
        VAR_19->name);
  return;
 }
 VAR_20 = FUNC_2("stats-rx", VAR_2 | VAR_3,
       VAR_21->dir_dev, VAR_16, VAR_19);

 if (!VAR_20) {
  FUNC_0(VAR_0,"Unable to initialize "
        "/proc/net/rtl8192/%s/stats-rx\n",
        VAR_19->name);
 }


 VAR_20 = FUNC_2("stats-tx", VAR_2 | VAR_3,
       VAR_21->dir_dev, VAR_17, VAR_19);

 if (!VAR_20) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/stats-tx\n",
        VAR_19->name);
 }

 VAR_20 = FUNC_2("stats-ap", VAR_2 | VAR_3,
       VAR_21->dir_dev, VAR_15, VAR_19);

 if (!VAR_20) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/stats-ap\n",
        VAR_19->name);
 }

 VAR_20 = FUNC_2("registers", VAR_2 | VAR_3,
       VAR_21->dir_dev, VAR_5, VAR_19);
 if (!VAR_20) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/registers\n",
        VAR_19->name);
 }
 VAR_20 = FUNC_2("registers-1", VAR_2 | VAR_3,
       VAR_21->dir_dev, VAR_6, VAR_19);
 if (!VAR_20) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/registers-1\n",
        VAR_19->name);
 }
 VAR_20 = FUNC_2("registers-2", VAR_2 | VAR_3,
       VAR_21->dir_dev, VAR_7, VAR_19);
 if (!VAR_20) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/registers-2\n",
        VAR_19->name);
 }
 VAR_20 = FUNC_2("registers-8", VAR_2 | VAR_3,
       VAR_21->dir_dev, VAR_8, VAR_19);
 if (!VAR_20) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/registers-8\n",
        VAR_19->name);
 }
 VAR_20 = FUNC_2("registers-9", VAR_2 | VAR_3,
       VAR_21->dir_dev, VAR_9, VAR_19);
 if (!VAR_20) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/registers-9\n",
        VAR_19->name);
 }
 VAR_20 = FUNC_2("registers-a", VAR_2 | VAR_3,
       VAR_21->dir_dev, VAR_10, VAR_19);
 if (!VAR_20) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/registers-a\n",
        VAR_19->name);
 }
 VAR_20 = FUNC_2("registers-b", VAR_2 | VAR_3,
       VAR_21->dir_dev, VAR_11, VAR_19);
 if (!VAR_20) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/registers-b\n",
        VAR_19->name);
 }
 VAR_20 = FUNC_2("registers-c", VAR_2 | VAR_3,
       VAR_21->dir_dev, VAR_12, VAR_19);
 if (!VAR_20) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/registers-c\n",
        VAR_19->name);
 }
 VAR_20 = FUNC_2("registers-d", VAR_2 | VAR_3,
       VAR_21->dir_dev, VAR_13, VAR_19);
 if (!VAR_20) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/registers-d\n",
        VAR_19->name);
 }
 VAR_20 = FUNC_2("registers-e", VAR_2 | VAR_3,
       VAR_21->dir_dev, VAR_14, VAR_19);
 if (!VAR_20) {
  FUNC_0(VAR_0, "Unable to initialize "
        "/proc/net/rtl8192/%s/registers-e\n",
        VAR_19->name);
 }
}
