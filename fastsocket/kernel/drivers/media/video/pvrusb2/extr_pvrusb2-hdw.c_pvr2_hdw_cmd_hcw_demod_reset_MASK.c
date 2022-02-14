
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int flag_ok; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_hdw*,int) ;

__attribute__((used)) static int FUNC_1(struct pvr2_hdw *VAR_1, int VAR_2)
{
 VAR_1->flag_ok = !0;
 return FUNC_0(VAR_1,
         VAR_0 |
         (1 << 8) |
         ((VAR_2 ? 1 : 0) << 16));
}
