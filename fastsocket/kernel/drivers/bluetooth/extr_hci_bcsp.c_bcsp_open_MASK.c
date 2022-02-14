
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct hci_uart {struct bcsp_struct* priv; } ;
struct TYPE_2__ {scalar_t__ data; int function; } ;
struct bcsp_struct {int use_crc; int rx_state; TYPE_1__ tbcsp; int unrel; int rel; int unack; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct hci_uart*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 struct bcsp_struct* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_4(struct hci_uart *VAR_5)
{
 struct bcsp_struct *VAR_6;

 FUNC_0("hu %p", VAR_5);

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_5->priv = VAR_6;
 FUNC_3(&VAR_6->unack);
 FUNC_3(&VAR_6->rel);
 FUNC_3(&VAR_6->unrel);

 FUNC_1(&VAR_6->tbcsp);
 VAR_6->tbcsp.function = VAR_3;
 VAR_6->tbcsp.data = (u_long) VAR_5;

 VAR_6->rx_state = VAR_0;

 if (VAR_4)
  VAR_6->use_crc = 1;

 return 0;
}
