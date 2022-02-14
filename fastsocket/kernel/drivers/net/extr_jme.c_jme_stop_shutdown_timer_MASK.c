
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jme_adapter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct jme_adapter*,int ) ;
 int FUNC_2 (struct jme_adapter*,int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct jme_adapter *VAR_7)
{
 u32 VAR_8;

 FUNC_2(VAR_7, VAR_6, 0);
 FUNC_2(VAR_7, VAR_5, 0);
 FUNC_0(VAR_4, &VAR_7->flags);

 VAR_8 = FUNC_1(VAR_7, VAR_0);
 VAR_8 &= ~(VAR_3 | VAR_1);
 FUNC_2(VAR_7, VAR_0, VAR_8 | VAR_2);
 FUNC_3();
 FUNC_2(VAR_7, VAR_0, VAR_8);
}
