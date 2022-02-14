
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {unsigned long head; int start; int control_code_page; } ;
typedef int (* noretfun_t ) () ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 () ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (void*,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned long* FUNC_4 (unsigned long) ;
 int FUNC_5 (char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 () ;

void
FUNC_7(struct kimage *VAR_9)
{
 unsigned long VAR_10;
 unsigned long VAR_11;
 unsigned long *VAR_12;

 VAR_10 =
   (unsigned long)FUNC_3(VAR_9->control_code_page);

 VAR_6 = VAR_9->start;
 VAR_5 =
  (unsigned long) FUNC_4(VAR_9->head & VAR_4);

 FUNC_2((void*)VAR_10, VAR_7,
        VAR_8);







 for (VAR_12 = &VAR_9->head; (VAR_11 = *VAR_12) && !(VAR_11 &VAR_1);
      VAR_12 = (VAR_11 & VAR_2) ?
        FUNC_4(VAR_11 & VAR_4) : VAR_12 + 1) {
  if (*VAR_12 & VAR_3 || *VAR_12 & VAR_2 ||
      *VAR_12 & VAR_0)
   *VAR_12 = (unsigned long) FUNC_4(*VAR_12);
 }




 FUNC_1();

 FUNC_5("Will call new kernel at %08lx\n", VAR_9->start);
 FUNC_5("Bye ...\n");
 FUNC_0();
 ((noretfun_t) VAR_10)();
}
