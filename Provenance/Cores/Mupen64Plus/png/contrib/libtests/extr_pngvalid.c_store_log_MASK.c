
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nerrors; scalar_t__ verbose; int error; int nwarnings; } ;
typedef TYPE_1__ png_store ;
typedef int png_const_structp ;
typedef int png_const_charp ;


 int FUNC_0 (TYPE_1__*,int ,int ,int,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(png_store* VAR_0, png_const_structp VAR_1, png_const_charp VAR_2,
   int VAR_3)
{




   if (VAR_3 ? (VAR_0->nerrors)++ == 0 :
       (VAR_0->nwarnings)++ == 0 && VAR_0->nerrors == 0)
      FUNC_0(VAR_0, VAR_1, VAR_0->error, sizeof VAR_0->error, 0, VAR_2);

   if (VAR_0->verbose)
      FUNC_1(VAR_0, VAR_1, VAR_3 ? "error: " : "warning: ", VAR_2);
}
