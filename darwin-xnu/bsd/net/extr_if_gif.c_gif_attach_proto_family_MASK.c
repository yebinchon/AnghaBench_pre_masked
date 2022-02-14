
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet_attach_proto_param {int input; } ;
typedef int reg ;
typedef int protocol_family_t ;
typedef int ifnet_t ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ifnet_attach_proto_param*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int,struct ifnet_attach_proto_param*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static errno_t
FUNC_3(
 ifnet_t VAR_2,
 protocol_family_t VAR_3)
{
 struct ifnet_attach_proto_param VAR_4;
 errno_t VAR_5;

 FUNC_0(&VAR_4, sizeof (VAR_4));
 VAR_4.input = VAR_1;

 VAR_5 = FUNC_1(VAR_2, VAR_3, &VAR_4);
 if (VAR_5 && VAR_5 != VAR_0) {
  FUNC_2("gif_attach_proto_family can't attach interface			    fam=%d\n", VAR_3);

 }

 return (VAR_5);
}
