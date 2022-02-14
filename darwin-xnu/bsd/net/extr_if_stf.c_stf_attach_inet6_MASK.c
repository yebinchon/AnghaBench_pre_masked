
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet_attach_proto_param {int pre_output; int input; } ;
typedef int reg ;
typedef scalar_t__ protocol_family_t ;
typedef int ifnet_t ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ifnet_attach_proto_param*,int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,struct ifnet_attach_proto_param*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static errno_t
FUNC_3(
 ifnet_t VAR_5,
 protocol_family_t VAR_6)
{
    struct ifnet_attach_proto_param VAR_7;
    errno_t VAR_8;

    if (VAR_6 != VAR_2)
     return VAR_1;

 FUNC_0(&VAR_7, sizeof(VAR_7));
    VAR_7.input = VAR_3;
    VAR_7.pre_output = VAR_4;

    VAR_8 = FUNC_1(VAR_5, VAR_6, &VAR_7);
    if (VAR_8 && VAR_8 != VAR_0) {
        FUNC_2("stf_attach_proto_family can't attach interface fam=%d\n",
            VAR_6);
    }

    return VAR_8;
}
