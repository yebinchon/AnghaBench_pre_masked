
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pipe*,int) ;
 int FUNC_1 (struct pipe*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct pipe **VAR_5)
{
 struct pipe *VAR_6;
 VAR_6 = (struct pipe *)FUNC_2(VAR_4);

 if ((*VAR_5 = VAR_6) == ((void*)0))
  return (VAR_0);





 FUNC_0(VAR_6, sizeof *VAR_6);



 FUNC_1(VAR_6, VAR_1 | VAR_3 | VAR_2);

 return (0);
}
