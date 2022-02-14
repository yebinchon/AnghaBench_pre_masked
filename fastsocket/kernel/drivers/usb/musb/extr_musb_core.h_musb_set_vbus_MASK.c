
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {int (* board_set_vbus ) (struct musb*,int) ;} ;


 int FUNC_0 (struct musb*,int) ;

__attribute__((used)) static inline void FUNC_1(struct musb *VAR_0, int VAR_1)
{
 VAR_0->board_set_vbus(VAR_0, VAR_1);
}
