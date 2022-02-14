
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int_; } ;
struct rmsgpack_dom_value {TYPE_1__ val; int type; } ;
struct buffer {int offset; scalar_t__* data; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char const**) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,int *) ;

__attribute__((used)) static struct buffer FUNC_3(struct buffer VAR_2,
      struct rmsgpack_dom_value *VAR_3, const char **VAR_4)
{
   bool VAR_5 = 0;

   VAR_3->type = VAR_0;

   VAR_5 = (FUNC_2(VAR_2.data + VAR_2.offset,
                         VAR_1,
                         (int64_t*)&VAR_3->val.int_) == 0);

   if (VAR_5)
      FUNC_1(VAR_2.offset, VAR_4);
   else
   {
      while (FUNC_0((int)VAR_2.data[VAR_2.offset]))
         VAR_2.offset++;
   }

   return VAR_2;
}
