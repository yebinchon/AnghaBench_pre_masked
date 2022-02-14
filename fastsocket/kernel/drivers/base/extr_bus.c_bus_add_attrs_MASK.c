
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_type {int * bus_attrs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bus_type*,int *) ;
 int FUNC_2 (struct bus_type*,int *) ;

__attribute__((used)) static int FUNC_3(struct bus_type *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 if (VAR_0->bus_attrs) {
  for (VAR_2 = 0; FUNC_0(VAR_0->bus_attrs[VAR_2]); VAR_2++) {
   VAR_1 = FUNC_1(VAR_0, &VAR_0->bus_attrs[VAR_2]);
   if (VAR_1)
    goto err;
  }
 }
done:
 return VAR_1;
err:
 while (--VAR_2 >= 0)
  FUNC_2(VAR_0, &VAR_0->bus_attrs[VAR_2]);
 goto done;
}
