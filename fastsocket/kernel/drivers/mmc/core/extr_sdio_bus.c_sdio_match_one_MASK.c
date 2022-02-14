
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {scalar_t__ class; scalar_t__ vendor; scalar_t__ device; } ;
struct sdio_device_id {scalar_t__ class; scalar_t__ vendor; scalar_t__ device; } ;
typedef scalar_t__ __u8 ;
typedef scalar_t__ __u16 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static const struct sdio_device_id *FUNC_0(struct sdio_func *VAR_1,
 const struct sdio_device_id *VAR_2)
{
 if (VAR_2->class != (__u8)VAR_0 && VAR_2->class != VAR_1->class)
  return ((void*)0);
 if (VAR_2->vendor != (__u16)VAR_0 && VAR_2->vendor != VAR_1->vendor)
  return ((void*)0);
 if (VAR_2->device != (__u16)VAR_0 && VAR_2->device != VAR_1->device)
  return ((void*)0);
 return VAR_2;
}
