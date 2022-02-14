
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {unsigned long head; unsigned long start; scalar_t__ preserve_context; int control_code_page; } ;
typedef int (* relocate_new_kernel_t ) (unsigned long,unsigned long,unsigned long) ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct kimage*) ;
 int FUNC_4 () ;
 int FUNC_5 (void*,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 unsigned long* FUNC_7 (unsigned long) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_11 (unsigned long) ;

void FUNC_12(struct kimage *VAR_7)
{
 unsigned long VAR_8;
 unsigned long VAR_9;
 relocate_new_kernel_t VAR_10;
 unsigned long VAR_11;
 unsigned long *VAR_12;
 int VAR_13;






 for (VAR_12 = &VAR_7->head; (VAR_11 = *VAR_12) && !(VAR_11 & VAR_1);
      VAR_12 = (VAR_11 & VAR_2) ?
        FUNC_7(VAR_11 & VAR_4) : VAR_12 + 1) {
  if (*VAR_12 & VAR_3 || *VAR_12 & VAR_2 ||
      *VAR_12 & VAR_0)
   *VAR_12 = (unsigned long) FUNC_7(*VAR_12);
 }






 VAR_13 = FUNC_1();


 FUNC_4();

 VAR_8 = VAR_7->head;


 VAR_9 =
   (unsigned long)FUNC_6(VAR_7->control_code_page);


 FUNC_5((void *)VAR_9, VAR_5,
      VAR_6);

 FUNC_3(VAR_7);
 FUNC_2();
 VAR_10 = (relocate_new_kernel_t) VAR_9;
 (*VAR_10)(VAR_8, VAR_9,
        (unsigned long)FUNC_7(VAR_7->start));
 FUNC_0(VAR_13);
}
