
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {size_t fill_image; scalar_t__* image_used; } ;


 int VAR_0 ;

void FUNC_0(struct pwc_device *VAR_1)
{
 VAR_1->image_used[VAR_1->fill_image] = 0;
 VAR_1->fill_image = (VAR_1->fill_image + 1) % VAR_0;
}
