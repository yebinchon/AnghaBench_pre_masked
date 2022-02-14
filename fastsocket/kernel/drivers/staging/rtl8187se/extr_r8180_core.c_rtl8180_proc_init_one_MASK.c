
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int dir_dev; } ;
struct proc_dir_entry {int dummy; } ;
struct net_device {int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct proc_dir_entry* FUNC_1 (char*,int,int ,int ,struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_3(struct net_device *VAR_7)
{
 struct proc_dir_entry *VAR_8;
 struct r8180_priv *VAR_9 = (struct r8180_priv *)FUNC_2(VAR_7);

 VAR_9->dir_dev = VAR_6;
 if (!VAR_9->dir_dev) {
  FUNC_0("Unable to initialize /proc/net/r8180/%s\n",
        VAR_7->name);
  return;
 }

 VAR_8 = FUNC_1("stats-hw", VAR_0 | VAR_1,
       VAR_9->dir_dev, VAR_3, VAR_7);
 if (!VAR_8) {
  FUNC_0("Unable to initialize "
        "/proc/net/r8180/%s/stats-hw\n",
        VAR_7->name);
 }

 VAR_8 = FUNC_1("stats-rx", VAR_0 | VAR_1,
       VAR_9->dir_dev, VAR_4, VAR_7);
 if (!VAR_8) {
  FUNC_0("Unable to initialize "
        "/proc/net/r8180/%s/stats-rx\n",
        VAR_7->name);
 }


 VAR_8 = FUNC_1("stats-tx", VAR_0 | VAR_1,
       VAR_9->dir_dev, VAR_5, VAR_7);
 if (!VAR_8) {
  FUNC_0("Unable to initialize "
        "/proc/net/r8180/%s/stats-tx\n",
        VAR_7->name);
 }

 VAR_8 = FUNC_1("registers", VAR_0 | VAR_1,
       VAR_9->dir_dev, VAR_2, VAR_7);
 if (!VAR_8) {
  FUNC_0("Unable to initialize "
        "/proc/net/r8180/%s/registers\n",
        VAR_7->name);
 }
}
