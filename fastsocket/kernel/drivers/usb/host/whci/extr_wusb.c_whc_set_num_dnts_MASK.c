
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wusbhc {int dummy; } ;
struct whc {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;
 struct whc* FUNC_3 (struct wusbhc*) ;

int FUNC_4(struct wusbhc *VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct whc *VAR_5 = FUNC_3(VAR_2);
 u32 VAR_6;

 VAR_6 = VAR_1
  | FUNC_0(VAR_3)
  | FUNC_1(VAR_4);

 FUNC_2(VAR_6, VAR_5->base + VAR_0);

 return 0;
}
