
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_user_data {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,int ,int ,void*) ;
 int VAR_1 ;
 struct per_user_data** VAR_2 ;

__attribute__((used)) static int FUNC_2(struct per_user_data *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 FUNC_0(VAR_2[VAR_4] != ((void*)0));
 VAR_2[VAR_4] = VAR_3;

 VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_0,
           VAR_3->name, (void *)(unsigned long)VAR_4);
 if (VAR_5 >= 0)
  VAR_5 = 0;

 return VAR_5;
}
