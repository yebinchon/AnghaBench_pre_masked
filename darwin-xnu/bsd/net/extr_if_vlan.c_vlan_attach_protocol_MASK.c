
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet_attach_proto_param {int detached; int event; int input; } ;
struct ifnet {int dummy; } ;
typedef int reg ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet_attach_proto_param*,int) ;
 int FUNC_1 (struct ifnet*,int ,struct ifnet_attach_proto_param*) ;
 char* FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (char*,char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_4)
{
    int VAR_5;
    struct ifnet_attach_proto_param VAR_6;

    FUNC_0(&VAR_6, sizeof(VAR_6));
    VAR_6.input = VAR_3;
    VAR_6.event = VAR_2;
    VAR_6.detached = VAR_1;
    VAR_5 = FUNC_1(VAR_4, VAR_0, &VAR_6);
    if (VAR_5) {
 FUNC_4("vlan_proto_attach(%s%d) ifnet_attach_protocol failed, %d\n",
        FUNC_2(VAR_4), FUNC_3(VAR_4), VAR_5);
    }
    return (VAR_5);
}
