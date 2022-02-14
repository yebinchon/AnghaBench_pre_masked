
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int* data; int len; } ;
struct btsdio_data {TYPE_2__* hdev; int func; } ;
struct TYPE_6__ {int pkt_type; } ;
struct TYPE_4__ {int byte_tx; } ;
struct TYPE_5__ {TYPE_1__ stat; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int,int ,int *) ;
 int FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_7(struct btsdio_data *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4;

 FUNC_0("%s", VAR_2->hdev->name);


 FUNC_6(VAR_3, 4);
 VAR_3->data[0] = (VAR_3->len & 0x0000ff);
 VAR_3->data[1] = (VAR_3->len & 0x00ff00) >> 8;
 VAR_3->data[2] = (VAR_3->len & 0xff0000) >> 16;
 VAR_3->data[3] = FUNC_1(VAR_3)->pkt_type;

 VAR_4 = FUNC_4(VAR_2->func, VAR_1, VAR_3->data, VAR_3->len);
 if (VAR_4 < 0) {
  FUNC_5(VAR_3, 4);
  FUNC_3(VAR_2->func, 0x01, VAR_0, ((void*)0));
  return VAR_4;
 }

 VAR_2->hdev->stat.byte_tx += VAR_3->len;

 FUNC_2(VAR_3);

 return 0;
}
