
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aztech {unsigned long curfreq; int lock; int io; int curvol; scalar_t__ stereo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct aztech*) ;
 int FUNC_4 (struct aztech*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct aztech *VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1->lock);

 VAR_1->curfreq = VAR_2;
 VAR_2 += 171200;
 VAR_2 /= 800;

 FUNC_3(VAR_1);

 for (VAR_3 = 0; VAR_3 < 13; VAR_3++)
  if (VAR_2 & (1 << VAR_3))
   FUNC_4(VAR_1);
  else
   FUNC_3(VAR_1);

 FUNC_3(VAR_1);
 FUNC_3(VAR_1);
 FUNC_3(VAR_1);
 if (VAR_1->stereo)
  FUNC_4(VAR_1);
 else
  FUNC_3(VAR_1);

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);



 FUNC_5(VAR_0);
 FUNC_2(128 + 64 + FUNC_6(VAR_1->curvol), VAR_1->io);

 FUNC_1(&VAR_1->lock);

 return 0;
}
