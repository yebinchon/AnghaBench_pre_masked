
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label {int l_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct label*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;

struct label *
FUNC_3(int VAR_3)
{
 struct label *VAR_4;

 if (VAR_3 & VAR_1)
  VAR_4 = (struct label *) FUNC_2(VAR_2);
 else
  VAR_4 = (struct label *) FUNC_1(VAR_2);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_4, sizeof(struct label));
 VAR_4->l_flags = VAR_0;
 return (VAR_4);
}
