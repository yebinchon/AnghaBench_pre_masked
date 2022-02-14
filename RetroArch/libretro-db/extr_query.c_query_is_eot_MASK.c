
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {unsigned int len; scalar_t__ offset; } ;



__attribute__((used)) static int FUNC_0(struct buffer VAR_0)
{
   return ((unsigned)VAR_0.offset >= VAR_0.len);
}
