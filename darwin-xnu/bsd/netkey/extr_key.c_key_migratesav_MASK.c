
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secasvar {size_t state; struct secashead* sah; } ;
struct secashead {int * savtree; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct secasvar*,int ,int ) ;
 int FUNC_1 (struct secasvar*,int ) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_2 (struct secasvar*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct secasvar *VAR_4,
      struct secashead *VAR_5)
{
 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_4->state != VAR_1) {
  return VAR_0;
 }


 if (FUNC_2(VAR_4))
  FUNC_1(VAR_4, VAR_2);

 VAR_4->sah = VAR_5;
 FUNC_0(&VAR_5->savtree[VAR_1], VAR_4, VAR_3, VAR_2);
 return 0;
}
