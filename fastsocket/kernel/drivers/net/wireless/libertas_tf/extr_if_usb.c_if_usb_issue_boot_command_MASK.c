
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_usb_card {struct bootcmd* ep_out_buf; } ;
struct bootcmd {int cmd; int pad; int magic; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct if_usb_card*,struct bootcmd*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct if_usb_card *VAR_1, int VAR_2)
{
 struct bootcmd *VAR_3 = VAR_1->ep_out_buf;


 VAR_3->magic = FUNC_0(VAR_0);
 VAR_3->cmd = VAR_2;
 FUNC_1(VAR_3->pad, 0, sizeof(VAR_3->pad));


 FUNC_2(VAR_1, VAR_1->ep_out_buf, sizeof(*VAR_3), 0);

 return 0;
}
