
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct airo_info {char* proc_name; TYPE_1__* proc_entry; } ;
struct TYPE_3__ {int namelen; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1( struct net_device *VAR_1,
    struct airo_info *VAR_2 ) {
 if ( !VAR_2->proc_entry->namelen ) return 0;
 FUNC_0("Stats",VAR_2->proc_entry);
 FUNC_0("StatsDelta",VAR_2->proc_entry);
 FUNC_0("Status",VAR_2->proc_entry);
 FUNC_0("Config",VAR_2->proc_entry);
 FUNC_0("SSID",VAR_2->proc_entry);
 FUNC_0("APList",VAR_2->proc_entry);
 FUNC_0("BSSList",VAR_2->proc_entry);
 FUNC_0("WepKey",VAR_2->proc_entry);
 FUNC_0(VAR_2->proc_name,VAR_0);
 return 0;
}
