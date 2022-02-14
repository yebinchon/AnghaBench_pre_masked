
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {size_t sopt_valsize; scalar_t__ sopt_val; scalar_t__ sopt_p; } ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (void*,int ,size_t) ;
 int VAR_1 ;
 int FUNC_2 (void*,scalar_t__,size_t) ;
 scalar_t__ VAR_2 ;
 size_t FUNC_3 (size_t,size_t) ;

int
FUNC_4(struct sockopt *VAR_3, void *VAR_4, size_t VAR_5)
{
 int VAR_6;
 size_t VAR_7;

 VAR_6 = 0;
 VAR_7 = FUNC_3(VAR_5, VAR_3->sopt_valsize);
 VAR_3->sopt_valsize = VAR_7;
 if (VAR_3->sopt_val != VAR_0) {
  if (VAR_3->sopt_p != VAR_2)
   VAR_6 = FUNC_2(VAR_4, VAR_3->sopt_val, VAR_7);
  else
   FUNC_1(VAR_4, FUNC_0(VAR_1, VAR_3->sopt_val), VAR_7);
 }
 return (VAR_6);
}
