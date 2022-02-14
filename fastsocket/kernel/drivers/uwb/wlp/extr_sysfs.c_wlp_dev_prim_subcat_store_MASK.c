
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp {int mutex; TYPE_2__* dev_info; } ;
typedef size_t ssize_t ;
typedef unsigned int __le16 ;
struct TYPE_3__ {unsigned int subID; } ;
struct TYPE_4__ {TYPE_1__ prim_dev_type; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct wlp*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (char const*,char*,unsigned int*) ;

ssize_t FUNC_4(struct wlp *VAR_1, const char *VAR_2,
      size_t VAR_3)
{
 ssize_t VAR_4;
 unsigned VAR_5;
 __le16 VAR_6 = ~0;
 FUNC_1(&VAR_1->mutex);
 if (VAR_1->dev_info == ((void*)0)) {
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 < 0)
   goto out;
 }
 VAR_4 = FUNC_3(VAR_2, "%u", &VAR_5);
 if (VAR_5 <= VAR_6)
  VAR_1->dev_info->prim_dev_type.subID = VAR_5;
 else
  VAR_4 = -VAR_0;
out:
 FUNC_2(&VAR_1->mutex);
 return VAR_4 < 0 ? VAR_4 : VAR_3;
}
