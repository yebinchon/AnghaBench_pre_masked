
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device {TYPE_1__* node; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; char* type; } ;


 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (TYPE_1__*,char*,int*) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;

ssize_t FUNC_3(struct of_device *VAR_0,
    char *VAR_1, ssize_t VAR_2)
{
 const char *VAR_3;
 int VAR_4, VAR_5;
 ssize_t VAR_6, VAR_7, VAR_8;


 VAR_7 = FUNC_2(VAR_1, VAR_2, "of:N%sT%s",
    VAR_0->node->name, VAR_0->node->type);


 VAR_3 = FUNC_1(VAR_0->node, "compatible", &VAR_4);
 if (!VAR_3)
  return VAR_7;


 for (VAR_5 = (VAR_4 - 1); VAR_5 >= 0 && !VAR_3[VAR_5]; VAR_5--)
  VAR_4--;
 if (!VAR_4)
  return VAR_7;
 VAR_4++;


 VAR_6 = VAR_7 + VAR_4;
 VAR_8 = VAR_6;

 if (VAR_7 >= VAR_2)
  return VAR_6;

 if (VAR_6 >= VAR_2) {
  VAR_4 = VAR_2 - VAR_7 - 1;
  VAR_8 = VAR_2;
 }


 FUNC_0(&VAR_1[VAR_7 + 1], VAR_3, VAR_4);
 for (VAR_5 = VAR_7; VAR_5 < VAR_8; VAR_5++) {
  char VAR_9 = VAR_1[VAR_5];
  if (VAR_9 == '\0')
   VAR_1[VAR_5] = 'C';
  else if (VAR_9 == ' ')
   VAR_1[VAR_5] = '_';
 }

 return VAR_6;
}
