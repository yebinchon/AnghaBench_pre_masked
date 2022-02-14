
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scoop_dev {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned short FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct scoop_dev *VAR_1)
{
 unsigned short VAR_2;

 VAR_2 = FUNC_0(VAR_1->base + VAR_0);
 if ((VAR_2 & 0x100) == 0)
  FUNC_1(0x0101, VAR_1->base + VAR_0);
}
