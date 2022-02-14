
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_family_str {int dummy; } ;
typedef int protocol_family_t ;
typedef int ifnet_family_t ;


 int FUNC_0 (struct proto_family_str*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct proto_family_str*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct proto_family_str* FUNC_4 (int ,int ) ;

void
FUNC_5(protocol_family_t VAR_4,
    ifnet_family_t VAR_5)
{
 struct proto_family_str *VAR_6;

 FUNC_2(VAR_3);

 VAR_6 = FUNC_4(VAR_4, VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_3);
  return;
 }

 FUNC_1(&VAR_2, VAR_6, VAR_1);
 FUNC_0(VAR_6, VAR_0);

 FUNC_3(VAR_3);
}
