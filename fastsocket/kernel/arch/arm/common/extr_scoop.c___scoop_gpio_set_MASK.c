
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scoop_dev {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned short FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned short,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct scoop_dev *VAR_1,
   unsigned VAR_2, int VAR_3)
{
 unsigned short VAR_4;

 VAR_4 = FUNC_0(VAR_1->base + VAR_0);
 if (VAR_3)
  VAR_4 |= 1 << (VAR_2 + 1);
 else
  VAR_4 &= ~(1 << (VAR_2 + 1));
 FUNC_1(VAR_4, VAR_1->base + VAR_0);
}
