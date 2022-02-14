
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tmp ;
struct wl3501_card {scalar_t__ esbq_req_head; } ;


 int FUNC_0 (struct wl3501_card*,scalar_t__,int*,int) ;

__attribute__((used)) static int FUNC_1(struct wl3501_card *VAR_0)
{
 u8 VAR_1 = 0;

 FUNC_0(VAR_0, VAR_0->esbq_req_head + 3, &VAR_1, sizeof(VAR_1));
 return VAR_1 & 0x80;
}
