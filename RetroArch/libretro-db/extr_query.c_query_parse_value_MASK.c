
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bool_; } ;
struct rmsgpack_dom_value {TYPE_1__ val; void* type; } ;
struct buffer {size_t offset; scalar_t__* data; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 struct buffer FUNC_2 (struct buffer) ;
 struct buffer FUNC_3 (struct buffer,struct rmsgpack_dom_value*,char const**) ;
 struct buffer FUNC_4 (struct buffer,struct rmsgpack_dom_value*,char const**) ;
 scalar_t__ FUNC_5 (struct buffer,char*) ;

__attribute__((used)) static struct buffer FUNC_6(struct buffer VAR_2,
      struct rmsgpack_dom_value *VAR_3, const char **VAR_4)
{
   VAR_2 = FUNC_2(VAR_2);

   if (FUNC_5(VAR_2, "nil"))
   {
      VAR_2.offset += FUNC_0("nil");
      VAR_3->type = VAR_1;
   }
   else if (FUNC_5(VAR_2, "true"))
   {
      VAR_2.offset += FUNC_0("true");
      VAR_3->type = VAR_0;
      VAR_3->val.bool_ = 1;
   }
   else if (FUNC_5(VAR_2, "false"))
   {
      VAR_2.offset += FUNC_0("false");
      VAR_3->type = VAR_0;
      VAR_3->val.bool_ = 0;
   }
   else if (FUNC_5(VAR_2, "b") || FUNC_5(VAR_2, "\"") || FUNC_5(VAR_2, "'"))
      VAR_2 = FUNC_4(VAR_2, VAR_3, VAR_4);
   else if (FUNC_1((int)VAR_2.data[VAR_2.offset]))
      VAR_2 = FUNC_3(VAR_2, VAR_3, VAR_4);
   return VAR_2;
}
