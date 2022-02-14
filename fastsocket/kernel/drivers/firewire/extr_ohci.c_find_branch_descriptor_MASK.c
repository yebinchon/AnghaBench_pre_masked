
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descriptor {int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static struct descriptor *FUNC_1(struct descriptor *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = (FUNC_0(VAR_2->control) & VAR_0) >> 2;
 VAR_5 = (FUNC_0(VAR_2->control) & VAR_1) >> 8;


 if (VAR_3 == 2 && (VAR_4 == 3 || VAR_5 == 2))
  return VAR_2;
 else
  return VAR_2 + VAR_3 - 1;
}
