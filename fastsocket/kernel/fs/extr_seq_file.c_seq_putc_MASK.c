
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ count; scalar_t__ size; char* buf; } ;



int FUNC_0(struct seq_file *VAR_0, char VAR_1)
{
 if (VAR_0->count < VAR_0->size) {
  VAR_0->buf[VAR_0->count++] = VAR_1;
  return 0;
 }
 return -1;
}
