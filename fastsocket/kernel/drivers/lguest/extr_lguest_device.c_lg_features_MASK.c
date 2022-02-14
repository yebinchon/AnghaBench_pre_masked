
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
struct lguest_device_desc {scalar_t__ num_vq; } ;


 scalar_t__ FUNC_0 (struct lguest_device_desc const*) ;

__attribute__((used)) static u8 *FUNC_1(const struct lguest_device_desc *VAR_0)
{
 return (void *)(FUNC_0(VAR_0) + VAR_0->num_vq);
}
