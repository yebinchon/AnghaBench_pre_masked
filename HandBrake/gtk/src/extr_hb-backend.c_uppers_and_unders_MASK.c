
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char gchar ;
typedef int gboolean ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static gboolean
FUNC_2(gchar *VAR_2)
{
    if (VAR_2 == ((void*)0)) return VAR_0;
    VAR_2 = FUNC_0(FUNC_1(VAR_2));
    while (*VAR_2)
    {
        if (*VAR_2 == ' ')
        {
            return VAR_0;
        }
        if (*VAR_2 >= 'a' && *VAR_2 <= 'z')
        {
            return VAR_0;
        }
        VAR_2++;
    }
    return VAR_1;
}
