
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_data_t {char* name; char* value; } ;
typedef int off_t ;


 int FUNC_0 (char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, char **VAR_1,
       off_t VAR_2, int VAR_3,
       int *VAR_4, void *VAR_5)
{
 int VAR_6;
 struct fb_data_t *VAR_7 = (struct fb_data_t *)VAR_5;


 VAR_6 = FUNC_0(VAR_0, "%s = '%s'\n",
        VAR_7->name, VAR_7->value);

 return VAR_6;
}
