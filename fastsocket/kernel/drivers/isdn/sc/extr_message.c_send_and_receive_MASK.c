
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned char type; unsigned char class; unsigned char code; unsigned char phy_link_no; } ;
struct TYPE_3__ {int want_async_messages; int devicename; TYPE_2__ async_msg; } ;
typedef int RspMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (char*,...) ;
 TYPE_1__** VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,unsigned int,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned int*) ;

int FUNC_5(int VAR_4,
  unsigned int VAR_5,
  unsigned char VAR_6,
  unsigned char VAR_7,
  unsigned char VAR_8,
  unsigned char VAR_9,
   unsigned char VAR_10,
  unsigned char *VAR_11,
  RspMessage *VAR_12,
  int VAR_13)
{
 int VAR_14;
 int VAR_15;

 if (!FUNC_0(VAR_4)) {
  FUNC_2("Invalid param: %d is not a valid card id\n", VAR_4);
  return -VAR_0;
 }

 VAR_3[VAR_4]->want_async_messages = 1;
 VAR_14 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
   VAR_10, (unsigned int *) VAR_11);

 if (VAR_14) {
  FUNC_2("%s: SendMessage failed in SAR\n",
   VAR_3[VAR_4]->devicename);
  VAR_3[VAR_4]->want_async_messages = 0;
  return -VAR_1;
 }

 VAR_15 = 0;

 while (VAR_15 < VAR_13) {
  FUNC_3(1);

  FUNC_2("SAR waiting..\n");




  if ((VAR_3[VAR_4]->async_msg.type == VAR_6) &&
      (VAR_3[VAR_4]->async_msg.class == VAR_7) &&
      (VAR_3[VAR_4]->async_msg.code == VAR_8) &&
      (VAR_3[VAR_4]->async_msg.phy_link_no == VAR_9)) {




   FUNC_2("%s: Got ASYNC message\n",
    VAR_3[VAR_4]->devicename);
   FUNC_1(VAR_12, &(VAR_3[VAR_4]->async_msg),
    sizeof(RspMessage));
   VAR_3[VAR_4]->want_async_messages = 0;
   return 0;
  }

     VAR_15++;
 }

 FUNC_2("%s: SAR message timeout\n", VAR_3[VAR_4]->devicename);
 VAR_3[VAR_4]->want_async_messages = 0;
 return -VAR_2;
}
