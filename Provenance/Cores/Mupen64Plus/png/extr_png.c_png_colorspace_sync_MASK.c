
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* png_inforp ;
typedef TYPE_2__* png_const_structrp ;
struct TYPE_8__ {int colorspace; } ;
struct TYPE_7__ {int colorspace; } ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;

void
FUNC_1(png_const_structrp VAR_0, png_inforp VAR_1)
{
   if (VAR_1 == ((void*)0))
      return;

   VAR_1->colorspace = VAR_0->colorspace;
   FUNC_0(VAR_0, VAR_1);
}
