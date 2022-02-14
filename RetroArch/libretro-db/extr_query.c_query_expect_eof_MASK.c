
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {size_t offset; unsigned int len; int * data; } ;


 struct buffer FUNC_0 (struct buffer) ;
 int FUNC_1 (size_t,int ,char const**) ;

__attribute__((used)) static struct buffer FUNC_2(struct buffer VAR_0, const char ** VAR_1)
{
   VAR_0 = FUNC_0(VAR_0);
   if ((unsigned)VAR_0.offset < VAR_0.len)
      FUNC_1(VAR_0.offset, VAR_0.data[VAR_0.offset], VAR_1);
   return VAR_0;
}
