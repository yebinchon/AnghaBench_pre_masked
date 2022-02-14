
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef int u16_t ;
struct pbuf {int tot_len; scalar_t__ payload; } ;
typedef int err_t ;
struct TYPE_2__ {int host_num_acl; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct pbuf* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct pbuf*) ;
 struct pbuf* FUNC_3 (struct pbuf*,int ,int ,int ) ;
 TYPE_1__* VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct pbuf*,int ) ;

err_t FUNC_6(void)
{
 struct pbuf *VAR_10;
 if((VAR_10 = FUNC_1(VAR_8, VAR_6, VAR_7)) == ((void*)0)) {
  FUNC_0("hci_host_buffer_size: Could not allocate memory for pbuf\n");
  return VAR_0;
 }

 VAR_10 = FUNC_3(VAR_10, VAR_5, VAR_2, VAR_6);
 ((u16_t *)VAR_10->payload)[2] = FUNC_4(VAR_3);
 ((u8_t *)VAR_10->payload)[6] = 255;
 *((u16_t *)(((u8_t *)VAR_10->payload)+7)) = FUNC_4(VAR_4);
 ((u16_t *)VAR_10->payload)[4] = FUNC_4(1);
 FUNC_5(VAR_10, VAR_10->tot_len);
 FUNC_2(VAR_10);

 VAR_9->host_num_acl = VAR_4;

 return VAR_1;
}
