
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct display {scalar_t__ errset; } ;
typedef size_t png_byte ;
struct TYPE_2__ {scalar_t__* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct display*,int ,char*,int,char const*) ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__*,char const*,size_t) ;

__attribute__((used)) static png_byte
FUNC_3(struct display *VAR_4, const char *VAR_5, size_t VAR_6)




{
   png_byte VAR_7;

   for (VAR_7=0; VAR_7<VAR_2; ++VAR_7)
      if (FUNC_2(VAR_3[VAR_7].name, VAR_5, VAR_6) == 0 && VAR_3[VAR_7].name[VAR_6] == 0)
         return VAR_7;




   FUNC_1(VAR_4, VAR_4->errset ? VAR_0 : VAR_1,
         "%.*s: unknown option", (int) VAR_6, VAR_5);
   FUNC_0();
}
