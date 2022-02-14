
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wusbhc {int dummy; } ;
struct whc {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct whc*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct whc*) ;
 int FUNC_4 (struct whc*,int ,int,int *,int ) ;
 struct whc* FUNC_5 (struct wusbhc*) ;

void FUNC_6(struct wusbhc *VAR_3, int VAR_4)
{
 struct whc *VAR_5 = FUNC_5(VAR_3);
 u32 VAR_6, VAR_7;
 int VAR_8;

 FUNC_3(VAR_5);
 FUNC_0(VAR_5);

 VAR_7 = FUNC_1(VAR_5->base + VAR_1) & VAR_2;
 VAR_6 = (VAR_7 + ((VAR_4 * 8) << 7)) & 0x00ffffff;
 VAR_8 = FUNC_4(VAR_5, VAR_0, VAR_6, ((void*)0), 0);
 if (VAR_8 == 0)
  FUNC_2(VAR_4);
}
