
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;
struct daisydev {int daisy; int devnum; struct daisydev* next; struct parport* port; } ;


 int VAR_0 ;
 struct daisydev* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct daisydev* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(int VAR_3, struct parport *VAR_4, int VAR_5)
{
 struct daisydev *VAR_6, **VAR_7;
 VAR_6 = FUNC_0(sizeof(struct daisydev), VAR_0);
 if (VAR_6) {
  VAR_6->port = VAR_4;
  VAR_6->daisy = VAR_5;
  VAR_6->devnum = VAR_3;
  FUNC_1(&VAR_2);
  for (VAR_7 = &VAR_1; *VAR_7 && (*VAR_7)->devnum<VAR_3; VAR_7 = &(*VAR_7)->next)
   ;
  VAR_6->next = *VAR_7;
  *VAR_7 = VAR_6;
  FUNC_2(&VAR_2);
 }
}
