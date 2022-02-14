
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned long start; unsigned long end; } ;


 struct resource* VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct resource*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(int VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 struct resource *VAR_6 = &VAR_0[VAR_3];
 int VAR_7;

 VAR_5 = FUNC_0(VAR_5);
 FUNC_2(&VAR_1);
 VAR_6->start = VAR_4;
 VAR_6->end = VAR_4 + VAR_5 - 1;
 VAR_7 = FUNC_1(&VAR_2, VAR_6);
 FUNC_3(&VAR_1);

 return VAR_7;
}
