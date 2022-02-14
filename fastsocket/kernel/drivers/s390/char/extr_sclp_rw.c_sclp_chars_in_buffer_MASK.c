
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_buffer {int mto_char_sum; scalar_t__ current_length; int * current_line; } ;



int
FUNC_0(struct sclp_buffer *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->mto_char_sum;
 if (VAR_0->current_line != ((void*)0))
  VAR_1 += VAR_0->current_length;
 return VAR_1;
}
