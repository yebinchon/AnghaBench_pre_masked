
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct libusb_adapter {int send_control_lock; int send_control_buffer; } ;
typedef int size ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,size_t*,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_0,
      uint8_t* VAR_1, size_t VAR_2)
{
   struct libusb_adapter *VAR_3 = (struct libusb_adapter*)VAR_0;

   if (!VAR_3)
      return;

   FUNC_3(VAR_3->send_control_lock);

   if (FUNC_2(VAR_3->send_control_buffer) >= VAR_2 + sizeof(VAR_2))
   {
      FUNC_1(VAR_3->send_control_buffer, &VAR_2, sizeof(VAR_2));
      FUNC_1(VAR_3->send_control_buffer, VAR_1, VAR_2);
   }
   else
   {
      FUNC_0("adapter write buffer is full, cannot write send control\n");
   }
   FUNC_4(VAR_3->send_control_lock);
}
