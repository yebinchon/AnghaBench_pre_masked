
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dummy; } ;
struct wusb_dev {int port_idx; int addr; int availability; } ;
struct whc {int mutex; struct di_buf_entry* di_buf; } ;
struct di_buf_entry {int addr_sec_info; int availability_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct whc*,int) ;
 struct whc* FUNC_5 (struct wusbhc*) ;

int FUNC_6(struct wusbhc *VAR_2, struct wusb_dev *VAR_3)
{
 struct whc *VAR_4 = FUNC_5(VAR_2);
 int VAR_5 = VAR_3->port_idx;
 struct di_buf_entry *VAR_6 = &VAR_4->di_buf[VAR_5];
 int VAR_7;

 FUNC_1(&VAR_4->mutex);

 FUNC_3(VAR_6->availability_info, &VAR_3->availability);
 VAR_6->addr_sec_info &= ~(VAR_1 | VAR_0);
 VAR_6->addr_sec_info |= FUNC_0(VAR_3->addr);

 VAR_7 = FUNC_4(VAR_4, VAR_5);

 FUNC_2(&VAR_4->mutex);

 return VAR_7;
}
