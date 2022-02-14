
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp {int dev_info; int (* fill_device_info ) (struct wlp*,int ) ;} ;


 int FUNC_0 (struct wlp*,int ) ;

__attribute__((used)) static
void FUNC_1(struct wlp *VAR_0)
{
 VAR_0->fill_device_info(VAR_0, VAR_0->dev_info);
}
