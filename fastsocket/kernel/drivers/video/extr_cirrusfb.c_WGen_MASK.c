
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cirrusfb_info {scalar_t__ btype; int regbase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned long,unsigned char) ;

__attribute__((used)) static void FUNC_1(const struct cirrusfb_info *VAR_3,
    int VAR_4, unsigned char VAR_5)
{
 unsigned long VAR_6 = 0;

 if (VAR_3->btype == VAR_0) {



  if (VAR_4 == VAR_2 || VAR_4 == VAR_1)
   VAR_6 = 0xfff;
 }

 FUNC_0(VAR_3->regbase, VAR_6 + VAR_4, VAR_5);
}
