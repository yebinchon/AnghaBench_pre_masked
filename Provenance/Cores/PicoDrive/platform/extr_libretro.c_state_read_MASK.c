
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savestate_state {scalar_t__ pos; scalar_t__ size; size_t load_buf; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (void*,size_t,size_t) ;

size_t FUNC_2(void *VAR_0, size_t VAR_1, size_t VAR_2, void *VAR_3)
{
 struct savestate_state *VAR_4 = VAR_3;
 size_t VAR_5 = VAR_1 * VAR_2;

 if (VAR_4->pos + VAR_5 > VAR_4->size) {
  FUNC_0("savestate error: %u/%u\n",
   VAR_4->pos + VAR_5, VAR_4->size);
  VAR_5 = VAR_4->size - VAR_4->pos;
  if ((int)VAR_5 <= 0)
   return 0;
 }

 FUNC_1(VAR_0, VAR_4->load_buf + VAR_4->pos, VAR_5);
 VAR_4->pos += VAR_5;
 return VAR_5;
}
