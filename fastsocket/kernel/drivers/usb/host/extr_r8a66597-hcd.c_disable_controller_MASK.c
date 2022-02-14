
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8a66597 {int max_root_hub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct r8a66597*) ;
 int FUNC_1 (struct r8a66597*,int) ;
 int FUNC_2 (struct r8a66597*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct r8a66597 *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_2, 0, VAR_0);
 FUNC_2(VAR_2, 0, VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_2->max_root_hub; VAR_3++)
  FUNC_1(VAR_2, VAR_3);

 FUNC_0(VAR_2);
}
