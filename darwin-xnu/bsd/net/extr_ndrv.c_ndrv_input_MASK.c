
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct socket {int so_rcv; } ;
struct sockaddr_dl {int sdl_len; int sdl_alen; int sdl_data; scalar_t__ sdl_slen; scalar_t__ sdl_nlen; int sdl_type; scalar_t__ sdl_index; int sdl_family; } ;
struct sockaddr {int dummy; } ;
struct ndrv_cb {struct socket* nd_socket; } ;
struct mbuf {int dummy; } ;
typedef int protocol_family_t ;
typedef TYPE_1__* mbuf_t ;
typedef int ifnet_t ;
typedef int errno_t ;
struct TYPE_8__ {int dom_mtx; } ;
struct TYPE_7__ {int * m_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int,int ) ;
 struct ndrv_cb* FUNC_6 (int ,int ) ;
 TYPE_3__* VAR_6 ;
 scalar_t__ FUNC_7 (int *,struct sockaddr*,TYPE_1__*,struct mbuf*,int*) ;
 int FUNC_8 (struct socket*) ;

__attribute__((used)) static errno_t
FUNC_9(
 ifnet_t VAR_7,
 protocol_family_t VAR_8,
 mbuf_t VAR_9,
 char *VAR_10)
{
 struct socket *VAR_11;
 struct sockaddr_dl VAR_12;
 struct ndrv_cb *VAR_13;
 int VAR_14 = 0;

    VAR_12.sdl_len = sizeof (struct sockaddr_dl);
    VAR_12.sdl_family = VAR_0;
    VAR_12.sdl_index = 0;



    VAR_12.sdl_type = VAR_3;
    VAR_12.sdl_nlen = 0;
    VAR_12.sdl_alen = 6;
    VAR_12.sdl_slen = 0;
    FUNC_1(VAR_10, &VAR_12.sdl_data, 6);

 VAR_13 = FUNC_6(VAR_7, VAR_8);
 if (VAR_13 == ((void*)0))
 {
  return(VAR_2);
 }
 VAR_11 = VAR_13->nd_socket;

    VAR_9 = FUNC_5(VAR_9, FUNC_2(VAR_7), VAR_5);
    if (VAR_9 == ((void*)0))
        return VAR_1;
    FUNC_1(VAR_10, VAR_9->m_data, FUNC_2(VAR_7));

 FUNC_0(VAR_6->dom_mtx, VAR_4);
 FUNC_3(VAR_6->dom_mtx);
 if (FUNC_7(&(VAR_11->so_rcv), (struct sockaddr *)&VAR_12,
       VAR_9, (struct mbuf *)0, &VAR_14) != 0) {
  FUNC_8(VAR_11);
 }
 FUNC_4(VAR_6->dom_mtx);
 return 0;
}
