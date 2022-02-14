
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int modes; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct parport*,void const*,size_t) ;
 size_t FUNC_1 (struct parport*,void const*,size_t) ;

__attribute__((used)) static size_t FUNC_2(struct parport *VAR_1,
         const void *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = 0;
 if (VAR_3)


  VAR_4 = (VAR_1->modes & VAR_0) ?
   FUNC_0(VAR_1, VAR_2, VAR_3) :
   FUNC_1(VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
