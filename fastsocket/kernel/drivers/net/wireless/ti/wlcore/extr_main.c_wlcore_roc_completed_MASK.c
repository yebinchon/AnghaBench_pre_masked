
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {scalar_t__ state; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct wl1271*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wl1271*) ;
 int FUNC_6 (struct wl1271*) ;

__attribute__((used)) static int FUNC_7(struct wl1271 *VAR_3)
{
 int VAR_4;

 FUNC_4(VAR_0, "roc complete");

 FUNC_1(&VAR_3->mutex);

 if (FUNC_3(VAR_3->state != VAR_2)) {
  VAR_4 = -VAR_1;
  goto out;
 }

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4 < 0)
  goto out;

 VAR_4 = FUNC_0(VAR_3);

 FUNC_5(VAR_3);
out:
 FUNC_2(&VAR_3->mutex);

 return VAR_4;
}
