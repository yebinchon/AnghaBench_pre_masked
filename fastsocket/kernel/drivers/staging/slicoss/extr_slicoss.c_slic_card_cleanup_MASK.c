
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sliccard {int loadtimer; scalar_t__ loadtimerset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sliccard*) ;
 int FUNC_2 (struct sliccard*) ;

__attribute__((used)) static void FUNC_3(struct sliccard *VAR_0)
{
 if (VAR_0->loadtimerset) {
  VAR_0->loadtimerset = 0;
  FUNC_0(&VAR_0->loadtimer);
 }

 FUNC_2(VAR_0);

 FUNC_1(VAR_0);
}
