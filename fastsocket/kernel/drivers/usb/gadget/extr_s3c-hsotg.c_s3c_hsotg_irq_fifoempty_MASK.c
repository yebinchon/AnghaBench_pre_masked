
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_hsotg_ep {scalar_t__ periodic; int dir_in; } ;
struct s3c_hsotg {struct s3c_hsotg_ep* eps; } ;


 int VAR_0 ;
 int FUNC_0 (struct s3c_hsotg*,struct s3c_hsotg_ep*) ;

__attribute__((used)) static void FUNC_1(struct s3c_hsotg *VAR_1, bool VAR_2)
{
 struct s3c_hsotg_ep *VAR_3;
 int VAR_4, VAR_5;



 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_1->eps[VAR_4];

  if (!VAR_3->dir_in)
   continue;

  if ((VAR_2 && !VAR_3->periodic) ||
      (!VAR_2 && VAR_3->periodic))
   continue;

  VAR_5 = FUNC_0(VAR_1, VAR_3);
  if (VAR_5 < 0)
   break;
 }
}
