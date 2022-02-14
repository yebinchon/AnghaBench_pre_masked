
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv090x_internal {int dummy; } ;
struct stv090x_dev {struct stv090x_dev* next_dev; struct stv090x_internal* internal; } ;


 int VAR_0 ;
 struct stv090x_dev* FUNC_0 (int,int ) ;
 struct stv090x_dev* VAR_1 ;

__attribute__((used)) static struct stv090x_dev *FUNC_1(struct stv090x_internal *VAR_2)
{
 struct stv090x_dev *VAR_3;
 struct stv090x_dev *VAR_4;

 VAR_3 = FUNC_0(sizeof(struct stv090x_dev), VAR_0);
 if (VAR_3 != ((void*)0)) {
  VAR_3->internal = VAR_2;
  VAR_3->next_dev = ((void*)0);


  if (VAR_1 == ((void*)0)) {
   VAR_1 = VAR_3;
  } else {
   VAR_4 = VAR_1;
   while (VAR_4->next_dev != ((void*)0))
    VAR_4 = VAR_4->next_dev;

   VAR_4->next_dev = VAR_3;
  }
 }

 return VAR_3;
}
