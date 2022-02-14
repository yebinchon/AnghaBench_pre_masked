
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsprintf {scalar_t__ length; scalar_t__ max; unsigned char* buffer; } ;
typedef int FILE ;



__attribute__((used)) static int FUNC_0(int VAR_0, FILE *VAR_1)
{
  struct nsprintf *VAR_2 = (struct nsprintf *)VAR_1;
  unsigned char VAR_3 = (unsigned char)VAR_0;

  if(VAR_2->length < VAR_2->max) {

    VAR_2->buffer[0] = VAR_3;
    VAR_2->buffer++;
    VAR_2->length++;
    return VAR_3;
  }
  return -1;
}
