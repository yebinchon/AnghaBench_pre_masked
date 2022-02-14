
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct proc_dir_entry {void* gid; void* uid; } ;
struct net_device {int name; } ;
struct airo_info {char* proc_name; TYPE_1__* proc_entry; } ;
struct TYPE_6__ {void* gid; void* uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (char*,int,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct proc_dir_entry* FUNC_1 (char*,int,TYPE_1__*,int *,struct net_device*) ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4( struct net_device *VAR_17,
        struct airo_info *VAR_18 ) {
 struct proc_dir_entry *VAR_19;

 FUNC_3(VAR_18->proc_name,VAR_17->name);
 VAR_18->proc_entry = FUNC_0(VAR_18->proc_name,
           VAR_1|VAR_5,
           VAR_4);
 if (!VAR_18->proc_entry)
  goto fail;
 VAR_18->proc_entry->uid = VAR_15;
 VAR_18->proc_entry->gid = VAR_10;


 VAR_19 = FUNC_1("StatsDelta",
     VAR_2 | (VAR_3&VAR_11),
     VAR_18->proc_entry, &VAR_13, VAR_17);
 if (!VAR_19)
  goto fail_stats_delta;
 VAR_19->uid = VAR_15;
 VAR_19->gid = VAR_10;


 VAR_19 = FUNC_1("Stats",
     VAR_2 | (VAR_3&VAR_11),
     VAR_18->proc_entry, &VAR_12, VAR_17);
 if (!VAR_19)
  goto fail_stats;
 VAR_19->uid = VAR_15;
 VAR_19->gid = VAR_10;


 VAR_19 = FUNC_1("Status",
     VAR_2 | (VAR_3&VAR_11),
     VAR_18->proc_entry, &VAR_14, VAR_17);
 if (!VAR_19)
  goto fail_status;
 VAR_19->uid = VAR_15;
 VAR_19->gid = VAR_10;


 VAR_19 = FUNC_1("Config",
     VAR_2 | VAR_11,
     VAR_18->proc_entry, &VAR_9, VAR_17);
 if (!VAR_19)
  goto fail_config;
 VAR_19->uid = VAR_15;
 VAR_19->gid = VAR_10;


 VAR_19 = FUNC_1("SSID",
     VAR_2 | VAR_11,
     VAR_18->proc_entry, &VAR_8, VAR_17);
 if (!VAR_19)
  goto fail_ssid;
 VAR_19->uid = VAR_15;
 VAR_19->gid = VAR_10;


 VAR_19 = FUNC_1("APList",
     VAR_2 | VAR_11,
     VAR_18->proc_entry, &VAR_6, VAR_17);
 if (!VAR_19)
  goto fail_aplist;
 VAR_19->uid = VAR_15;
 VAR_19->gid = VAR_10;


 VAR_19 = FUNC_1("BSSList",
     VAR_2 | VAR_11,
     VAR_18->proc_entry, &VAR_7, VAR_17);
 if (!VAR_19)
  goto fail_bsslist;
 VAR_19->uid = VAR_15;
 VAR_19->gid = VAR_10;


 VAR_19 = FUNC_1("WepKey",
     VAR_2 | VAR_11,
     VAR_18->proc_entry, &VAR_16, VAR_17);
 if (!VAR_19)
  goto fail_wepkey;
 VAR_19->uid = VAR_15;
 VAR_19->gid = VAR_10;

 return 0;

fail_wepkey:
 FUNC_2("BSSList", VAR_18->proc_entry);
fail_bsslist:
 FUNC_2("APList", VAR_18->proc_entry);
fail_aplist:
 FUNC_2("SSID", VAR_18->proc_entry);
fail_ssid:
 FUNC_2("Config", VAR_18->proc_entry);
fail_config:
 FUNC_2("Status", VAR_18->proc_entry);
fail_status:
 FUNC_2("Stats", VAR_18->proc_entry);
fail_stats:
 FUNC_2("StatsDelta", VAR_18->proc_entry);
fail_stats_delta:
 FUNC_2(VAR_18->proc_name, VAR_4);
fail:
 return -VAR_0;
}
