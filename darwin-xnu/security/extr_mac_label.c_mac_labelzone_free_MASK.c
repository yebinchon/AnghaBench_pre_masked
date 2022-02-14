
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label {int l_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct label*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct label*) ;
 int VAR_1 ;

void
FUNC_3(struct label *VAR_2)
{

 if (VAR_2 == ((void*)0))
  FUNC_1("Free of NULL MAC label\n");

 if ((VAR_2->l_flags & VAR_0) == 0)
  FUNC_1("Free of uninitialized label\n");
 FUNC_0(VAR_2, sizeof(struct label));
 FUNC_2(VAR_1, VAR_2);
}
