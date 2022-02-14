
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct sdio_driver {struct sdio_device_id* id_table; } ;
struct sdio_device_id {scalar_t__ device; scalar_t__ vendor; scalar_t__ class; } ;


 scalar_t__ FUNC_0 (struct sdio_func*,struct sdio_device_id const*) ;

__attribute__((used)) static const struct sdio_device_id *FUNC_1(struct sdio_func *VAR_0,
 struct sdio_driver *VAR_1)
{
 const struct sdio_device_id *VAR_2;

 VAR_2 = VAR_1->id_table;

 if (VAR_2) {
  while (VAR_2->class || VAR_2->vendor || VAR_2->device) {
   if (FUNC_0(VAR_0, VAR_2))
    return VAR_2;
   VAR_2++;
  }
 }

 return ((void*)0);
}
