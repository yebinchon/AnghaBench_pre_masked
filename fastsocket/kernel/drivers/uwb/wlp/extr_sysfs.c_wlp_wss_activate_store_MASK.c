
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_wss {int dummy; } ;
struct wlp_uuid {int * data; } ;
struct uwb_dev_addr {int * data; } ;
typedef int ssize_t ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char const*,char*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,unsigned int*,unsigned int*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct wlp_wss*,struct wlp_uuid*,char*,unsigned int,unsigned int) ;
 int FUNC_4 (struct wlp_wss*,struct wlp_uuid*,struct uwb_dev_addr*) ;

ssize_t FUNC_5(struct wlp_wss *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4 = -VAR_0;
 struct wlp_uuid VAR_5;
 struct uwb_dev_addr VAR_6;
 struct uwb_dev_addr VAR_7 = {.data = {0xff, 0xff} };
 char VAR_8[65];
 unsigned VAR_9, VAR_10;
 FUNC_0(VAR_8, 0, sizeof(VAR_8));
 VAR_4 = FUNC_1(VAR_2, "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx:%02hhx",
   &VAR_5.data[0] , &VAR_5.data[1],
   &VAR_5.data[2] , &VAR_5.data[3],
   &VAR_5.data[4] , &VAR_5.data[5],
   &VAR_5.data[6] , &VAR_5.data[7],
   &VAR_5.data[8] , &VAR_5.data[9],
   &VAR_5.data[10], &VAR_5.data[11],
   &VAR_5.data[12], &VAR_5.data[13],
   &VAR_5.data[14], &VAR_5.data[15],
   &VAR_6.data[1], &VAR_6.data[0]);
 if (VAR_4 == 16 || VAR_4 == 17) {
  VAR_4 = FUNC_1(VAR_2, "%02hhx %02hhx %02hhx %02hhx "
    "%02hhx %02hhx %02hhx %02hhx "
    "%02hhx %02hhx %02hhx %02hhx "
    "%02hhx %02hhx %02hhx %02hhx "
    "%u %u %64c",
    &VAR_5.data[0] , &VAR_5.data[1],
    &VAR_5.data[2] , &VAR_5.data[3],
    &VAR_5.data[4] , &VAR_5.data[5],
    &VAR_5.data[6] , &VAR_5.data[7],
    &VAR_5.data[8] , &VAR_5.data[9],
    &VAR_5.data[10], &VAR_5.data[11],
    &VAR_5.data[12], &VAR_5.data[13],
    &VAR_5.data[14], &VAR_5.data[15],
    &VAR_9, &VAR_10, VAR_8);
  if (VAR_4 == 16)
   VAR_4 = FUNC_4(VAR_1, &VAR_5, &VAR_7);
  else if (VAR_4 == 19) {
   VAR_9 = VAR_9 == 0 ? 0 : 1;
   VAR_10 = VAR_10 == 0 ? 0 : 1;


   if (FUNC_2(VAR_8) != sizeof(VAR_8) - 1)
    VAR_8[FUNC_2(VAR_8) - 1] = '\0';
   VAR_4 = FUNC_3(VAR_1, &VAR_5, VAR_8,
        VAR_9, VAR_10);
  } else
   VAR_4 = -VAR_0;
 } else if (VAR_4 == 18)
  VAR_4 = FUNC_4(VAR_1, &VAR_5, &VAR_6);
 else
  VAR_4 = -VAR_0;
 return VAR_4 < 0 ? VAR_4 : VAR_3;
}
