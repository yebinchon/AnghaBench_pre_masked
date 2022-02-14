
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_adsp_module {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct msm_adsp_module*,unsigned int,void*,size_t) ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct msm_adsp_module *VAR_1, unsigned VAR_2,
     void *VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6 = 0;
 do {
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_5 == -VAR_0)
   FUNC_2(10);
 } while(VAR_5 == -VAR_0 && VAR_6++ < 100);
 if (VAR_6 > 50)
  FUNC_1("adsp: %s command took %d attempts: rc %d\n",
    VAR_1->name, VAR_6, VAR_5);
 return VAR_5;
}
