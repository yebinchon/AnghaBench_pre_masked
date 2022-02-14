
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct port {TYPE_1__** rx_buff_tab; TYPE_3__* netdev; TYPE_1__** tx_buff_tab; TYPE_1__** desc_tab; int desc_tab_phys; } ;
struct desc {int data; int buf_len; } ;
struct TYPE_8__ {void* data; } ;
typedef TYPE_1__ buffer_t ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,void*,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_8 ;
 TYPE_1__** FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int *,int,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__**,int ,int) ;
 TYPE_1__* FUNC_7 (TYPE_3__*,int ) ;
 int VAR_9 ;
 struct desc* FUNC_8 (struct port*,int) ;

__attribute__((used)) static int FUNC_9(struct port *VAR_10)
{
 int VAR_11;

 if (!VAR_9)
  if (!(VAR_8 = FUNC_3(VAR_1, ((void*)0),
       VAR_5, 32, 0)))
   return -VAR_3;

 if (!(VAR_10->desc_tab = FUNC_2(VAR_8, VAR_4,
           &VAR_10->desc_tab_phys)))
  return -VAR_3;
 FUNC_6(VAR_10->desc_tab, 0, VAR_5);
 FUNC_6(VAR_10->rx_buff_tab, 0, sizeof(VAR_10->rx_buff_tab));
 FUNC_6(VAR_10->tx_buff_tab, 0, sizeof(VAR_10->tx_buff_tab));


 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  struct desc *VAR_12 = FUNC_8(VAR_10, VAR_11);
  buffer_t *VAR_13;
  void *VAR_14;





  if (!(VAR_13 = FUNC_5(VAR_7, VAR_4)))
   return -VAR_3;
  VAR_14 = VAR_13;

  VAR_12->buf_len = VAR_7;
  VAR_12->data = FUNC_0(&VAR_10->netdev->dev, VAR_14,
         VAR_7, VAR_0);
  if (FUNC_1(&VAR_10->netdev->dev, VAR_12->data)) {
   FUNC_4(VAR_13);
   return -VAR_2;
  }
  VAR_10->rx_buff_tab[VAR_11] = VAR_13;
 }

 return 0;
}
