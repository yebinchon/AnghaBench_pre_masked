
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct kctl {int id; } ;


 struct kctl* FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

u_int32_t
FUNC_3(const char *VAR_1)
{
 u_int32_t VAR_2 = 0;
 struct kctl *VAR_3;

 FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  VAR_2 = VAR_3->id;
 FUNC_2(VAR_0);

 return (VAR_2);
}
