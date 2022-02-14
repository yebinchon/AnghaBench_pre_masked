
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input {size_t bytes_read; int in; } ;


 size_t FUNC_0 (void*,size_t,size_t,int ) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_0, size_t VAR_1, size_t VAR_2, void *VAR_3)
{
  struct input *VAR_4 = VAR_3;
  size_t VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4->in);
  VAR_4->bytes_read += VAR_5;
  return VAR_5;
}
