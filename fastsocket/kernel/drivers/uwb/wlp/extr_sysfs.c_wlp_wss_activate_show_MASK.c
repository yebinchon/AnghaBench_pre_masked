
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_wss {scalar_t__ state; int mutex; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wlp_wss*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,scalar_t__,char*) ;

ssize_t FUNC_4(struct wlp_wss *VAR_2, char *VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_1(&VAR_2->mutex))
  goto out;
 if (VAR_2->state >= VAR_1)
  VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0);
 else
  VAR_4 = FUNC_3(VAR_3, VAR_0, "No local WSS active.\n");
 VAR_4 += FUNC_3(VAR_3 + VAR_4, VAR_0 - VAR_4,
   "\n\n"
   "# echo WSSID SECURE_STATUS ACCEPT_ENROLLMENT "
   "NAME #create new WSS\n"
   "# echo WSSID [DEV ADDR] #enroll in and activate "
   "existing WSS, can request registrar\n"
   "#\n"
   "# WSSID is a 16 byte hex array. Eg. 12 A3 3B ... \n"
   "# SECURE_STATUS 0 - unsecure, 1 - secure (default)\n"
   "# ACCEPT_ENROLLMENT 0 - no, 1 - yes (default)\n"
   "# NAME is the text string identifying the WSS\n"
   "# DEV ADDR is the device address of neighbor "
   "that should be registrar. Eg. 32:AB\n");

 FUNC_2(&VAR_2->mutex);
out:
 return VAR_4;

}
