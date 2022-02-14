
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct pcmcia_socket {int state; TYPE_1__* ops; } ;
struct pcmcia_device {TYPE_3__* function_config; } ;
struct TYPE_6__ {scalar_t__ CardState; scalar_t__ SocketState; } ;
typedef TYPE_2__ cs_status_t ;
struct TYPE_7__ {int state; int IntType; int CardValues; int ConfigBase; } ;
typedef TYPE_3__ config_t ;
struct TYPE_5__ {int (* get_status ) (struct pcmcia_socket*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
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
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (struct pcmcia_socket*,int,int,int,int*) ;
 int FUNC_1 (struct pcmcia_socket*,int*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_socket *VAR_33,
        struct pcmcia_device *VAR_34,
        cs_status_t *VAR_35)
{
 config_t *VAR_36;
 int VAR_37;

 VAR_33->ops->get_status(VAR_33, &VAR_37);
 VAR_35->CardState = VAR_35->SocketState = 0;
 VAR_35->CardState |= (VAR_37 & VAR_29) ? VAR_6 : 0;
 VAR_35->CardState |= (VAR_37 & VAR_28) ? VAR_7 : 0;
 VAR_35->CardState |= (VAR_37 & VAR_25) ? VAR_3 : 0;
 VAR_35->CardState |= (VAR_37 & VAR_32) ? VAR_12 : 0;
 if (VAR_33->state & VAR_24)
  VAR_35->CardState |= VAR_8;
 if (!(VAR_33->state & VAR_23))
  return -VAR_13;

 VAR_36 = (VAR_34) ? VAR_34->function_config : ((void*)0);

 if ((VAR_36 != ((void*)0)) && (VAR_36->state & VAR_2) &&
     (VAR_36->IntType & (VAR_15 | VAR_16))) {
  u_char VAR_38;
  if (VAR_36->CardValues & VAR_18) {
   FUNC_0(VAR_33, 1, (VAR_36->ConfigBase+VAR_1)>>1, 1, &VAR_38);
   VAR_35->CardState |=
    (VAR_38 & VAR_22) ? VAR_11 : 0;
   VAR_35->CardState |=
    (VAR_38 & VAR_21) ? VAR_9 : 0;
   VAR_35->CardState |=
    (VAR_38 & VAR_20) ? VAR_5 : 0;
   VAR_35->CardState |=
    (VAR_38 & VAR_19) ? VAR_4 : 0;
  } else {

   VAR_35->CardState |= VAR_9;
  }
  if (VAR_36->CardValues & VAR_17) {
   FUNC_0(VAR_33, 1, (VAR_36->ConfigBase+VAR_0)>>1, 1, &VAR_38);
   VAR_35->CardState |=
    (VAR_38 & VAR_14) ? VAR_10 : 0;
  }
  return 0;
 }
 VAR_35->CardState |=
  (VAR_37 & VAR_31) ? VAR_11 : 0;
 VAR_35->CardState |=
  (VAR_37 & VAR_26) ? VAR_4 : 0;
 VAR_35->CardState |=
  (VAR_37 & VAR_27) ? VAR_5 : 0;
 VAR_35->CardState |=
  (VAR_37 & VAR_30) ? VAR_9 : 0;
 return 0;
}
