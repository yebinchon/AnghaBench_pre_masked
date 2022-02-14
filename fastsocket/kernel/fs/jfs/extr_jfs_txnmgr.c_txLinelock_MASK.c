
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlock {int flag; } ;
struct linelock {int flag; scalar_t__ next; scalar_t__ index; int maxcnt; } ;
typedef scalar_t__ lid_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct tlock* FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;

struct linelock *FUNC_4(struct linelock * VAR_3)
{
 lid_t VAR_4;
 struct tlock *VAR_5;
 struct linelock *VAR_6;

 FUNC_0();


 VAR_4 = FUNC_3();
 VAR_5 = FUNC_2(VAR_4);

 FUNC_1();


 VAR_6 = (struct linelock *) VAR_5;
 VAR_6->next = 0;
 VAR_6->flag = VAR_2;
 VAR_6->maxcnt = VAR_0;
 VAR_6->index = 0;
 if (VAR_5->flag & VAR_1)
  VAR_6->flag |= VAR_1;


 VAR_6->next = VAR_3->next;
 VAR_3->next = VAR_4;

 return VAR_6;
}
