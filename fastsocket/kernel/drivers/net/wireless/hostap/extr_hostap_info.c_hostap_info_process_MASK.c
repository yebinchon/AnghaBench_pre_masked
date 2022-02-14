
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {unsigned char* data; int len; } ;
struct hfa384x_info_frame {int type; int len; } ;
struct TYPE_9__ {TYPE_1__* dev; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_8__ {int name; } ;


 int VAR_0 ;




 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_5 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_6 (TYPE_2__*,unsigned char*,int) ;

void FUNC_7(local_info_t *VAR_1, struct sk_buff *VAR_2)
{
 struct hfa384x_info_frame *VAR_3;
 unsigned char *VAR_4;
 int VAR_5;

 int VAR_6;


 VAR_3 = (struct hfa384x_info_frame *) VAR_2->data;
 VAR_4 = VAR_2->data + sizeof(*VAR_3);
 VAR_5 = VAR_2->len - sizeof(*VAR_3);

 switch (FUNC_2(VAR_3->type)) {
 case 131:
  FUNC_3(VAR_1, VAR_4, VAR_5);
  break;


 case 129:
  FUNC_5(VAR_1, VAR_4, VAR_5);
  break;

 case 128:
  FUNC_6(VAR_1, VAR_4, VAR_5);
  break;

 case 130:
  FUNC_4(VAR_1, VAR_4, VAR_5);
  break;



 default:
  FUNC_0(VAR_0, "%s: INFO - len=%d type=0x%04x\n",
         VAR_1->dev->name, FUNC_2(VAR_3->len),
         FUNC_2(VAR_3->type));
  FUNC_0(VAR_0, "Unknown info frame:");
  for (VAR_6 = 0; VAR_6 < (VAR_5 < 100 ? VAR_5 : 100); VAR_6++)
   FUNC_1(VAR_0, " %02x", VAR_4[VAR_6]);
  FUNC_1(VAR_0, "\n");
  break;

 }
}
