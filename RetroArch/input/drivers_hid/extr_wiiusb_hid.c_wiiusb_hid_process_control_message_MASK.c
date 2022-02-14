
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiiusb_adapter {int send_control_type; int send_control_buffer; int send_control_size; int handle; int endpoint_out; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;



 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct wiiusb_adapter* VAR_5)
{
   int32_t VAR_6;
   switch (VAR_5->send_control_type)
   {
      case 128:
         do
         {
            VAR_6 = FUNC_1(VAR_5->handle,
               VAR_5->endpoint_out, VAR_5->send_control_size,
               VAR_5->send_control_buffer);
         } while (VAR_6 < 0);
         break;
      case 130:
         do
         {
            VAR_6 = FUNC_0(VAR_5->handle, VAR_2,
               VAR_3, (VAR_0<<8) | 0xf4, 0x0,
               VAR_5->send_control_size, VAR_5->send_control_buffer);
         } while (VAR_6 < 0);
         break;
      case 129:
         do
         {
            VAR_6 = FUNC_0(VAR_5->handle, VAR_2,
                  VAR_3, (VAR_1<<8) | 0x01, 0x0,
                  VAR_5->send_control_size, VAR_5->send_control_buffer);
         } while (VAR_6 < 0);
         break;

   }

   VAR_5->send_control_type = VAR_4;
}
