
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_iso_packet_descriptor {void* actual_length; void* status; void* length; void* offset; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(
    struct usbip_iso_packet_descriptor *VAR_0,
    int VAR_1)
{

 if (VAR_1) {
  VAR_0->offset = FUNC_1(VAR_0->offset);
  VAR_0->length = FUNC_1(VAR_0->length);
  VAR_0->status = FUNC_1(VAR_0->status);
  VAR_0->actual_length = FUNC_1(VAR_0->actual_length);
 } else {
  VAR_0->offset = FUNC_0(VAR_0->offset);
  VAR_0->length = FUNC_0(VAR_0->length);
  VAR_0->status = FUNC_0(VAR_0->status);
  VAR_0->actual_length = FUNC_0(VAR_0->actual_length);
 }
}
