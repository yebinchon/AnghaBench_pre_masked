
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcbit_dev {int id; } ;


 int VAR_0 ;
 struct pcbit_dev** VAR_1 ;

__attribute__((used)) static __inline__ struct pcbit_dev * FUNC_0(int VAR_2)
{
  struct pcbit_dev * VAR_3;
  int VAR_4;

  for (VAR_4=0; VAR_4<VAR_0; VAR_4++)
    if ((VAR_3=VAR_1[VAR_4]))
      if (VAR_3->id == VAR_2)
 return VAR_3;
  return ((void*)0);
}
