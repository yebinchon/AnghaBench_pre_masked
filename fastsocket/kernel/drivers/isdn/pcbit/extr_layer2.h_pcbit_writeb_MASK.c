
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcbit_dev {scalar_t__ writeptr; scalar_t__ sh_mem; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char,int ) ;

__attribute__((used)) static __inline__ void FUNC_1(struct pcbit_dev *VAR_1, unsigned char VAR_2)
{
  FUNC_0(VAR_2, VAR_1->writeptr++);
  if (VAR_1->writeptr == VAR_1->sh_mem + VAR_0)
    VAR_1->writeptr = VAR_1->sh_mem;
}
