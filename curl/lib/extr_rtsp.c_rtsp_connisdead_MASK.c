
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int * sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct connectdata*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_2(struct connectdata *VAR_5)
{
  int VAR_6;
  bool VAR_7 = VAR_4;

  VAR_6 = FUNC_1(VAR_5->sock[VAR_3], 0);
  if(VAR_6 == 0) {

    VAR_7 = VAR_2;
  }
  else if(VAR_6 & VAR_0) {

    VAR_7 = VAR_4;
  }
  else if(VAR_6 & VAR_1) {

    VAR_7 = !FUNC_0(VAR_5);
  }

  return VAR_7;
}
