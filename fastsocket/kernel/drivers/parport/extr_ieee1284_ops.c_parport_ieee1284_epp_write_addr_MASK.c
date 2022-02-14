
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* data_forward ) (struct parport*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct parport*,int,int) ;
 scalar_t__ FUNC_1 (struct parport*,int ,int ,int) ;
 int FUNC_2 (struct parport*,unsigned char) ;
 int FUNC_3 (struct parport*) ;

size_t FUNC_4 (struct parport *VAR_5,
     const void *VAR_6, size_t VAR_7,
     int VAR_8)
{
 unsigned char *VAR_9 = (unsigned char *) VAR_6;
 size_t VAR_10 = 0;


 FUNC_0 (VAR_5,
         VAR_3 |
         VAR_0 |
         VAR_2 |
         VAR_1,
         VAR_3 |
         VAR_1);
 VAR_5->ops->data_forward (VAR_5);
 for (; VAR_7 > 0; VAR_7--, VAR_9++) {

  FUNC_2 (VAR_5, *VAR_9);
  FUNC_0 (VAR_5, VAR_2,
          VAR_2);


  if (FUNC_1 (VAR_5, VAR_4, 0, 10))
   break;


  FUNC_0 (VAR_5, VAR_2, 0);


  if (FUNC_1 (VAR_5, VAR_4,
          VAR_4, 5))
   break;

  VAR_10++;
 }


 FUNC_0 (VAR_5, VAR_3, 0);

 return VAR_10;
}
