
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int id; } ;
struct msg {int hss_port; int cmd; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct port*) ;
 int FUNC_1 (struct port*,struct msg*,char*) ;
 int FUNC_2 (struct msg*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct port *VAR_1)
{
 struct msg VAR_2;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.cmd = VAR_0;
 VAR_2.hss_port = VAR_1->id;
 FUNC_1(VAR_1, &VAR_2, "HSS_DISABLE_PKT_PIPE");
 FUNC_0(VAR_1);
}
