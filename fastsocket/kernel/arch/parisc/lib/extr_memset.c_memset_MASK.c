
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int op_t ;


 int VAR_0 ;

void *
FUNC_0 (void *VAR_1, int VAR_2, size_t VAR_3)
{
  unsigned int VAR_4 = VAR_2;
  long int VAR_5 = (long int) VAR_1;

  if (VAR_3 >= 8)
    {
      size_t VAR_6;
      op_t VAR_7;

      VAR_7 = (unsigned char) VAR_4;
      VAR_7 |= VAR_7 << 8;
      VAR_7 |= VAR_7 << 16;
      if (VAR_0 > 4)

 VAR_7 |= (VAR_7 << 16) << 16;



      while (VAR_5 % VAR_0 != 0)
 {
   ((unsigned char *) VAR_5)[0] = VAR_4;
   VAR_5 += 1;
   VAR_3 -= 1;
 }


      VAR_6 = VAR_3 / (VAR_0 * 8);
      while (VAR_6 > 0)
 {
   ((op_t *) VAR_5)[0] = VAR_7;
   ((op_t *) VAR_5)[1] = VAR_7;
   ((op_t *) VAR_5)[2] = VAR_7;
   ((op_t *) VAR_5)[3] = VAR_7;
   ((op_t *) VAR_5)[4] = VAR_7;
   ((op_t *) VAR_5)[5] = VAR_7;
   ((op_t *) VAR_5)[6] = VAR_7;
   ((op_t *) VAR_5)[7] = VAR_7;
   VAR_5 += 8 * VAR_0;
   VAR_6 -= 1;
 }
      VAR_3 %= VAR_0 * 8;


      VAR_6 = VAR_3 / VAR_0;
      while (VAR_6 > 0)
 {
   ((op_t *) VAR_5)[0] = VAR_7;
   VAR_5 += VAR_0;
   VAR_6 -= 1;
 }
      VAR_3 %= VAR_0;
    }


  while (VAR_3 > 0)
    {
      ((unsigned char *) VAR_5)[0] = VAR_4;
      VAR_5 += 1;
      VAR_3 -= 1;
    }

  return VAR_1;
}
