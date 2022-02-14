
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct resource*) ;
 int FUNC_1 (struct resource*,int ,int ) ;

void FUNC_2(struct resource *VAR_4)
{

 if (VAR_4->flags & VAR_3) {
  if (VAR_4->start < VAR_0)
   VAR_4->start = VAR_0;
  FUNC_1(VAR_4, VAR_1, VAR_2);

  FUNC_0(VAR_4);
 }
}
