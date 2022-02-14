
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xc {int dev; int no; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct xc *VAR_2, unsigned long VAR_3, unsigned int VAR_4)
{
 if (VAR_3 >= FUNC_0(VAR_2->no) &&
     VAR_3 + VAR_4 < FUNC_0(VAR_2->no) + VAR_0)
  return 0;

 if (VAR_3 >= FUNC_1(VAR_2->no) &&
     VAR_3 + VAR_4 < FUNC_1(VAR_2->no) + VAR_1)
  return 0;

 FUNC_2(VAR_2->dev, "Illegal pointer in firmware found. aborting\n");

 return -1;
}
