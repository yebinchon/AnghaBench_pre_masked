
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct specialix_board {int flags; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,char*,struct specialix_board*) ;
 int VAR_4 ;
 int FUNC_1 (struct specialix_board*) ;

__attribute__((used)) static int FUNC_2(struct specialix_board *VAR_5)
{
 int VAR_6;

 if (VAR_5->flags & VAR_2)
  return 0;

 if (VAR_5->flags & VAR_3)
  VAR_6 = FUNC_0(VAR_5->irq, VAR_4,
   VAR_0 | VAR_1, "specialix IO8+", VAR_5);
 else
  VAR_6 = FUNC_0(VAR_5->irq, VAR_4,
   VAR_0, "specialix IO8+", VAR_5);

 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_5);
 VAR_5->flags |= VAR_2;

 return 0;
}
