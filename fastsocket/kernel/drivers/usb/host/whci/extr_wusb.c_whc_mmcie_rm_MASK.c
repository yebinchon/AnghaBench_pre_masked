
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wusbhc {int dummy; } ;
struct whc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct whc*,int ,int ,int *,int ) ;
 struct whc* FUNC_1 (struct wusbhc*) ;

int FUNC_2(struct wusbhc *VAR_1, u8 VAR_2)
{
 struct whc *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4;

 VAR_4 = VAR_2;

 return FUNC_0(VAR_3, VAR_0, VAR_4, ((void*)0), 0);
}
