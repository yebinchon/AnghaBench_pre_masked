
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {int tot_len; } ;
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
 int FUNC_4 (struct pbuf*,int ) ;

err_t FUNC_5(void)
{
 struct pbuf *VAR_7 = ((void*)0);

 if((VAR_7=FUNC_1(VAR_6,VAR_4,VAR_5))==((void*)0)) {
  FUNC_0("hci_read_local_version: Could not allocate memory for pbuf\n");
  return VAR_0;
 }

 VAR_7 = FUNC_3(VAR_7,VAR_3,VAR_2,VAR_4);

 FUNC_4(VAR_7,VAR_7->tot_len);
 FUNC_2(VAR_7);

 return VAR_1;
}
