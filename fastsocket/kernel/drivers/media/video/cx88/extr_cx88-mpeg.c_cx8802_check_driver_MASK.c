
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx8802_driver {scalar_t__ type_id; scalar_t__ hw_access; int * advise_release; int * advise_acquire; int * remove; int * probe; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct cx8802_driver *VAR_6)
{
 if (VAR_6 == ((void*)0))
  return -VAR_5;

 if ((VAR_6->type_id != VAR_3) &&
  (VAR_6->type_id != VAR_2))
  return -VAR_4;

 if ((VAR_6->hw_access != VAR_1) &&
  (VAR_6->hw_access != VAR_0))
  return -VAR_4;

 if ((VAR_6->probe == ((void*)0)) ||
  (VAR_6->remove == ((void*)0)) ||
  (VAR_6->advise_acquire == ((void*)0)) ||
  (VAR_6->advise_release == ((void*)0)))
  return -VAR_4;

 return 0;
}
