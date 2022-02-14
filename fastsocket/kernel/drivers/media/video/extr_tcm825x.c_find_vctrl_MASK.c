
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct vcontrol {TYPE_1__ qc; } ;


 int FUNC_0 (struct vcontrol*) ;
 int VAR_0 ;
 struct vcontrol* VAR_1 ;

__attribute__((used)) static struct vcontrol *FUNC_1(int VAR_2)
{
 int VAR_3;

 if (VAR_2 < VAR_0)
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  if (VAR_1[VAR_3].qc.id == VAR_2)
   return &VAR_1[VAR_3];

 return ((void*)0);
}
