
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct jme_adapter*,int ) ;
 int FUNC_1 (struct jme_adapter*,int ,int) ;
 int FUNC_2 (struct jme_adapter*,int ,int) ;
 int VAR_10 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(struct jme_adapter *VAR_11)
{
 u32 VAR_12;

 VAR_12 = FUNC_0(VAR_11, VAR_1) | VAR_4;
 VAR_12 &= ~VAR_2;
 if (!VAR_10) {
  FUNC_2(VAR_11, VAR_1, VAR_12 | VAR_3);
  FUNC_4();
 }
 FUNC_2(VAR_11, VAR_1, VAR_12);

 FUNC_2(VAR_11, VAR_6, 0);
 FUNC_3(VAR_5, &VAR_11->flags);
 FUNC_1(VAR_11, VAR_7,
  VAR_9 | ((0xFFFFFF - VAR_0) & VAR_8));
}
