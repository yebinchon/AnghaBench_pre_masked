
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stu300_dev {scalar_t__ virtbase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct stu300_dev *VAR_2)
{
 u32 VAR_3;
 VAR_3 = FUNC_0(VAR_2->virtbase + VAR_0);
 VAR_3 &= ~VAR_1;

 FUNC_1(VAR_3, VAR_2->virtbase + VAR_0);
 FUNC_1(VAR_3, VAR_2->virtbase + VAR_0);
}
