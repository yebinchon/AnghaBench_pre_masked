
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rio_dev {int * riores; } ;
struct resource {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct resource*) ;
 struct resource* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int *,struct resource*) ;
 int FUNC_3 (struct resource*,int ,int ) ;

struct resource *FUNC_4(struct rio_dev *VAR_2, u16 VAR_3,
     u16 VAR_4)
{
 struct resource *VAR_5 = FUNC_1(sizeof(struct resource), VAR_0);

 if (VAR_5) {
  FUNC_3(VAR_5, VAR_3, VAR_4);


  if (FUNC_2(&VAR_2->riores[VAR_1], VAR_5)
      < 0) {
   FUNC_0(VAR_5);
   VAR_5 = ((void*)0);
  }
 }

 return VAR_5;
}
