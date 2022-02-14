
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;
struct usbnet {int net; } ;
struct ndis_config_param {void* value_length; void* value_offs; void* type; void* name_length; void* name_offs; } ;
typedef void* __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ndis_config_param*) ;
 struct ndis_config_param* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ndis_config_param*,int,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct usbnet*,int ,struct ndis_config_param*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct usbnet *VAR_4, char *VAR_5,
      int VAR_6, void *VAR_7)
{
 struct ndis_config_param *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 __le16 *VAR_14;
 __le32 *VAR_15;

 if (VAR_6 == 0)
  VAR_9 = sizeof(__le32);
 else if (VAR_6 == 2)
  VAR_9 = FUNC_8(VAR_7) * sizeof(__le16);
 else
  return -VAR_0;

 VAR_11 = FUNC_8(VAR_5) * sizeof(__le16);
 VAR_10 = sizeof(*VAR_8) + VAR_11 + VAR_9;




 VAR_8 = FUNC_4(VAR_10, VAR_2);
 if (!VAR_8)
  return -VAR_1;







 if (VAR_6 == 2)
  FUNC_6(VAR_4->net, "setting config parameter: %s, value: %s\n",
      VAR_5, (u8 *)VAR_7);
 else
  FUNC_6(VAR_4->net, "setting config parameter: %s, value: %d\n",
      VAR_5, *(u32 *)VAR_7);

 VAR_8->name_offs = FUNC_2(sizeof(*VAR_8));
 VAR_8->name_length = FUNC_2(VAR_11);
 VAR_8->type = FUNC_2(VAR_6);
 VAR_8->value_offs = FUNC_2(sizeof(*VAR_8) + VAR_11);
 VAR_8->value_length = FUNC_2(VAR_9);


 VAR_14 = (void *)VAR_8 + sizeof(*VAR_8);
 for (VAR_13 = 0; VAR_13 < VAR_11 / sizeof(__le16); VAR_13++)
  VAR_14[VAR_13] = FUNC_1(VAR_5[VAR_13]);

 if (VAR_6 == 2) {
  VAR_14 = (void *)VAR_8 + sizeof(*VAR_8) + VAR_11;
  for (VAR_13 = 0; VAR_13 < VAR_9 / sizeof(__le16); VAR_13++)
   VAR_14[VAR_13] = FUNC_1(((u8 *)VAR_7)[VAR_13]);
 } else {
  VAR_15 = (void *)VAR_8 + sizeof(*VAR_8) + VAR_11;
  *VAR_15 = FUNC_2(*(u32 *)VAR_7);
 }
 VAR_12 = FUNC_7(VAR_4, VAR_3,
       VAR_8, VAR_10);
 if (VAR_12 != 0)
  FUNC_6(VAR_4->net, "setting rndis config parameter failed, %d\n",
      VAR_12);

 FUNC_3(VAR_8);
 return VAR_12;
}
