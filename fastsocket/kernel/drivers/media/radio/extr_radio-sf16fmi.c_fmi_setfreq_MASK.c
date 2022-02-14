
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmi {unsigned long curfreq; scalar_t__ curvol; int lock; int io; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct fmi*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int,int ) ;

__attribute__((used)) static inline int FUNC_6(struct fmi *VAR_0, unsigned long VAR_1)
{
 FUNC_3(&VAR_0->lock);
 VAR_0->curfreq = VAR_1;

 FUNC_5(16, FUNC_0(VAR_1), VAR_0->io);
 FUNC_5(8, 0xC0, VAR_0->io);
 FUNC_2(143);
 FUNC_4(&VAR_0->lock);
 if (VAR_0->curvol)
  FUNC_1(VAR_0);
 return 0;
}
