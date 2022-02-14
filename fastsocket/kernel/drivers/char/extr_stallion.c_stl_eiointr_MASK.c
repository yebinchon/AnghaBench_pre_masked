
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlpanel {unsigned int iobase; int (* isr ) (struct stlpanel*,unsigned int) ;} ;
struct stlbrd {int iostatus; struct stlpanel** panels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct stlpanel*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct stlbrd *VAR_2)
{
 struct stlpanel *VAR_3;
 unsigned int VAR_4;
 int VAR_5 = 0;

 FUNC_1(&VAR_1);
 VAR_3 = VAR_2->panels[0];
 VAR_4 = VAR_3->iobase;
 while (FUNC_0(VAR_2->iostatus) & VAR_0) {
  VAR_5 = 1;
  (* VAR_3->isr)(VAR_3, VAR_4);
 }
 FUNC_2(&VAR_1);
 return VAR_5;
}
