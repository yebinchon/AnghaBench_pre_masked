
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_msg {int dummy; } ;
struct qmi_ctxt {int dns2; int dns1; int gateway; int mask; int addr; } ;


 unsigned int FUNC_0 (struct qmi_msg*,int,int,unsigned char*) ;
 int FUNC_1 (unsigned char*,int ) ;
 unsigned char* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct qmi_ctxt *VAR_1, struct qmi_msg *VAR_2)
{
 unsigned char VAR_3[4];
 unsigned VAR_4;

 VAR_4 = FUNC_0(VAR_2, 0x1e, 4, VAR_3);
 FUNC_1(VAR_4 ? VAR_0 : VAR_3, VAR_1->addr);
 VAR_4 = FUNC_0(VAR_2, 0x21, 4, VAR_3);
 FUNC_1(VAR_4 ? VAR_0 : VAR_3, VAR_1->mask);
 VAR_4 = FUNC_0(VAR_2, 0x20, 4, VAR_3);
 FUNC_1(VAR_4 ? VAR_0 : VAR_3, VAR_1->gateway);
 VAR_4 = FUNC_0(VAR_2, 0x15, 4, VAR_3);
 FUNC_1(VAR_4 ? VAR_0 : VAR_3, VAR_1->dns1);
 VAR_4 = FUNC_0(VAR_2, 0x16, 4, VAR_3);
 FUNC_1(VAR_4 ? VAR_0 : VAR_3, VAR_1->dns2);
}
