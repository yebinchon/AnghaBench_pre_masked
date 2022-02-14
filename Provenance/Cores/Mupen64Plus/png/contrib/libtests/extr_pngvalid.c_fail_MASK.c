
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nerrors; scalar_t__ nwarnings; scalar_t__ treat_warnings_as_errors; int verbose; } ;
struct TYPE_5__ {TYPE_1__ this; int log; } ;
typedef TYPE_2__ png_modifier ;



__attribute__((used)) static int FUNC_0(png_modifier *VAR_0)
{
   return !VAR_0->log && !VAR_0->this.verbose && (VAR_0->this.nerrors > 0 ||
       (VAR_0->this.treat_warnings_as_errors && VAR_0->this.nwarnings > 0));
}
