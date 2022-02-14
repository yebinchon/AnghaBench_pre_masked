
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wiiusb_adapter {size_t send_control_size; int send_control_type; int send_control_buffer; } ;


 int FUNC_0 (int ,int *,size_t) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
      uint8_t* VAR_1, size_t VAR_2)
{
   uint8_t VAR_3;
   struct wiiusb_adapter *VAR_4 = (struct wiiusb_adapter*)VAR_0;
   if (!VAR_4 || !VAR_1 || !VAR_4->send_control_buffer)
      return;



   VAR_3 = VAR_1[0];

   VAR_4->send_control_size = VAR_2 - 1;

   VAR_1++;
   FUNC_0(VAR_4->send_control_buffer, VAR_1, VAR_4->send_control_size);

   VAR_4->send_control_type = VAR_3;
}
