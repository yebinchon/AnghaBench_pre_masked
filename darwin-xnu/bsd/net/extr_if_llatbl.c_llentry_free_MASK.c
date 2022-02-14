
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llentry {int la_flags; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct llentry*) ;
 int VAR_0 ;
 int FUNC_2 (struct llentry*) ;
 size_t FUNC_3 (struct llentry*) ;

size_t
FUNC_4(struct llentry *VAR_1)
{
 size_t VAR_2;

 FUNC_2(VAR_1);

 FUNC_0((VAR_1->la_flags & VAR_0) == 0, ("freeing linked lle"));

 VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_1);

 return (VAR_2);
}
