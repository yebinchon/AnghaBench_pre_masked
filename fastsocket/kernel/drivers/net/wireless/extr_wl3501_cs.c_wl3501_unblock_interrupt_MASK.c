
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl3501_card {scalar_t__ base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct wl3501_card *VAR_4)
{
 u8 VAR_5 = FUNC_0(VAR_4->base_addr + VAR_3);
 u8 VAR_6 = (VAR_5 & ~(VAR_0 | VAR_2)) |
    VAR_1;

 FUNC_1(VAR_6, VAR_4->base_addr + VAR_3);
 return VAR_5 & VAR_1;
}
