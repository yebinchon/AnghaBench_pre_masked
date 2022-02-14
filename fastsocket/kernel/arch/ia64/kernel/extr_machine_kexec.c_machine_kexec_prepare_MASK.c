
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {int control_code_page; } ;


 int FUNC_0 (unsigned long,scalar_t__) ;
 struct kimage* VAR_0 ;
 int FUNC_1 (void*,void const*,scalar_t__) ;
 void* FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_3(struct kimage *VAR_3)
{
 void *VAR_4;
 const unsigned long *VAR_5;

 VAR_5 = (unsigned long *)&VAR_1;

 VAR_4 = FUNC_2(VAR_3->control_code_page);
 FUNC_1((void *)VAR_4, (const void *)VAR_5[0],
   VAR_2);
 FUNC_0((unsigned long)VAR_4,
   (unsigned long)VAR_4 + VAR_2);
 VAR_0 = VAR_3;

 return 0;
}
