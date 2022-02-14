
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp {int mutex; int uuid; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int ,int *) ;

ssize_t FUNC_3(struct wlp *VAR_1, char *VAR_2)
{
 ssize_t VAR_3 = 0;

 FUNC_0(&VAR_1->mutex);
 VAR_3 = FUNC_2(VAR_2, VAR_0, &VAR_1->uuid);
 VAR_2[VAR_3++] = '\n';
 FUNC_1(&VAR_1->mutex);
 return VAR_3;
}
