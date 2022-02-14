
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wlp {int mutex; TYPE_2__* dev_info; } ;
typedef int ssize_t ;
struct TYPE_3__ {int OUI; } ;
struct TYPE_4__ {TYPE_1__ prim_dev_type; } ;
typedef int OUI ;


 int VAR_0 ;
 int FUNC_0 (struct wlp*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,char*,int *,int *,int *) ;

ssize_t FUNC_5(struct wlp *VAR_1, const char *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;
 u8 VAR_5[3];
 FUNC_2(&VAR_1->mutex);
 if (VAR_1->dev_info == ((void*)0)) {
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 < 0)
   goto out;
 }
 VAR_4 = FUNC_4(VAR_2, "%hhx:%hhx:%hhx",
   &VAR_5[0], &VAR_5[1], &VAR_5[2]);
 if (VAR_4 != 3) {
  VAR_4 = -VAR_0;
  goto out;
 } else
  FUNC_1(VAR_1->dev_info->prim_dev_type.OUI, VAR_5, sizeof(VAR_5));
out:
 FUNC_3(&VAR_1->mutex);
 return VAR_4 < 0 ? VAR_4 : VAR_3;
}
