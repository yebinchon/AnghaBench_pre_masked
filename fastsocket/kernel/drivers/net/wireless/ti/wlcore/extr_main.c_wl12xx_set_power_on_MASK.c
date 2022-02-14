
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int * ptable; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl1271*) ;
 int FUNC_2 (struct wl1271*) ;
 int FUNC_3 (struct wl1271*) ;
 int FUNC_4 (struct wl1271*) ;
 int FUNC_5 (struct wl1271*) ;
 int FUNC_6 (struct wl1271*,int *) ;

__attribute__((used)) static int FUNC_7(struct wl1271 *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2);
 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 < 0)
  goto out;
 FUNC_0(VAR_1);
 FUNC_2(VAR_3);
 FUNC_1(VAR_3);

 VAR_4 = FUNC_6(VAR_3, &VAR_3->ptable[VAR_0]);
 if (VAR_4 < 0)
  goto fail;


 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 < 0)
  goto fail;

out:
 return VAR_4;

fail:
 FUNC_3(VAR_3);
 return VAR_4;
}
