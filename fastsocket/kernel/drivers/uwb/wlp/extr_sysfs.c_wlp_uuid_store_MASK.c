
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_uuid {int * data; } ;
struct wlp {int mutex; struct wlp_uuid uuid; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,char*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;

ssize_t FUNC_3(struct wlp *VAR_1, const char *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;
 struct wlp_uuid VAR_5;

 FUNC_0(&VAR_1->mutex);
 VAR_4 = FUNC_2(VAR_2, "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx ",
   &VAR_5.data[0] , &VAR_5.data[1],
   &VAR_5.data[2] , &VAR_5.data[3],
   &VAR_5.data[4] , &VAR_5.data[5],
   &VAR_5.data[6] , &VAR_5.data[7],
   &VAR_5.data[8] , &VAR_5.data[9],
   &VAR_5.data[10], &VAR_5.data[11],
   &VAR_5.data[12], &VAR_5.data[13],
   &VAR_5.data[14], &VAR_5.data[15]);
 if (VAR_4 != 16) {
  VAR_4 = -VAR_0;
  goto error;
 }
 VAR_1->uuid = VAR_5;
error:
 FUNC_1(&VAR_1->mutex);
 return VAR_4 < 0 ? VAR_4 : VAR_3;
}
