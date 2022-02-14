
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct ib_mad_port_private {TYPE_2__* version; } ;
struct ib_mad_mgmt_vendor_class_table {struct ib_mad_mgmt_vendor_class_table** vendor_class; int * oui; struct ib_mad_mgmt_vendor_class_table** method_table; } ;
struct ib_mad_mgmt_vendor_class {struct ib_mad_mgmt_vendor_class** vendor_class; int * oui; struct ib_mad_mgmt_vendor_class** method_table; } ;
struct ib_mad_mgmt_method_table {struct ib_mad_mgmt_method_table** vendor_class; int * oui; struct ib_mad_mgmt_method_table** method_table; } ;
struct ib_mad_mgmt_class_table {struct ib_mad_mgmt_class_table** vendor_class; int * oui; struct ib_mad_mgmt_class_table** method_table; } ;
struct ib_mad_agent_private {TYPE_3__* reg_req; TYPE_1__* qp_info; } ;
struct TYPE_6__ {size_t mgmt_class_version; int oui; int mgmt_class; } ;
struct TYPE_5__ {struct ib_mad_mgmt_vendor_class_table* vendor; struct ib_mad_mgmt_vendor_class_table* class; } ;
struct TYPE_4__ {struct ib_mad_port_private* port_priv; } ;


 int FUNC_0 (struct ib_mad_mgmt_vendor_class_table*) ;
 int FUNC_1 (struct ib_mad_mgmt_vendor_class_table*) ;
 int FUNC_2 (struct ib_mad_mgmt_vendor_class_table*) ;
 int FUNC_3 (struct ib_mad_mgmt_vendor_class_table*) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (struct ib_mad_mgmt_vendor_class_table*,int ) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (struct ib_mad_mgmt_vendor_class_table*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct ib_mad_mgmt_vendor_class_table*,struct ib_mad_agent_private*) ;
 size_t FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct ib_mad_agent_private *VAR_0)
{
 struct ib_mad_port_private *VAR_1;
 struct ib_mad_mgmt_class_table *VAR_2;
 struct ib_mad_mgmt_method_table *VAR_3;
 struct ib_mad_mgmt_vendor_class_table *VAR_4;
 struct ib_mad_mgmt_vendor_class *VAR_5;
 int VAR_6;
 u8 VAR_7;





 if (!VAR_0->reg_req) {
  goto out;
 }

 VAR_1 = VAR_0->qp_info->port_priv;
 VAR_7 = FUNC_4(VAR_0->reg_req->mgmt_class);
 VAR_2 = VAR_1->version[
   VAR_0->reg_req->mgmt_class_version].class;
 if (!VAR_2)
  goto vendor_check;

 VAR_3 = VAR_2->method_table[VAR_7];
 if (VAR_3) {

  FUNC_9(VAR_3, VAR_0);

  if (!FUNC_1(VAR_3)) {

    FUNC_7(VAR_3);
    VAR_2->method_table[VAR_7] = ((void*)0);

   if (!FUNC_0(VAR_2)) {

    FUNC_7(VAR_2);
    VAR_1->version[
     VAR_0->reg_req->
     mgmt_class_version].class = ((void*)0);
   }
  }
 }

vendor_check:
 if (!FUNC_6(VAR_7))
  goto out;


 VAR_7 = FUNC_10(VAR_0->reg_req->mgmt_class);
 VAR_4 = VAR_1->version[
   VAR_0->reg_req->mgmt_class_version].vendor;

 if (!VAR_4)
  goto out;

 VAR_5 = VAR_4->vendor_class[VAR_7];
 if (VAR_5) {
  VAR_6 = FUNC_5(VAR_5, VAR_0->reg_req->oui);
  if (VAR_6 < 0)
   goto out;
  VAR_3 = VAR_5->method_table[VAR_6];
  if (VAR_3) {

   FUNC_9(VAR_3, VAR_0);




   if (!FUNC_1(VAR_3)) {

    FUNC_7(VAR_3);
    VAR_5->method_table[VAR_6] = ((void*)0);
    FUNC_8(VAR_5->oui[VAR_6], 0, 3);

    if (!FUNC_2(VAR_5)) {

     FUNC_7(VAR_5);
     VAR_4->vendor_class[VAR_7] = ((void*)0);

     if (!FUNC_3(VAR_4)) {
      FUNC_7(VAR_4);
      VAR_1->version[
       VAR_0->reg_req->
       mgmt_class_version].
       vendor = ((void*)0);
     }
    }
   }
  }
 }

out:
 return;
}
