
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {size_t offset; char* data; } ;


 scalar_t__ FUNC_0 (struct buffer) ;
 int FUNC_1 (size_t,char const**) ;

__attribute__((used)) static struct buffer FUNC_2(
      struct buffer VAR_0, char * VAR_1,
      const char ** VAR_2)
{
   if (FUNC_0(VAR_0))
   {
      FUNC_1(VAR_0.offset, VAR_2);
      return VAR_0;
   }

   *VAR_1 = VAR_0.data[VAR_0.offset];
   VAR_0.offset++;
   return VAR_0;
}
