
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {size_t size; int * data; } ;
typedef size_t off_t ;


 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int
FUNC_2(char* VAR_0, char** VAR_1, off_t VAR_2, int VAR_3,
 int* VAR_4, void* VAR_5)
{
 struct buffer *VAR_6 = (struct buffer *)VAR_5;

 if (VAR_2 >= VAR_6->size) {
  *VAR_4 = 1;
  return 0;
 }

 VAR_3 = FUNC_1((int) (VAR_6->size - VAR_2), VAR_3);

 FUNC_0(VAR_0, &VAR_6->data[VAR_2], VAR_3);

 return VAR_3;
}
