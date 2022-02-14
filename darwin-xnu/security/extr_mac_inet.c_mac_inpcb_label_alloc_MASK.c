
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label {int dummy; } ;


 int FUNC_0 (int ,struct label*,int) ;
 int FUNC_1 (int ,struct label*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct label* FUNC_2 (int) ;
 int FUNC_3 (struct label*) ;

__attribute__((used)) static struct label *
FUNC_4(int VAR_2)
{
 struct label *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 FUNC_0(VAR_1, VAR_3, VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_0, VAR_3);
  FUNC_3(VAR_3);
  return (((void*)0));
 }
 return (VAR_3);
}
