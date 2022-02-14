
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct pbuf {int tot_len; scalar_t__ payload; } ;
typedef int err_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pbuf* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct pbuf*) ;
 struct pbuf* FUNC_3 (struct pbuf*,int ,int ,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct pbuf*,int ) ;

err_t FUNC_6(u8_t *VAR_7,u8_t VAR_8)
{
 struct pbuf *VAR_9 = ((void*)0);

 if((VAR_9=FUNC_1(VAR_6,VAR_4,VAR_5))==((void*)0)) {
  FUNC_0("hci_write_local_name: Could not allocate memory for pbuf\n");
  return VAR_0;
 }


 VAR_9 = FUNC_3(VAR_9,VAR_3,VAR_2,VAR_4);

 FUNC_4(((u8_t *)VAR_9->payload) + 4, VAR_7, VAR_8);

 FUNC_5(VAR_9, VAR_9->tot_len);
 FUNC_2(VAR_9);

 return VAR_1;
}
