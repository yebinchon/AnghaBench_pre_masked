
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct gl_packet {int * packet_data; int packet_length; } ;
struct gl_header {struct gl_packet packets; int packet_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct usbnet*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct usbnet *VAR_3, struct sk_buff *VAR_4)
{
 struct gl_header *VAR_5;
 struct gl_packet *VAR_6;
 struct sk_buff *VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 VAR_5 = (struct gl_header *) VAR_4->data;


 VAR_9 = FUNC_2(VAR_5->packet_count);
 if (VAR_9 > VAR_2) {
  FUNC_1("genelink: invalid received packet count %u", VAR_9);
  return 0;
 }


 VAR_6 = &VAR_5->packets;


 FUNC_4(VAR_4, 4);

 while (VAR_9 > 1) {

  VAR_8 = FUNC_2(VAR_6->packet_length);


  if (VAR_8 > VAR_1) {
   FUNC_1("genelink: invalid rx length %d", VAR_8);
   return 0;
  }


  VAR_7 = FUNC_0(VAR_8, VAR_0);
  if (VAR_7) {


   FUNC_3(FUNC_5(VAR_7, VAR_8),
     VAR_6->packet_data, VAR_8);
   FUNC_6(VAR_3, VAR_7);
  }


  VAR_6 = (struct gl_packet *)&VAR_6->packet_data[VAR_8];
  VAR_9--;


  FUNC_4(VAR_4, VAR_8 + 4);
 }


 FUNC_4(VAR_4, 4);

 if (VAR_4->len > VAR_1) {
  FUNC_1("genelink: invalid rx length %d", VAR_4->len);
  return 0;
 }
 return 1;
}
