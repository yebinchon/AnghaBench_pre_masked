
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wl1271*,int ,int *) ;
 int FUNC_1 (struct wl1271*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct wl1271 *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 int VAR_4;


 VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_3);
 if (VAR_4 < 0)
  goto out;


 VAR_3 |= VAR_2;
 VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_3);

out:
 return VAR_4;
}
