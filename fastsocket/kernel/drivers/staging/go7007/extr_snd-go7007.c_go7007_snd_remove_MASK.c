
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007_snd {int card; } ;
struct go7007 {struct go7007_snd* snd_context; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct go7007 *VAR_0)
{
 struct go7007_snd *VAR_1 = VAR_0->snd_context;

 FUNC_0(VAR_1->card);
 FUNC_1(VAR_1->card);
 return 0;
}
