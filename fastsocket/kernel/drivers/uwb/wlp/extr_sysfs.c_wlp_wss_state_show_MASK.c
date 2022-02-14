
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_wss {int mutex; int state; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct wlp_wss *VAR_1, char *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_0(&VAR_1->mutex))
  goto out;
 VAR_3 = FUNC_2(VAR_2, VAR_0, "%s\n",
      FUNC_3(VAR_1->state));
 FUNC_1(&VAR_1->mutex);
out:
 return VAR_3;
}
