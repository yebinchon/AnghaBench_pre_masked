
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ count; scalar_t__ size; scalar_t__ buf; } ;


 int FUNC_0 (scalar_t__,void const*,size_t) ;

int FUNC_1(struct seq_file *VAR_0, const void *VAR_1, size_t VAR_2)
{
 if (VAR_0->count + VAR_2 < VAR_0->size) {
  FUNC_0(VAR_0->buf + VAR_0->count, VAR_1, VAR_2);
  VAR_0->count += VAR_2;
  return 0;
 }
 VAR_0->count = VAR_0->size;
 return -1;
}
