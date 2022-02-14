
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_llreach {int lr_debug; int lr_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct if_llreach*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ) ;
 struct if_llreach* FUNC_2 (int ) ;
 struct if_llreach* FUNC_3 (int ) ;

__attribute__((used)) static struct if_llreach *
FUNC_4(int VAR_6)
{
 struct if_llreach *VAR_7;

 VAR_7 = (VAR_6 == VAR_1) ? FUNC_2(VAR_3) : FUNC_3(VAR_3);
 if (VAR_7 != ((void*)0)) {
  FUNC_0(VAR_7, VAR_2);
  FUNC_1(&VAR_7->lr_lock, VAR_5, VAR_4);
  VAR_7->lr_debug |= VAR_0;
 }
 return (VAR_7);
}
