
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int dummy; } ;
struct usb_interface {int dev; } ;
struct rndis_query_c {int request_id; int len; int offset; } ;
struct rndis_query {void* offset; void* len; int oid; void* msg_len; int msg_type; } ;
struct rndis_msg_hdr {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ,int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rndis_query*,int ,int) ;
 int FUNC_4 (struct usbnet*,struct rndis_msg_hdr*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_3, struct usb_interface *VAR_4,
  void *VAR_5, __le32 VAR_6, u32 VAR_7,
  void **VAR_8, int *VAR_9)
{
 int VAR_10;
 union {
  void *buf;
  struct rndis_msg_hdr *header;
  struct rndis_query *get;
  struct rndis_query_c *get_c;
 } VAR_11;
 u32 VAR_12, VAR_13;

 VAR_11.buf = VAR_5;

 FUNC_3(VAR_11.get, 0, sizeof *VAR_11.get + VAR_7);
 VAR_11.get->msg_type = VAR_2;
 VAR_11.get->msg_len = FUNC_0(sizeof *VAR_11.get + VAR_7);
 VAR_11.get->oid = VAR_6;
 VAR_11.get->len = FUNC_0(VAR_7);
 VAR_11.get->offset = FUNC_0(20);

 VAR_10 = FUNC_4(VAR_3, VAR_11.header, VAR_0);
 if (FUNC_5(VAR_10 < 0)) {
  FUNC_1(&VAR_4->dev, "RNDIS_MSG_QUERY(0x%08x) failed, %d\n",
    VAR_6, VAR_10);
  return VAR_10;
 }

 VAR_12 = FUNC_2(VAR_11.get_c->offset);
 VAR_13 = FUNC_2(VAR_11.get_c->len);
 if (FUNC_5((8 + VAR_12 + VAR_13) > VAR_0))
  goto response_error;

 if (*VAR_9 != -1 && VAR_13 != *VAR_9)
  goto response_error;

 *VAR_8 = (unsigned char *) &VAR_11.get_c->request_id + VAR_12;
 *VAR_9 = VAR_13;

 return VAR_10;

response_error:
 FUNC_1(&VAR_4->dev, "RNDIS_MSG_QUERY(0x%08x) "
   "invalid response - off %d len %d\n",
  VAR_6, VAR_12, VAR_13);
 return -VAR_1;
}
