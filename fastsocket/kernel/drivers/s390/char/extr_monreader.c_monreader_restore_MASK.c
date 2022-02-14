
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4)
{
 int VAR_5;

 FUNC_3(VAR_2);
 VAR_5 = FUNC_2(VAR_2, VAR_0,
     &VAR_3, &VAR_1);
 if (VAR_5 < 0) {
  FUNC_4(VAR_5, VAR_2);
  FUNC_1("fatal monreader resume error: no monitor dcss\n");
 }
 return FUNC_0(VAR_4);
}
