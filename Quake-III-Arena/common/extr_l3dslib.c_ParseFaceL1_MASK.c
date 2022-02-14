
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tshort ;
struct TYPE_2__ {int* v; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (unsigned short*,int,int,int *) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_4 (FILE *VAR_6)
{

 int VAR_7, VAR_8, VAR_9;
 unsigned short VAR_10;

 if (VAR_4)
  FUNC_0 ("Error: Multiple face chunks");

 VAR_4 = 1;
 VAR_9 = VAR_1;

 if (FUNC_2(VAR_6))
  FUNC_0 ("Error: unexpected end of file");

 FUNC_3(&VAR_10, sizeof(VAR_10), 1, VAR_6);
 VAR_1 += sizeof(VAR_10);
 VAR_2 = (int)VAR_10;

 if (VAR_2 > VAR_0)
  FUNC_0 ("Error: Too many triangles");

 for (VAR_7=0 ; VAR_7<VAR_2 ; VAR_7++)
 {
  for (VAR_8=0 ; VAR_8<4 ; VAR_8++)
  {
   if (FUNC_2(VAR_6))
    FUNC_0 ("Error: unexpected end of file");

   FUNC_3(&VAR_10, sizeof(VAR_10), 1, VAR_6);
   VAR_1 += sizeof(VAR_10);
   VAR_3[VAR_7].v[VAR_8] = (int)VAR_10;
  }
 }

 if (VAR_5 && VAR_4)
  FUNC_1 ();

 return VAR_1 - VAR_9;
}
