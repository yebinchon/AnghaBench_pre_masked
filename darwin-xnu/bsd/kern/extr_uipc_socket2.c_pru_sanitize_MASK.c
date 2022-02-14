
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_usrreqs {int pru_preconnect; int pru_socheckopt; int pru_sosend_list; int pru_sosend; int pru_soreceive_list; int pru_soreceive; int pru_sopoll; int pru_sockaddr; int pru_shutdown; int pru_sense; int pru_send_list; int pru_send; int pru_rcvoob; int pru_rcvd; int pru_peeraddr; int pru_listen; int pru_disconnectx; int pru_disconnect; int pru_detach; int pru_control; int pru_connectx; int pru_connect2; int pru_connect; int pru_bind; int pru_attach; int pru_accept; int pru_abort; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

void
FUNC_1(struct pr_usrreqs *VAR_27)
{

 if ((VAR_27->pru_abort) == ((void*)0)) (VAR_27->pru_abort) = (VAR_0);
 if ((VAR_27->pru_accept) == ((void*)0)) (VAR_27->pru_accept) = (VAR_1);
 if ((VAR_27->pru_attach) == ((void*)0)) (VAR_27->pru_attach) = (VAR_2);
 if ((VAR_27->pru_bind) == ((void*)0)) (VAR_27->pru_bind) = (VAR_3);
 if ((VAR_27->pru_connect) == ((void*)0)) (VAR_27->pru_connect) = (VAR_5);
 if ((VAR_27->pru_connect2) == ((void*)0)) (VAR_27->pru_connect2) = (VAR_4);
 if ((VAR_27->pru_connectx) == ((void*)0)) (VAR_27->pru_connectx) = (VAR_6);
 if ((VAR_27->pru_control) == ((void*)0)) (VAR_27->pru_control) = (VAR_7);
 if ((VAR_27->pru_detach) == ((void*)0)) (VAR_27->pru_detach) = (VAR_8);
 if ((VAR_27->pru_disconnect) == ((void*)0)) (VAR_27->pru_disconnect) = (VAR_9);
 if ((VAR_27->pru_disconnectx) == ((void*)0)) (VAR_27->pru_disconnectx) = (VAR_10);
 if ((VAR_27->pru_listen) == ((void*)0)) (VAR_27->pru_listen) = (VAR_11);
 if ((VAR_27->pru_peeraddr) == ((void*)0)) (VAR_27->pru_peeraddr) = (VAR_12);
 if ((VAR_27->pru_rcvd) == ((void*)0)) (VAR_27->pru_rcvd) = (VAR_14);
 if ((VAR_27->pru_rcvoob) == ((void*)0)) (VAR_27->pru_rcvoob) = (VAR_15);
 if ((VAR_27->pru_send) == ((void*)0)) (VAR_27->pru_send) = (VAR_17);
 if ((VAR_27->pru_send_list) == ((void*)0)) (VAR_27->pru_send_list) = (VAR_16);
 if ((VAR_27->pru_sense) == ((void*)0)) (VAR_27->pru_sense) = (VAR_18);
 if ((VAR_27->pru_shutdown) == ((void*)0)) (VAR_27->pru_shutdown) = (VAR_19);
 if ((VAR_27->pru_sockaddr) == ((void*)0)) (VAR_27->pru_sockaddr) = (VAR_21);
 if ((VAR_27->pru_sopoll) == ((void*)0)) (VAR_27->pru_sopoll) = (VAR_22);
 if ((VAR_27->pru_soreceive) == ((void*)0)) (VAR_27->pru_soreceive) = (VAR_24);
 if ((VAR_27->pru_soreceive_list) == ((void*)0)) (VAR_27->pru_soreceive_list) = (VAR_23);
 if ((VAR_27->pru_sosend) == ((void*)0)) (VAR_27->pru_sosend) = (VAR_26);
 if ((VAR_27->pru_sosend_list) == ((void*)0)) (VAR_27->pru_sosend_list) = (VAR_25);
 if ((VAR_27->pru_socheckopt) == ((void*)0)) (VAR_27->pru_socheckopt) = (VAR_20);
 if ((VAR_27->pru_preconnect) == ((void*)0)) (VAR_27->pru_preconnect) = (VAR_13);

}
