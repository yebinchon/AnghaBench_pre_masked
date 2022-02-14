
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int hdlc_cfg; int id; } ;
struct msg {int data8a; int data8b; int hss_port; int cmd; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct port*,struct msg*,char*) ;
 int FUNC_1 (struct msg*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct port *VAR_2)
{
 struct msg VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.cmd = VAR_1;
 VAR_3.hss_port = VAR_2->id;
 VAR_3.data8a = VAR_2->hdlc_cfg;
 VAR_3.data8b = VAR_2->hdlc_cfg | (VAR_0 << 3);
 FUNC_0(VAR_2, &VAR_3, "HSS_SET_HDLC_CFG");
}
