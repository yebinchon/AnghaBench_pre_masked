
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dummy; } ;
struct wusb_dn_hdr {int dummy; } ;
struct whc {struct dn_buf_entry* dn_buf; struct wusbhc wusbhc; } ;
struct dn_buf_entry {int status; int msg_size; scalar_t__ dn_data; int src_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wusbhc*,int ,struct wusb_dn_hdr*,int ) ;

__attribute__((used)) static int FUNC_1(struct whc *VAR_2)
{
 struct wusbhc *VAR_3 = &VAR_2->wusbhc;
 struct dn_buf_entry *VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = VAR_2->dn_buf; VAR_4 < VAR_2->dn_buf + VAR_1; VAR_4++) {
  if (VAR_4->status & VAR_0) {
   FUNC_0(VAR_3, VAR_4->src_addr,
      (struct wusb_dn_hdr *)VAR_4->dn_data,
      VAR_4->msg_size);
   VAR_4->status &= ~VAR_0;
   VAR_5++;
  }
 }
 return VAR_5;
}
