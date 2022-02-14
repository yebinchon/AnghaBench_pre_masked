
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int xid; } ;
struct sk_buff {int len; int data; scalar_t__ head; } ;
struct nc_trailer {int packet_id; } ;
struct nc_header {void* packet_id; void* packet_len; void* hdr_len; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct usbnet*,char*,void*,void*,void*) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (void*,int *) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int,int,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int * FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *
FUNC_12(struct usbnet *VAR_1, struct sk_buff *VAR_2, gfp_t VAR_3)
{
 struct sk_buff *VAR_4;
 struct nc_header *VAR_5 = ((void*)0);
 struct nc_trailer *VAR_6 = ((void*)0);
 int VAR_7 = sizeof (struct nc_trailer);
 int VAR_8 = VAR_2->len;

 if (!((VAR_8 + VAR_7 + sizeof (struct nc_header)) & 0x01))
  VAR_7++;
 if (!FUNC_5(VAR_2)) {
  int VAR_9 = FUNC_7(VAR_2);
  int VAR_10 = FUNC_11(VAR_2);

  if (VAR_7 <= VAR_10 &&
      sizeof(struct nc_header) <= VAR_9)

   goto encapsulate;

  if ((sizeof (struct nc_header) + VAR_7) <
    (VAR_9 + VAR_10)) {

   VAR_2->data = FUNC_3(VAR_2->head
      + sizeof (struct nc_header),
         VAR_2->data, VAR_2->len);
   FUNC_10(VAR_2, VAR_8);
   goto encapsulate;
  }
 }


 VAR_4 = FUNC_6(VAR_2,
    sizeof (struct nc_header),
    VAR_7,
    VAR_3);
 FUNC_1(VAR_2);
 if (!VAR_4)
  return VAR_4;
 VAR_2 = VAR_4;

encapsulate:

 VAR_5 = (struct nc_header *) FUNC_8(VAR_2, sizeof *VAR_5);
 VAR_5->hdr_len = FUNC_0(sizeof (*VAR_5));
 VAR_5->packet_len = FUNC_0(VAR_8);
 VAR_5->packet_id = FUNC_0((u16)VAR_1->xid++);


 if (!((VAR_2->len + sizeof *VAR_6) & 0x01))
  *FUNC_9(VAR_2, 1) = VAR_0;
 VAR_6 = (struct nc_trailer *) FUNC_9(VAR_2, sizeof *VAR_6);
 FUNC_4(VAR_5->packet_id, &VAR_6->packet_id);





 return VAR_2;
}
