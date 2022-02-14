
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device {int dummy; } ;
struct device {int dummy; } ;
struct b43_wldev {int dummy; } ;


 struct ssb_device* FUNC_0 (struct device*) ;
 struct b43_wldev* FUNC_1 (struct ssb_device*) ;

__attribute__((used)) static inline struct b43_wldev *FUNC_2(struct device *VAR_0)
{
 struct ssb_device *VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_1);
}
