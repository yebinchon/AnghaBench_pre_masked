
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int dummy; } ;
struct bio {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct io*,unsigned int,int) ;
 int FUNC_3 (struct bio*,struct io**,unsigned int*) ;
 int FUNC_4 (struct bio*) ;

__attribute__((used)) static void FUNC_5(struct bio *VAR_1, int VAR_2)
{
 struct io *VAR_3;
 unsigned VAR_4;

 if (VAR_2 && FUNC_0(VAR_1) == VAR_0)
  FUNC_4(VAR_1);




 FUNC_3(VAR_1, &VAR_3, &VAR_4);

 FUNC_1(VAR_1);

 FUNC_2(VAR_3, VAR_4, VAR_2);
}
