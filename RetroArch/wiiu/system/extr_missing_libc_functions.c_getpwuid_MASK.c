
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {char* pw_name; char* pw_passwd; int pw_gid; char* pw_gecos; char* pw_dir; char* pw_shell; int pw_uid; } ;


 struct passwd VAR_0 ;

struct passwd* FUNC_0(uid_t VAR_1)
{
   VAR_0.pw_name = "retroarch";
   VAR_0.pw_passwd = "Wait, what?";
   VAR_0.pw_uid = VAR_1;
   VAR_0.pw_gid = 1000;
   VAR_0.pw_gecos = "retroarch";
   VAR_0.pw_dir = "sd:/";
   VAR_0.pw_shell = "/vol/system_slc/fw.img";

   return &VAR_0;
}
