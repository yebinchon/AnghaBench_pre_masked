
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmr2 {unsigned long curfreq; int io; int stereo; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,int,int ) ;

__attribute__((used)) static int FUNC_6(struct fmr2 *VAR_0)
{
 unsigned long VAR_1 = VAR_0->curfreq;

 FUNC_1(VAR_0->io);





 FUNC_5(9, 0x2, 3, VAR_0->io);
 FUNC_5(16, FUNC_0(VAR_1), 2, VAR_0->io);

 FUNC_3(VAR_0->io);


 FUNC_4(110);



 VAR_0->stereo = FUNC_2(VAR_0->io);
 return 0;
}
