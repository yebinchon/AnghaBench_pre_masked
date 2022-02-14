
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r10conf {struct r10conf* mirrors; int tmppage; scalar_t__ r10bio_pool; int plug; } ;
struct mddev {struct r10conf* private; int thread; } ;


 int FUNC_0 (struct r10conf*) ;
 int FUNC_1 (struct r10conf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct r10conf*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct mddev *VAR_0)
{
 struct r10conf *VAR_1 = VAR_0->private;

 FUNC_5(VAR_1, 0);
 FUNC_1(VAR_1);

 FUNC_2(&VAR_0->thread);
 FUNC_4(&VAR_1->plug);

 if (VAR_1->r10bio_pool)
  FUNC_3(VAR_1->r10bio_pool);
 FUNC_6(VAR_1->tmppage);
 FUNC_0(VAR_1->mirrors);
 FUNC_0(VAR_1);
 VAR_0->private = ((void*)0);
 return 0;
}
