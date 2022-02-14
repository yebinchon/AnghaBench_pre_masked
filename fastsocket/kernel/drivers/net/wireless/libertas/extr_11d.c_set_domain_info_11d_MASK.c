
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int enable11d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct lbs_private*,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct lbs_private *VAR_3)
{
 int VAR_4;

 if (!VAR_3->enable11d) {
  FUNC_0("dnld domain Info with 11d disabled\n");
  return 0;
 }

 VAR_4 = FUNC_1(VAR_3, VAR_0,
        VAR_1,
        VAR_2, 0, ((void*)0));
 if (VAR_4)
  FUNC_0("fail to dnld domain info\n");

 return VAR_4;
}
