
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cirrusfb_info {scalar_t__ btype; int regbase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_0 (struct cirrusfb_info*) ;
 int FUNC_1 (int ,unsigned int,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct cirrusfb_info *VAR_7, unsigned char VAR_8, unsigned char VAR_9,
     unsigned char VAR_10, unsigned char VAR_11)
{
 unsigned int VAR_12 = VAR_5;


 FUNC_1(VAR_7->regbase, VAR_6, VAR_8);

 if (VAR_7->btype == VAR_2 || VAR_7->btype == VAR_3 ||
     VAR_7->btype == VAR_0 || VAR_7->btype == VAR_1 ||
     VAR_7->btype == VAR_4 || FUNC_0(VAR_7)) {

  if (VAR_7->btype == VAR_2)
   VAR_12 += 0xfff;
  FUNC_1(VAR_7->regbase, VAR_12, VAR_9);
  FUNC_1(VAR_7->regbase, VAR_12, VAR_10);
  FUNC_1(VAR_7->regbase, VAR_12, VAR_11);
 } else {
  FUNC_1(VAR_7->regbase, VAR_12, VAR_11);
  FUNC_1(VAR_7->regbase, VAR_12, VAR_10);
  FUNC_1(VAR_7->regbase, VAR_12, VAR_9);
 }
}
