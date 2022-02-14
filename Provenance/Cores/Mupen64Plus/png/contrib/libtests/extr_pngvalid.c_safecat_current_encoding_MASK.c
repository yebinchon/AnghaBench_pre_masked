
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ encoding_ignored; int current_gamma; int current_encoding; } ;
typedef TYPE_1__ png_modifier ;


 size_t FUNC_0 (char*,size_t,size_t,char*) ;
 size_t FUNC_1 (char*,size_t,size_t,int ,int ) ;

__attribute__((used)) static size_t
FUNC_2(char *VAR_0, size_t VAR_1, size_t VAR_2,
   const png_modifier *VAR_3)
{
   VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->current_encoding,
      VAR_3->current_gamma);

   if (VAR_3->encoding_ignored)
      VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, "[overridden]");

   return VAR_2;
}
