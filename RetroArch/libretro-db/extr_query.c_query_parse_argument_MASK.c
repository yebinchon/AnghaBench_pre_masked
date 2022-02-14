
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer {size_t offset; scalar_t__* data; } ;
struct TYPE_2__ {int value; int invocation; } ;
struct argument {TYPE_1__ a; void* type; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct buffer FUNC_1 (struct buffer) ;
 struct buffer FUNC_2 (struct buffer,int *,char const**) ;
 struct buffer FUNC_3 (struct buffer,int *,char const**) ;
 struct buffer FUNC_4 (struct buffer,int *,char const**) ;
 scalar_t__ FUNC_5 (struct buffer,char*) ;

__attribute__((used)) static struct buffer FUNC_6(struct buffer VAR_2,
      struct argument *VAR_3, const char **VAR_4)
{
   VAR_2 = FUNC_1(VAR_2);

   if (
         FUNC_0((int)VAR_2.data[VAR_2.offset])
         && !(
               FUNC_5(VAR_2, "nil")
            || FUNC_5(VAR_2, "true")
            || FUNC_5(VAR_2, "false")
            || FUNC_5(VAR_2, "b\"")
            || FUNC_5(VAR_2, "b'")
            )
      )
   {
      VAR_3->type = VAR_0;
      VAR_2 = FUNC_2(VAR_2,
            &VAR_3->a.invocation, VAR_4);
   }
   else if (FUNC_5(VAR_2, "{"))
   {
      VAR_3->type = VAR_0;
      VAR_2 = FUNC_3(VAR_2, &VAR_3->a.invocation, VAR_4);
   }
   else
   {
      VAR_3->type = VAR_1;
      VAR_2 = FUNC_4(VAR_2, &VAR_3->a.value, VAR_4);
   }
   return VAR_2;
}
