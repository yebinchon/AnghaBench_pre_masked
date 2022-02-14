
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct hdmi_vendor_infoframe {size_t length; size_t type; size_t version; int data; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (size_t*,int ,size_t) ;
 int FUNC_2 (void*,int ,size_t) ;

ssize_t FUNC_3(struct hdmi_vendor_infoframe *VAR_2,
       void *VAR_3, size_t VAR_4)
{
 u8 *VAR_5 = VAR_3;
 size_t VAR_6;

 VAR_6 = VAR_1 + VAR_2->length;

 if (VAR_4 < VAR_6)
  return -VAR_0;

 FUNC_2(VAR_3, 0, VAR_6);

 VAR_5[0] = VAR_2->type;
 VAR_5[1] = VAR_2->version;
 VAR_5[2] = VAR_2->length;
 VAR_5[3] = 0;

 FUNC_1(&VAR_5[VAR_1], VAR_2->data, VAR_2->length);

 FUNC_0(VAR_3, VAR_6);

 return VAR_6;
}
