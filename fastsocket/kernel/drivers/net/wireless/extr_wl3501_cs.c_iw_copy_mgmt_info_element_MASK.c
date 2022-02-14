
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_mgmt_info_element {int len; int data; int id; } ;


 int FUNC_0 (int ,struct iw_mgmt_info_element*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct iw_mgmt_info_element *VAR_0,
          struct iw_mgmt_info_element *VAR_1)
{
 FUNC_0(VAR_1->id, VAR_0, VAR_1->data, VAR_1->len);
}
