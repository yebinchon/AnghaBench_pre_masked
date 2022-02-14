
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet_attach_proto_param_v2 {int pre_output; int input; } ;
struct ifnet {int dummy; } ;
typedef int protocol_family_t ;
typedef int proto ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ifnet_attach_proto_param_v2*,int) ;
 scalar_t__ FUNC_1 (struct ifnet*,int,struct ifnet_attach_proto_param_v2*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,scalar_t__) ;

__attribute__((used)) static errno_t
FUNC_3(struct ifnet *VAR_3, protocol_family_t VAR_4)
{
 struct ifnet_attach_proto_param_v2 VAR_5;
 errno_t VAR_6 = 0;

 FUNC_0(&VAR_5, sizeof (VAR_5));
 VAR_5.input = VAR_1;
 VAR_5.pre_output = VAR_2;

 VAR_6 = FUNC_1(VAR_3, VAR_4, &VAR_5);

 if (VAR_6 && VAR_6 != VAR_0) {
  FUNC_2("lo_attach_proto: ifnet_attach_protocol for %u "
      "returned=%d\n", VAR_4, VAR_6);
 }

 return (VAR_6);
}
