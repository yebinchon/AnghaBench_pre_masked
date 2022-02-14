
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ (* detect ) (int ,int ) ;} ;
typedef TYPE_1__ hid_device_t ;


 TYPE_1__** VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

hid_device_t *FUNC_1(uint16_t VAR_1, uint16_t VAR_2) {
  int VAR_3 = 0;

  for(VAR_3 = 0; VAR_0[VAR_3] != ((void*)0); VAR_3++) {
    if(VAR_0[VAR_3]->detect(VAR_1, VAR_2))
      return VAR_0[VAR_3];
  }

  return ((void*)0);
}
