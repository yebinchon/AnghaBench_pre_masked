
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef int mode_t ;
typedef scalar_t__ gid_t ;
typedef int debug_info_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (char const*,int,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*) ;

debug_info_t *FUNC_7(const char *VAR_5, int VAR_6,
      int VAR_7, int VAR_8, mode_t VAR_9,
      uid_t VAR_10, gid_t VAR_11)
{
 debug_info_t *VAR_12 = ((void*)0);



 if ((VAR_10 != 0) || (VAR_11 != 0))
  FUNC_6("Root becomes the owner of all s390dbf files "
      "in sysfs\n");
 FUNC_0(!VAR_4);
 FUNC_3(&VAR_2);



 VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 if(!VAR_12)
  goto out;
 FUNC_2(VAR_12, &VAR_1);
        FUNC_2(VAR_12, &VAR_0);
 FUNC_2(VAR_12, &VAR_3);
out:
        if (!VAR_12){
  FUNC_5("Registering debug feature %s failed\n", VAR_5);
        }
 FUNC_4(&VAR_2);
 return VAR_12;
}
