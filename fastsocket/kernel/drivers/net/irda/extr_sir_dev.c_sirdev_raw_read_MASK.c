
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int data; } ;
struct sir_dev {TYPE_1__ rx_buff; int enable_rx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int) ;

int FUNC_2(struct sir_dev *VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4;

 if (FUNC_0(&VAR_1->enable_rx))
  return -VAR_0;

 VAR_4 = (VAR_3 < VAR_1->rx_buff.len) ? VAR_3 : VAR_1->rx_buff.len;

 if (VAR_4 > 0) {
  FUNC_1(VAR_2, VAR_1->rx_buff.data, VAR_4);
  VAR_1->rx_buff.data += VAR_4;
  VAR_1->rx_buff.len -= VAR_4;
 }



 return VAR_4;
}
