
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ bios_image_size; int * image_update_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,int *,int *,scalar_t__) ;
 int FUNC_1 (char*,int *,scalar_t__) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static ssize_t FUNC_2(char *VAR_2, loff_t VAR_3, size_t VAR_4)
{

 if ((VAR_1.image_update_buffer == ((void*)0)) ||
  (VAR_1.bios_image_size == 0)) {
  FUNC_1("read_rbu_data_mono: image_update_buffer %p ,"
   "bios_image_size %lu\n",
   VAR_1.image_update_buffer,
   VAR_1.bios_image_size);
  return -VAR_0;
 }

 return FUNC_0(VAR_2, VAR_4, &VAR_3,
   VAR_1.image_update_buffer, VAR_1.bios_image_size);
}
