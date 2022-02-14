
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv_fh {int resources; } ;
struct bttv {int resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bttv*) ;
 int FUNC_1 (struct bttv*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static
void FUNC_3(struct bttv *VAR_2, struct bttv_fh *VAR_3, int VAR_4)
{
 if ((VAR_3->resources & VAR_4) != VAR_4) {

  FUNC_2("bttv: BUG! (btres)\n");
 }
 VAR_3->resources &= ~VAR_4;
 VAR_2->resources &= ~VAR_4;

 VAR_4 = VAR_2->resources;

 if (0 == (VAR_4 & VAR_1))
  FUNC_1(VAR_2);

 if (0 == (VAR_4 & VAR_0))
  FUNC_0(VAR_2);
}
