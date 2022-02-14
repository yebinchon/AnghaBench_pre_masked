
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_wss {int mutex; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct wlp_wss*,char*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct wlp_wss *VAR_1, char *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_1(&VAR_1->mutex))
  goto out;
 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);
 FUNC_2(&VAR_1->mutex);
out:
 return VAR_3;
}
