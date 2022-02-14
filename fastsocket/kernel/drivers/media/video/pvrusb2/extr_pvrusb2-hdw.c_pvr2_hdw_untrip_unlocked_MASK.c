
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {scalar_t__ flag_tripped; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct pvr2_hdw *VAR_1)
{
 if (!VAR_1->flag_tripped) return 0;
 VAR_1->flag_tripped = 0;
 FUNC_0(VAR_0,
     "Clearing driver error statuss");
 return !0;
}
