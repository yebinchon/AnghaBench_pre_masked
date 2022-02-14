
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label {int dummy; } ;


 int FUNC_0 (int ,struct label*) ;
 int VAR_0 ;
 struct label* FUNC_1 (int ) ;
 int VAR_1 ;

struct label *
FUNC_2(void)
{
 struct label *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 FUNC_0(VAR_1, VAR_2);
 return (VAR_2);
}
