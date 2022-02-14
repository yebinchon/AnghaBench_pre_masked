
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct wlp {int mutex; TYPE_2__* dev_info; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {scalar_t__ category; } ;
struct TYPE_4__ {TYPE_1__ prim_dev_type; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_0 (struct wlp*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (char const*,char*,scalar_t__*) ;

ssize_t FUNC_4(struct wlp *VAR_4, const char *VAR_5,
        size_t VAR_6)
{
 ssize_t VAR_7;
 u16 VAR_8;
 FUNC_1(&VAR_4->mutex);
 if (VAR_4->dev_info == ((void*)0)) {
  VAR_7 = FUNC_0(VAR_4);
  if (VAR_7 < 0)
   goto out;
 }
 VAR_7 = FUNC_3(VAR_5, "%hu", &VAR_8);
 if ((VAR_8 >= VAR_1 && VAR_8 <= VAR_3)
     || VAR_8 == VAR_2)
  VAR_4->dev_info->prim_dev_type.category = VAR_8;
 else
  VAR_7 = -VAR_0;
out:
 FUNC_2(&VAR_4->mutex);
 return VAR_7 < 0 ? VAR_7 : VAR_6;
}
