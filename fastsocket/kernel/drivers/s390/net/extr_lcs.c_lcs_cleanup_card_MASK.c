
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_card {int read; int write; int * dev; } ;


 int FUNC_0 (int,int ,struct lcs_card**,int) ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct lcs_card *VAR_1)
{

 FUNC_1(3, VAR_0, "cleancrd");
 FUNC_0(2,VAR_0,&VAR_1,sizeof(void*));

 if (VAR_1->dev != ((void*)0))
  FUNC_2(VAR_1->dev);

 FUNC_3(&VAR_1->write);
 FUNC_3(&VAR_1->read);
}
