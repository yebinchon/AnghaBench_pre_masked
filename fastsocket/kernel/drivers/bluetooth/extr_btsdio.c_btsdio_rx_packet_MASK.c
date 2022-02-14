
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int* data; void* dev; } ;
struct btsdio_data {int func; TYPE_2__* hdev; } ;
struct TYPE_6__ {int pkt_type; } ;
struct TYPE_4__ {int byte_rx; } ;
struct TYPE_5__ {TYPE_1__ stat; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int*,int ,int) ;
 int FUNC_6 (int ,int,int ,int *) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_8(struct btsdio_data *VAR_5)
{
 u8 VAR_6[4] __attribute__ ((aligned(4)));
 struct sk_buff *VAR_7;
 int VAR_8, VAR_9;

 FUNC_0("%s", VAR_5->hdev->name);

 VAR_8 = FUNC_5(VAR_5->func, VAR_6, VAR_4, 4);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = VAR_6[0] | (VAR_6[1] << 8) | (VAR_6[2] << 16);
 if (VAR_9 < 4 || VAR_9 > 65543)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_9 - 4, VAR_2);
 if (!VAR_7) {



  return -VAR_1;
 }

 FUNC_7(VAR_7, VAR_9 - 4);

 VAR_8 = FUNC_5(VAR_5->func, VAR_7->data, VAR_4, VAR_9 - 4);
 if (VAR_8 < 0) {
  FUNC_4(VAR_7);
  return VAR_8;
 }

 VAR_5->hdev->stat.byte_rx += VAR_9;

 VAR_7->dev = (void *) VAR_5->hdev;
 FUNC_1(VAR_7)->pkt_type = VAR_6[3];

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_6(VAR_5->func, 0x00, VAR_3, ((void*)0));

 return 0;
}
