
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pw_shell; int pw_dir; int pw_gecos; int pw_gid; int pw_uid; int pw_passwd; int pw_name; } ;
struct TYPE_3__ {int shell; int dir; int gecos; int gid; int uid; int password; int name; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_0(){
 VAR_0.pw_name=VAR_1.name;
 VAR_0.pw_passwd=VAR_1.password;
 VAR_0.pw_uid=VAR_1.uid;
 VAR_0.pw_gid=VAR_1.gid;
 VAR_0.pw_gecos=VAR_1.gecos;
 VAR_0.pw_dir=VAR_1.dir;
 VAR_0.pw_shell=VAR_1.shell;
}
