
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcbit_dev {scalar_t__ readptr; scalar_t__ sh_mem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char FUNC_0 (int ) ;

__attribute__((used)) static __inline__ unsigned char FUNC_1(struct pcbit_dev *VAR_2)
{
  unsigned char VAR_3;

  VAR_3 = FUNC_0(VAR_2->readptr++);
  if (VAR_2->readptr == VAR_2->sh_mem + VAR_0 + VAR_1)
    VAR_2->readptr = VAR_2->sh_mem + VAR_0;

  return VAR_3;
}
