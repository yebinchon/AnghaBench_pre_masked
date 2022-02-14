
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtrack {scalar_t__ curvol; int io; scalar_t__ muted; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct rtrack *VAR_0)
{
 if (VAR_0->curvol == 0 || VAR_0->muted) {
  FUNC_0(128+64+16+ 1, VAR_0->io);
  FUNC_0(128+64+16+2+1, VAR_0->io);
 }
 else {
  FUNC_0(128+64+16+8+ 1, VAR_0->io);
  FUNC_0(128+64+16+8+2+1, VAR_0->io);
 }
 FUNC_1(1000);
}
