
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wlp_eda {int dummy; } ;
struct wlp {int wss; struct wlp_eda eda; } ;
struct uwb_dev_addr {int * data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,int *,int *,int *,int *,int *,int *,int *,int *,int *,unsigned int*) ;
 int FUNC_1 (struct wlp_eda*,int *,struct uwb_dev_addr*) ;
 int FUNC_2 (struct wlp_eda*,struct uwb_dev_addr*,int *,int *,int ,unsigned int) ;

ssize_t FUNC_3(struct wlp *VAR_3, const char *VAR_4, size_t VAR_5)
{
 ssize_t VAR_6;
 struct wlp_eda *VAR_7 = &VAR_3->eda;
 u8 VAR_8[6];
 struct uwb_dev_addr VAR_9;
 u8 VAR_10;
 unsigned VAR_11;

 VAR_6 = FUNC_0(VAR_4, "%02hhx:%02hhx:%02hhx:%02hhx:%02hhx:%02hhx "
   "%02hhx:%02hhx %02hhx %u\n",
   &VAR_8[0], &VAR_8[1],
   &VAR_8[2], &VAR_8[3],
   &VAR_8[4], &VAR_8[5],
   &VAR_9.data[1], &VAR_9.data[0], &VAR_10, &VAR_11);
 switch (VAR_6) {
 case 6:

  VAR_6 = -VAR_2;
  break;
 case 10:
  VAR_11 = VAR_11 >= 1 ? 1 : 0;
  VAR_6 = FUNC_1(VAR_7, VAR_8, &VAR_9);
  if (VAR_6 < 0 && VAR_6 != -VAR_0)
   goto error;

  VAR_6 = FUNC_2(VAR_7, &VAR_9, &VAR_3->wss,
          VAR_8, VAR_10, VAR_11);
  if (VAR_6 < 0)
   goto error;
  break;
 default:
  VAR_6 = -VAR_1;
 }
error:
 return VAR_6 < 0 ? VAR_6 : VAR_5;
}
