
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct openflags {int dummy; } ;


 int VAR_0 ;
 struct openflags FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int ) ;
 int VAR_3 ;
 struct openflags FUNC_2 (struct openflags) ;
 struct openflags FUNC_3 (struct openflags) ;

int FUNC_4(const char *VAR_4, struct openflags *VAR_5)
{
 int VAR_6;

 *VAR_5 = FUNC_0();

 VAR_6 = FUNC_1(VAR_4, VAR_2);
 if (VAR_6 && (VAR_3 != VAR_0))
  return -VAR_3;
 else if (!VAR_6)
  *VAR_5 = FUNC_3(*VAR_5);

 VAR_6 = FUNC_1(VAR_4, VAR_1);
 if (VAR_6 && (VAR_3 != VAR_0))
  return -VAR_3;
 else if (!VAR_6)
  *VAR_5 = FUNC_2(*VAR_5);

 return VAR_6;
}
