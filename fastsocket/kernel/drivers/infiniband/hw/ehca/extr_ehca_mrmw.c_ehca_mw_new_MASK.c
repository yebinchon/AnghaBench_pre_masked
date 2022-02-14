
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehca_mw {int mwlock; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct ehca_mw* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct ehca_mw *FUNC_3(void)
{
 struct ehca_mw *VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  FUNC_2(&VAR_2->mwlock);
 else
  FUNC_0("alloc failed");

 return VAR_2;
}
