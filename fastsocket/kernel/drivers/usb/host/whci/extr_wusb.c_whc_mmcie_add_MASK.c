
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wusbhc {int dummy; } ;
struct wuie_hdr {int bLength; } ;
struct whc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct whc*,int ,int,struct wuie_hdr*,int) ;
 struct whc* FUNC_1 (struct wusbhc*) ;

int FUNC_2(struct wusbhc *VAR_1, u8 VAR_2, u8 VAR_3,
    u8 VAR_4, struct wuie_hdr *VAR_5)
{
 struct whc *VAR_6 = FUNC_1(VAR_1);
 u32 VAR_7;

 VAR_7 = (VAR_2 << 24)
  | (VAR_3 << 16)
  | (VAR_5->bLength << 8)
  | VAR_4;

 return FUNC_0(VAR_6, VAR_0, VAR_7, VAR_5, VAR_5->bLength);
}
