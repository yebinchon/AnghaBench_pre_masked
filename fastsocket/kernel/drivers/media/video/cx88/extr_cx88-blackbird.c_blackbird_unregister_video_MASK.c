
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx8802_dev {int * mpeg_dev; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cx8802_dev *VAR_0)
{
 if (VAR_0->mpeg_dev) {
  if (FUNC_1(VAR_0->mpeg_dev))
   FUNC_2(VAR_0->mpeg_dev);
  else
   FUNC_0(VAR_0->mpeg_dev);
  VAR_0->mpeg_dev = ((void*)0);
 }
}
