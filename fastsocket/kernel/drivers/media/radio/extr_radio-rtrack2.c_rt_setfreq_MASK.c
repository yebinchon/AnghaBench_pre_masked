
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtrack2 {unsigned long curfreq; int lock; int io; int muted; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtrack2*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct rtrack2*) ;

__attribute__((used)) static int FUNC_5(struct rtrack2 *VAR_0, unsigned long VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->lock);
 VAR_0->curfreq = VAR_1;
 VAR_1 = VAR_1 / 200 + 856;

 FUNC_3(0xc8, VAR_0->io);
 FUNC_3(0xc9, VAR_0->io);
 FUNC_3(0xc9, VAR_0->io);

 for (VAR_2 = 0; VAR_2 < 10; VAR_2++)
  FUNC_4(VAR_0);

 for (VAR_2 = 14; VAR_2 >= 0; VAR_2--)
  if (VAR_1 & (1 << VAR_2))
   FUNC_2(VAR_0);
  else
   FUNC_4(VAR_0);

 FUNC_3(0xc8, VAR_0->io);
 if (!VAR_0->muted)
  FUNC_3(0, VAR_0->io);

 FUNC_1(&VAR_0->lock);
 return 0;
}
