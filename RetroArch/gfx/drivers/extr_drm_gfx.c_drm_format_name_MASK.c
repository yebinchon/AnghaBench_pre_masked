
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int format_str ;
struct TYPE_3__ {unsigned int const format; int name; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void FUNC_2(const unsigned int VAR_1, char *VAR_2)
{
 unsigned int VAR_3;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
   {
  if (VAR_0[VAR_3].format == VAR_1)
   FUNC_1(VAR_2, VAR_0[VAR_3].name, sizeof(VAR_2));
 }
}
