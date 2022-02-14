
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct hif_device_usb {int htc_handle; } ;


 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (int ,struct sk_buff*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_3(struct hif_device_usb *VAR_2,
         struct sk_buff_head *VAR_3,
         bool VAR_4)
{
 struct sk_buff *VAR_5;

 while ((VAR_5 = FUNC_1(VAR_3)) != ((void*)0)) {
  FUNC_2(VAR_2->htc_handle,
       VAR_5, VAR_4);
  if (VAR_4)
   FUNC_0(VAR_1);
  else
   FUNC_0(VAR_0);
 }
}
