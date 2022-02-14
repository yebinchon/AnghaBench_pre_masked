
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r3964_info {int state; int rx_position; } ;


 int VAR_0 ;
 void* VAR_1 ;







 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct r3964_info*) ;
 int FUNC_2 (struct r3964_info*,int ) ;
 int FUNC_3 (struct r3964_info*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct r3964_info *VAR_3 = (void *)VAR_2;

 switch (VAR_3->state) {
 case 133:
  FUNC_0("TX_REQUEST - timeout");
  FUNC_3(VAR_3);
  break;
 case 128:
  FUNC_2(VAR_3, VAR_0);
  FUNC_1(VAR_3);
  FUNC_3(VAR_3);
  break;
 case 129:
  FUNC_0("WAIT_FOR_TX_ACK - timeout");
  FUNC_3(VAR_3);
  break;
 case 131:
  FUNC_0("WAIT_FOR_RX_BUF - timeout");
  FUNC_2(VAR_3, VAR_0);
  FUNC_1(VAR_3);
  VAR_3->state = VAR_1;
  break;
 case 134:
  FUNC_0("RECEIVING - timeout after %d chars",
    VAR_3->rx_position);
  FUNC_2(VAR_3, VAR_0);
  FUNC_1(VAR_3);
  VAR_3->state = VAR_1;
  break;
 case 130:
  FUNC_0("WAIT_FOR_RX_REPEAT - timeout");
  VAR_3->state = VAR_1;
  break;
 case 132:
  FUNC_0("WAIT_FOR_BCC - timeout");
  FUNC_2(VAR_3, VAR_0);
  FUNC_1(VAR_3);
  VAR_3->state = VAR_1;
  break;
 }
}
