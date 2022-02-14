
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtrack {unsigned long curfreq; scalar_t__ curvol; int lock; int io; scalar_t__ muted; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct rtrack*) ;
 int FUNC_4 (struct rtrack*) ;

__attribute__((used)) static int FUNC_5(struct rtrack *VAR_0, unsigned long VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->lock);

 VAR_0->curfreq = VAR_1;



 VAR_1 += 171200;
 VAR_1 /= 800;

 FUNC_3(VAR_0);

 for (VAR_2 = 0; VAR_2 < 13; VAR_2++)
  if (VAR_1 & (1 << VAR_2))
   FUNC_4(VAR_0);
  else
   FUNC_3(VAR_0);

 FUNC_3(VAR_0);
 FUNC_3(VAR_0);

 FUNC_3(VAR_0);
 FUNC_3(VAR_0);
 FUNC_3(VAR_0);
 FUNC_3(VAR_0);

 FUNC_3(VAR_0);
 FUNC_4(VAR_0);
 FUNC_3(VAR_0);
 FUNC_4(VAR_0);

 if (VAR_0->curvol == 0 || VAR_0->muted)
  FUNC_2(0xd0, VAR_0->io);
 else
  FUNC_2(0xd8, VAR_0->io);

 FUNC_1(&VAR_0->lock);

 return 0;
}
