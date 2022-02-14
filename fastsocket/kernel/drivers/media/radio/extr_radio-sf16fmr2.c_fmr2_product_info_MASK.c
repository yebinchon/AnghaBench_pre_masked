
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmr2 {int card_type; int io; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct fmr2 *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->io);

 VAR_1 &= 0xC1;
 if (VAR_1 == 0) {

  VAR_0->card_type = 12;
  return 0;
 }

 VAR_0->card_type = (VAR_1 == 128) ? 11 : 0;
 return VAR_1;
}
