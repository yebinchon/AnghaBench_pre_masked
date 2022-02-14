
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {int dummy; } ;
struct ubi_notification {int vi; int di; } ;
struct ubi_device {int dummy; } ;


 int FUNC_0 (int *,int,struct ubi_notification*) ;
 int FUNC_1 (struct ubi_device*,int *) ;
 int FUNC_2 (struct ubi_device*,struct ubi_volume*,int *) ;
 int VAR_0 ;

int FUNC_3(struct ubi_device *VAR_1, struct ubi_volume *VAR_2, int VAR_3)
{
 struct ubi_notification VAR_4;

 FUNC_1(VAR_1, &VAR_4.di);
 FUNC_2(VAR_1, VAR_2, &VAR_4.vi);
 return FUNC_0(&VAR_0, VAR_3, &VAR_4);
}
