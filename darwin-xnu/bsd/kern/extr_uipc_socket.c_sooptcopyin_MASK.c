
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {size_t sopt_valsize; scalar_t__ sopt_p; int sopt_val; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,void*,size_t) ;
 int VAR_1 ;
 int FUNC_2 (int ,void*,size_t) ;
 scalar_t__ VAR_2 ;

int
FUNC_3(struct sockopt *VAR_3, void *VAR_4, size_t VAR_5, size_t VAR_6)
{
 size_t VAR_7;







 if ((VAR_7 = VAR_3->sopt_valsize) < VAR_6)
  return (VAR_0);
 if (VAR_7 > VAR_5)
  VAR_3->sopt_valsize = VAR_7 = VAR_5;

 if (VAR_3->sopt_p != VAR_2)
  return (FUNC_2(VAR_3->sopt_val, VAR_4, VAR_7));

 FUNC_1(FUNC_0(VAR_1, VAR_3->sopt_val), VAR_4, VAR_7);
 return (0);
}
