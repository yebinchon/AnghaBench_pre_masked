
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port_operations {struct ata_port_operations* inherits; } ;
typedef int DEFINE_SPINLOCK ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ata_port_operations *VAR_0)
{
 static DEFINE_SPINLOCK(VAR_1);
 const struct ata_port_operations *VAR_2;
 void **VAR_3 = (void **)VAR_0;
 void **VAR_4 = (void **)&VAR_0->inherits;
 void **VAR_5;

 if (!VAR_0 || !VAR_0->inherits)
  return;

 FUNC_1(&VAR_1);

 for (VAR_2 = VAR_0->inherits; VAR_2; VAR_2 = VAR_2->inherits) {
  void **VAR_6 = (void **)VAR_2;

  for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5++, VAR_6++)
   if (!*VAR_5)
    *VAR_5 = *VAR_6;
 }

 for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5++)
  if (FUNC_0(*VAR_5))
   *VAR_5 = ((void*)0);

 VAR_0->inherits = ((void*)0);

 FUNC_2(&VAR_1);
}
